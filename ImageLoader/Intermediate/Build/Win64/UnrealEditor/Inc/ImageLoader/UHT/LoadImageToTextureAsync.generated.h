// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncNodes/LoadImageToTextureAsync.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULoadImageToTextureAsync;
class UObject;
class UTexture2D;
#ifdef IMAGELOADER_LoadImageToTextureAsync_generated_h
#error "LoadImageToTextureAsync.generated.h already included, missing '#pragma once' in LoadImageToTextureAsync.h"
#endif
#define IMAGELOADER_LoadImageToTextureAsync_generated_h

#define FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h_9_DELEGATE \
IMAGELOADER_API void FOnImageLoadCompletedBP_DelegateWrapper(const FMulticastScriptDelegate& OnImageLoadCompletedBP, UTexture2D* LoadedTexture, const FString& ImagePath, FVector2D ImageSize);


#define FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h_10_DELEGATE \
IMAGELOADER_API void FOnImageLoadFailureBP_DelegateWrapper(const FMulticastScriptDelegate& OnImageLoadFailureBP);


#define FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadImageToTextureAsync);


#define FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadImageToTextureAsync(); \
	friend struct Z_Construct_UClass_ULoadImageToTextureAsync_Statics; \
public: \
	DECLARE_CLASS(ULoadImageToTextureAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ImageLoader"), NO_API) \
	DECLARE_SERIALIZER(ULoadImageToTextureAsync)


#define FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadImageToTextureAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULoadImageToTextureAsync(ULoadImageToTextureAsync&&); \
	ULoadImageToTextureAsync(const ULoadImageToTextureAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadImageToTextureAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadImageToTextureAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadImageToTextureAsync) \
	NO_API virtual ~ULoadImageToTextureAsync();


#define FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h_14_PROLOG
#define FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h_17_INCLASS_NO_PURE_DECLS \
	FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMAGELOADER_API UClass* StaticClass<class ULoadImageToTextureAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
