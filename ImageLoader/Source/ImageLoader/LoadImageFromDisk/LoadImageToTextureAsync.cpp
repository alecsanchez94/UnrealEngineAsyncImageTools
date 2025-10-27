// Fill out your copyright notice in the Description page of Project Settings.


#include "LoadImageToTextureAsync.h"

#include "ImageLoader/FunctionLibrary/UImageLoaderStatics.h"
#include "ImageLoader/SubSystem/ImageLoaderSubSystem.h"

ULoadImageToTextureAsync* ULoadImageToTextureAsync::LoadImageToTextureAsync(const UObject* NewWorldContext, FString ImagePath)
{
	ULoadImageToTextureAsync* Node = NewObject<ULoadImageToTextureAsync>();
	Node->ImagePath = ImagePath;
	Node->WorldContext = NewWorldContext;
	Node->FilePath = ImagePath;
	return Node;
}

void ULoadImageToTextureAsync::Activate()
{
	Super::Activate();

	if (Active) 
	{
		FFrame::KismetExecutionMessage(TEXT("MiniTimer is already running."), ELogVerbosity::Warning);
		return;
	}

	Active = true;

	UTexture2D* LoadedTexture = nullptr;
	UImageLoaderSubSystem* ImageLoaderSubsystem = UUImageLoaderStatics::GetImageLoaderSubsystem(WorldContext);
	if (ImageLoaderSubsystem)
	{
		FVector2D RawImageSize;
		UTexture2D* LoadedImage = ImageLoaderSubsystem->LoadImage(ImagePath, RawImageSize);
		if (LoadedImage)
		{
			OnImageLoadCompleted.Broadcast(LoadedImage, ImagePath, RawImageSize);
			return;
		}

	}
	else
	{
		FFrame::KismetExecutionMessage(TEXT("ImageLoaderSubsystem is null."), ELogVerbosity::Warning);
	}

	OnImageLoadFailure.Broadcast();
	
}
