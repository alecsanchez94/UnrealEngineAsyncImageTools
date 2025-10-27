// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImageLoader/SaveTextureToDisk/SaveTextureToDiskAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveTextureToDiskAsync() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
IMAGELOADER_API UClass* Z_Construct_UClass_USaveTextureToDiskAsync();
IMAGELOADER_API UClass* Z_Construct_UClass_USaveTextureToDiskAsync_NoRegister();
IMAGELOADER_API UFunction* Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveFailureBP__DelegateSignature();
IMAGELOADER_API UFunction* Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ImageLoader();
// End Cross Module References

// Begin Delegate FOnTextureSaveSuccessBP
struct Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature_Statics
{
	struct _Script_ImageLoader_eventOnTextureSaveSuccessBP_Parms
	{
		FString SavedPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate for successful saving (returns the path it saved to)\n" },
#endif
		{ "ModuleRelativePath", "SaveTextureToDisk/SaveTextureToDiskAsync.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for successful saving (returns the path it saved to)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavedPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature_Statics::NewProp_SavedPath = { "SavedPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ImageLoader_eventOnTextureSaveSuccessBP_Parms, SavedPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature_Statics::NewProp_SavedPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ImageLoader, nullptr, "OnTextureSaveSuccessBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature_Statics::_Script_ImageLoader_eventOnTextureSaveSuccessBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature_Statics::_Script_ImageLoader_eventOnTextureSaveSuccessBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTextureSaveSuccessBP_DelegateWrapper(const FMulticastScriptDelegate& OnTextureSaveSuccessBP, const FString& SavedPath)
{
	struct _Script_ImageLoader_eventOnTextureSaveSuccessBP_Parms
	{
		FString SavedPath;
	};
	_Script_ImageLoader_eventOnTextureSaveSuccessBP_Parms Parms;
	Parms.SavedPath=SavedPath;
	OnTextureSaveSuccessBP.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTextureSaveSuccessBP

// Begin Delegate FOnTextureSaveFailureBP
struct Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveFailureBP__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate for save failure\n" },
#endif
		{ "ModuleRelativePath", "SaveTextureToDisk/SaveTextureToDiskAsync.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for save failure" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveFailureBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ImageLoader, nullptr, "OnTextureSaveFailureBP__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveFailureBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveFailureBP__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveFailureBP__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveFailureBP__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTextureSaveFailureBP_DelegateWrapper(const FMulticastScriptDelegate& OnTextureSaveFailureBP)
{
	OnTextureSaveFailureBP.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnTextureSaveFailureBP

// Begin Class USaveTextureToDiskAsync Function SaveTextureToDiskAsync
struct Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics
{
	struct SaveTextureToDiskAsync_eventSaveTextureToDiskAsync_Parms
	{
		const UObject* WorldContextObject;
		UTexture2D* TextureToSave;
		FString FilePath;
		USaveTextureToDiskAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "ImageLoader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asynchronously saves a UTexture2D asset's raw data to a file on disk.\n\x09 * @param TextureToSave The UTexture2D asset to save.\n\x09 * @param FilePath The full path to save the file, including the file name and extension (e.g., C:/path/to/my/image.png).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "SaveTextureToDisk/SaveTextureToDiskAsync.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously saves a UTexture2D asset's raw data to a file on disk.\n@param TextureToSave The UTexture2D asset to save.\n@param FilePath The full path to save the file, including the file name and extension (e.g., C:/path/to/my/image.png)." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureToSave;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveTextureToDiskAsync_eventSaveTextureToDiskAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::NewProp_TextureToSave = { "TextureToSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveTextureToDiskAsync_eventSaveTextureToDiskAsync_Parms, TextureToSave), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveTextureToDiskAsync_eventSaveTextureToDiskAsync_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveTextureToDiskAsync_eventSaveTextureToDiskAsync_Parms, ReturnValue), Z_Construct_UClass_USaveTextureToDiskAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::NewProp_TextureToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveTextureToDiskAsync, nullptr, "SaveTextureToDiskAsync", nullptr, nullptr, Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::SaveTextureToDiskAsync_eventSaveTextureToDiskAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::SaveTextureToDiskAsync_eventSaveTextureToDiskAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveTextureToDiskAsync::execSaveTextureToDiskAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UTexture2D,Z_Param_TextureToSave);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USaveTextureToDiskAsync**)Z_Param__Result=USaveTextureToDiskAsync::SaveTextureToDiskAsync(Z_Param_WorldContextObject,Z_Param_TextureToSave,Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class USaveTextureToDiskAsync Function SaveTextureToDiskAsync

// Begin Class USaveTextureToDiskAsync
void USaveTextureToDiskAsync::StaticRegisterNativesUSaveTextureToDiskAsync()
{
	UClass* Class = USaveTextureToDiskAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SaveTextureToDiskAsync", &USaveTextureToDiskAsync::execSaveTextureToDiskAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveTextureToDiskAsync);
UClass* Z_Construct_UClass_USaveTextureToDiskAsync_NoRegister()
{
	return USaveTextureToDiskAsync::StaticClass();
}
struct Z_Construct_UClass_USaveTextureToDiskAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SaveTextureToDisk/SaveTextureToDiskAsync.h" },
		{ "ModuleRelativePath", "SaveTextureToDisk/SaveTextureToDiskAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSaveSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the texture has been successfully saved to disk. */" },
#endif
		{ "ModuleRelativePath", "SaveTextureToDisk/SaveTextureToDiskAsync.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the texture has been successfully saved to disk." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSaveFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the texture failed to be saved to disk. */" },
#endif
		{ "ModuleRelativePath", "SaveTextureToDisk/SaveTextureToDiskAsync.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the texture failed to be saved to disk." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Texture2D asset we are saving. */" },
#endif
		{ "ModuleRelativePath", "SaveTextureToDisk/SaveTextureToDiskAsync.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Texture2D asset we are saving." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The World context object (not needed for this static function, but kept for consistency). */" },
#endif
		{ "ModuleRelativePath", "SaveTextureToDisk/SaveTextureToDiskAsync.h" },
		{ "NativeConst", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The World context object (not needed for this static function, but kept for consistency)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveTextureToDiskAsync_SaveTextureToDiskAsync, "SaveTextureToDiskAsync" }, // 546413664
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveTextureToDiskAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveTextureToDiskAsync_Statics::NewProp_OnSaveSuccess = { "OnSaveSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveTextureToDiskAsync, OnSaveSuccess), Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSaveSuccess_MetaData), NewProp_OnSaveSuccess_MetaData) }; // 689542439
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveTextureToDiskAsync_Statics::NewProp_OnSaveFailure = { "OnSaveFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveTextureToDiskAsync, OnSaveFailure), Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveFailureBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSaveFailure_MetaData), NewProp_OnSaveFailure_MetaData) }; // 1268984167
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveTextureToDiskAsync_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveTextureToDiskAsync, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveTextureToDiskAsync_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveTextureToDiskAsync, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveTextureToDiskAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveTextureToDiskAsync_Statics::NewProp_OnSaveSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveTextureToDiskAsync_Statics::NewProp_OnSaveFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveTextureToDiskAsync_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveTextureToDiskAsync_Statics::NewProp_WorldContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveTextureToDiskAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveTextureToDiskAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ImageLoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveTextureToDiskAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveTextureToDiskAsync_Statics::ClassParams = {
	&USaveTextureToDiskAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USaveTextureToDiskAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveTextureToDiskAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveTextureToDiskAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveTextureToDiskAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveTextureToDiskAsync()
{
	if (!Z_Registration_Info_UClass_USaveTextureToDiskAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveTextureToDiskAsync.OuterSingleton, Z_Construct_UClass_USaveTextureToDiskAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveTextureToDiskAsync.OuterSingleton;
}
template<> IMAGELOADER_API UClass* StaticClass<USaveTextureToDiskAsync>()
{
	return USaveTextureToDiskAsync::StaticClass();
}
USaveTextureToDiskAsync::USaveTextureToDiskAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveTextureToDiskAsync);
USaveTextureToDiskAsync::~USaveTextureToDiskAsync() {}
// End Class USaveTextureToDiskAsync

// Begin Registration
struct Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveTextureToDiskAsync, USaveTextureToDiskAsync::StaticClass, TEXT("USaveTextureToDiskAsync"), &Z_Registration_Info_UClass_USaveTextureToDiskAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveTextureToDiskAsync), 551404404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h_1814601039(TEXT("/Script/ImageLoader"),
	Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SaveTextureToDisk_SaveTextureToDiskAsync_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
