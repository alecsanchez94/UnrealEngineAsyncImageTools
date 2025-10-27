// Fill out your copyright notice in the Description page of Project Settings.

#include "SaveTextureToDiskAsync.h"
#include "ImageWriteQueue.h"
#include "Async/Async.h"
#include "ImageWriteTask.h"
#include "IImageWrapper.h"

USaveTextureToDiskAsync* USaveTextureToDiskAsync::SaveTextureToDiskAsync(const UObject* WorldContextObject,
                                                                         UTexture2D* TextureToSave, FString FilePath)
{
	USaveTextureToDiskAsync* BlueprintNode = NewObject<USaveTextureToDiskAsync>();
	BlueprintNode->WorldContext = WorldContextObject;
	BlueprintNode->Texture = TextureToSave;
	BlueprintNode->SaveFilePath = FilePath;
	return BlueprintNode;
}

void USaveTextureToDiskAsync::Activate()
{
	Super::Activate();
	if (!Texture || SaveFilePath.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Texture or FilePath is invalid for async save operation."));
		HandleSaveResult(false);
		return;
	}

	// Defer the time-consuming operation (disk I/O) to a background thread.
	// The Async function handles moving to a worker thread and back to the game thread.
	Async(EAsyncExecution::Thread, [this]()
	{
		DoSaveOperation();
	});
}

void USaveTextureToDiskAsync::DoSaveOperation()
{
	// Check if the Texture and its Source are valid before proceeding.
    if (!Texture || !Texture->Source.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("Texture or its source is not valid for async save operation."));
        AsyncTask(ENamedThreads::GameThread, [this]() { HandleSaveResult(false); });
        return;
    }

    // 1. Determine file format and save options
    EImageFormat DesiredFormat = EImageFormat::PNG;
    FString Extension = FPaths::GetExtension(SaveFilePath, true).ToLower();

    if (Extension == TEXT(".jpg") || Extension == TEXT(".jpeg"))
    {
        DesiredFormat = EImageFormat::JPEG;
    }

    // 2. Prepare the Image Write Task
    TUniquePtr<FImageWriteTask> WriteTask = MakeUnique<FImageWriteTask>();
    WriteTask->Format = DesiredFormat;
    WriteTask->CompressionQuality = 95;
    WriteTask->Filename = SaveFilePath;

    // --- Extract Raw Pixel Data on the Worker Thread ---
    int32 Width = Texture->Source.GetSizeX();
    int32 Height = Texture->Source.GetSizeY();
    
    // Allocate the array with the correct size
    TArray64<uint8> RawData;
    const int64 BytesNeeded = Width * Height * sizeof(FColor);
    
    // Get the mip data synchronously
    if (!Texture->Source.GetMipData(RawData, 0))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to read raw pixel data from TextureSource for saving: %s"), *Texture->GetName());
        AsyncTask(ENamedThreads::GameThread, [this]() { HandleSaveResult(false); });
        return;
    }

    // Convert raw bytes to FColor array (using TArray64 to match the constructor)
    TArray64<FColor> Pixels;
    Pixels.SetNum(Width * Height);
    FMemory::Memcpy(Pixels.GetData(), RawData.GetData(), BytesNeeded);
    
    // 3. Populate the FImageWriteTask with the raw data
    WriteTask->PixelData = MakeUnique<TImagePixelData<FColor>>(
        FIntPoint(Width, Height),
        TArray64<FColor>(MoveTemp(Pixels))
    );

    // 4. Set the completion callback to return to the game thread
    WriteTask->OnCompleted = [this](bool bInSuccess)
    {
        // Transition back to the game thread to fire delegates
        AsyncTask(ENamedThreads::GameThread, [this, bInSuccess]()
        {
            HandleSaveResult(bInSuccess);
        });
    };

    // 5. Enqueue the task
    IImageWriteQueueModule& ImageWriteQueueModule = FModuleManager::LoadModuleChecked<IImageWriteQueueModule>("ImageWriteQueue");
    IImageWriteQueue& WriteQueue = ImageWriteQueueModule.GetWriteQueue();
    
    WriteQueue.Enqueue(MoveTemp(WriteTask));
}

void USaveTextureToDiskAsync::HandleSaveResult(bool bSuccess)
{
	// Clean up or keep the node alive as needed (UBlueprintAsyncActionBase nodes 
	// usually self-destruct after firing delegates, which is handled by a superclass call 
	// if using `RegisterWithGameInstance` or similar, but for simplicity, we fire and then call `SetReadyToDestroy()`).
    
	if (bSuccess)
	{
		UE_LOG(LogTemp, Log, TEXT("Successfully saved texture to: %s"), *SaveFilePath);
		OnSaveSuccess.Broadcast(SaveFilePath);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to save texture to: %s"), *SaveFilePath);
		OnSaveFailure.Broadcast();
	}

	// This is crucial for UBlueprintAsyncActionBase nodes to finalize their execution.
	SetReadyToDestroy();
}
