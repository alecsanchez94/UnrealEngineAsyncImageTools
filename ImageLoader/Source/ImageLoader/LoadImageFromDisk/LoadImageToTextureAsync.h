// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "LoadImageToTextureAsync.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnImageLoadCompletedBP, UTexture2D*, LoadedTexture, FString, ImagePath, FVector2D, ImageSize);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnImageLoadFailureBP);
/**
 * 
 */
UCLASS(Blueprintable)
class IMAGELOADER_API ULoadImageToTextureAsync : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnImageLoadCompletedBP OnImageLoadCompleted;

	UPROPERTY(BlueprintAssignable)
	FOnImageLoadFailureBP OnImageLoadFailure;

	UFUNCTION(BlueprintCallable, meta= (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "ImageLoader")
	static ULoadImageToTextureAsync* LoadImageToTextureAsync(const UObject* NewWorldContext, FString ImagePath);
	virtual void Activate() override;
	FString ImagePath;

private:

	FString FilePath;
	bool Active;
	UPROPERTY()
	const UObject* WorldContext;
};
