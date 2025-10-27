// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SaveTextureToDiskAsync.generated.h"


// Delegate for successful saving (returns the path it saved to)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTextureSaveSuccessBP, FString, SavedPath);

// Delegate for save failure
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTextureSaveFailureBP);
/**
 * 
 */
UCLASS()
class IMAGELOADER_API USaveTextureToDiskAsync : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	// --- Delegates ---

	/** Called when the texture has been successfully saved to disk. */
	UPROPERTY(BlueprintAssignable)
	FOnTextureSaveSuccessBP OnSaveSuccess;

	/** Called when the texture failed to be saved to disk. */
	UPROPERTY(BlueprintAssignable)
	FOnTextureSaveFailureBP OnSaveFailure;

	// --- Blueprint Callable Factory ---

	/**
	 * Asynchronously saves a UTexture2D asset's raw data to a file on disk.
	 * @param TextureToSave The UTexture2D asset to save.
	 * @param FilePath The full path to save the file, including the file name and extension (e.g., C:/path/to/my/image.png).
	 */
	UFUNCTION(BlueprintCallable, meta= (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "ImageLoader")
	static USaveTextureToDiskAsync* SaveTextureToDiskAsync(const UObject* WorldContextObject, UTexture2D* TextureToSave, FString FilePath);

	// --- Overrides ---

	/** Starts the asynchronous save operation. */
	virtual void Activate() override;

private:
	// --- Internal State ---

	/** The Texture2D asset we are saving. */
	UPROPERTY()
	UTexture2D* Texture;

	/** The full path to save the file. */
	FString SaveFilePath;

	/** The World context object (not needed for this static function, but kept for consistency). */
	UPROPERTY()
	const UObject* WorldContext;

	// --- Async Operation ---

	/** Runs the actual save operation on a worker thread. */
	void DoSaveOperation();

	/** Handles the result of the save operation back on the game thread. */
	void HandleSaveResult(bool bSuccess);
};
