// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveTextureToDisk/SaveTextureToDiskAsync.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USaveTextureToDiskAsync;
class UTexture2D;
#ifdef IMAGELOADER_SaveTextureToDiskAsync_generated_h
#error "SaveTextureToDiskAsync.generated.h already included, missing '#pragma once' in SaveTextureToDiskAsync.h"
#endif
#define IMAGELOADER_SaveTextureToDiskAsync_generated_h

#define FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h_11_DELEGATE \
IMAGELOADER_API void FOnTextureSaveSuccessBP_DelegateWrapper(const FMulticastScriptDelegate& OnTextureSaveSuccessBP, const FString& SavedPath);


#define FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h_14_DELEGATE \
IMAGELOADER_API void FOnTextureSaveFailureBP_DelegateWrapper(const FMulticastScriptDelegate& OnTextureSaveFailureBP);


#define FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveTextureToDiskAsync);


#define FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveTextureToDiskAsync(); \
	friend struct Z_Construct_UClass_USaveTextureToDiskAsync_Statics; \
public: \
	DECLARE_CLASS(USaveTextureToDiskAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ImageLoader"), NO_API) \
	DECLARE_SERIALIZER(USaveTextureToDiskAsync)


#define FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveTextureToDiskAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USaveTextureToDiskAsync(USaveTextureToDiskAsync&&); \
	USaveTextureToDiskAsync(const USaveTextureToDiskAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveTextureToDiskAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveTextureToDiskAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveTextureToDiskAsync) \
	NO_API virtual ~USaveTextureToDiskAsync();


#define FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h_18_PROLOG
#define FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h_21_INCLASS_NO_PURE_DECLS \
	FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMAGELOADER_API UClass* StaticClass<class USaveTextureToDiskAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
