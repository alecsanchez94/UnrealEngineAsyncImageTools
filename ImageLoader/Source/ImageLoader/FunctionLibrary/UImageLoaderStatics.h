// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UImageLoaderStatics.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnImageLoadCompleted, UTexture2D* LoadedTexture, bool bWasSuccessful);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnImageLoadCompleted, UTexture2D*, LoadedTexture, FString, ImagePath);

class UImageLoaderSubSystem;
/**
 * 
 */
UCLASS(Blueprintable)
class IMAGELOADER_API UUImageLoaderStatics : public UObject
{
	GENERATED_BODY()


	

public:

	static UImageLoaderSubSystem* GetImageLoaderSubsystem(const UObject* WorldContextObject);
};
