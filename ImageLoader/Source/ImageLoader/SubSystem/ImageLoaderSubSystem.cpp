// Fill out your copyright notice in the Description page of Project Settings.


#include "ImageLoaderSubSystem.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "ImageUtils.h"

void UImageLoaderSubSystem::LoadImageAsync(FString ImagePath, FOnImageLoadCompleted OnCompleted)
{
	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [this, ImagePath, OnCompleted]()
	{
		TArray<uint8> RawFileData;
		if (FFileHelper::LoadFileToArray(RawFileData, *ImagePath))
		{
			UTexture2D* ImageWrapper = FImageUtils::ImportFileAsTexture2D(ImagePath);
			if (ImageWrapper)
			{
				int32 Width = ImageWrapper->GetSurfaceWidth();
				int32 Height = ImageWrapper->GetSurfaceHeight();

				UTexture2D* LoadedTexture = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);

				uint8* TextureDataPtr = reinterpret_cast<uint8*>(LoadedTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE));
				FMemory::Memcpy(TextureDataPtr, RawFileData.GetData(), RawFileData.Num());
				LoadedTexture->GetPlatformData()->Mips[0].SizeX = Width;
				LoadedTexture->UpdateResource();

				AsyncTask(ENamedThreads::GameThread, [LoadedTexture, OnCompleted, ImagePath]()
				{
					// Once completed, call the delegate on the game thread
					OnCompleted.Broadcast(ImagePath, LoadedTexture, FVector2D(LoadedTexture->GetSurfaceWidth(), LoadedTexture->GetSurfaceHeight()));
				});
			}
		}
	});
}

UTexture2D* UImageLoaderSubSystem::LoadImage(FString ImagePath, FVector2D& OutSize)
{
	// UTexture2D* LoadedTexture = FImageUtils::ImportFileAsTexture2D(ImagePath);
	// return LoadedTexture;

	auto& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));

	TArray<uint8> RawFileData;
	FFileHelper::LoadFileToArray(RawFileData, *ImagePath);

	EImageFormat ImageFormat = ImageWrapperModule.DetectImageFormat(RawFileData.GetData(), RawFileData.Num()); 
	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(ImageFormat);
	
	if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	{
		int32 Width = ImageWrapper->GetWidth();
		int32 Height = ImageWrapper->GetHeight();

		// Print out the original size of image in the log
		UE_LOG(LogTemp, Warning, TEXT("Image original size: width = %d, height = %d."), Width, Height);

		UTexture2D* LoadedTexture = FImageUtils::ImportFileAsTexture2D(ImagePath);
		LoadedTexture->AddToRoot();
		OutSize = FVector2D(Width, Height);
		return LoadedTexture;
	}

	OutSize = FVector2D(0, 0);
	return nullptr;
}
