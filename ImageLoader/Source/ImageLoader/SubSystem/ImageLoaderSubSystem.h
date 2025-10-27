// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
// #include "ImageLoader/AsyncNodes/LoadImageToTextureAsync.h"
#include "ImageLoader/AsyncNodes/LoadImageToTextureAsync.h"
#include "Subsystems/WorldSubsystem.h"
#include "ImageLoaderSubSystem.generated.h"


//DECLARE_DELEGATE_ThreeParams(FOnImageLoadCompleted, FString ImagePath, UTexture2D* LoadedTexture, FVector2D TextureSize);
DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnImageLoadCompleted, FString /*ImagePath*/, UTexture2D* /*LoadedTexture*/, FVector2D /*TextureSize*/);
/**
 * 
 */
UCLASS()
class IMAGELOADER_API UImageLoaderSubSystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:
	void LoadImageAsync(FString ImagePath, FOnImageLoadCompleted OnCompleted);
	// void LoadImageAsync(FString ImagePath, FOnImageLoadCompleted OnCompleted);
	UTexture2D* LoadImage(FString ImagePath, FVector2D& OutSize);
};
