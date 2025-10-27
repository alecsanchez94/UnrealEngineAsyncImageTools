// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImageLoader/AsyncNodes/LoadImageToTextureAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadImageToTextureAsync() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
IMAGELOADER_API UClass* Z_Construct_UClass_ULoadImageToTextureAsync();
IMAGELOADER_API UClass* Z_Construct_UClass_ULoadImageToTextureAsync_NoRegister();
IMAGELOADER_API UFunction* Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature();
IMAGELOADER_API UFunction* Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadFailureBP__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ImageLoader();
// End Cross Module References

// Begin Delegate FOnImageLoadCompletedBP
struct Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics
{
	struct _Script_ImageLoader_eventOnImageLoadCompletedBP_Parms
	{
		UTexture2D* LoadedTexture;
		FString ImagePath;
		FVector2D ImageSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncNodes/LoadImageToTextureAsync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedTexture;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImagePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::NewProp_LoadedTexture = { "LoadedTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ImageLoader_eventOnImageLoadCompletedBP_Parms, LoadedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ImageLoader_eventOnImageLoadCompletedBP_Parms, ImagePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::NewProp_ImageSize = { "ImageSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ImageLoader_eventOnImageLoadCompletedBP_Parms, ImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::NewProp_LoadedTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::NewProp_ImagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::NewProp_ImageSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ImageLoader, nullptr, "OnImageLoadCompletedBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::_Script_ImageLoader_eventOnImageLoadCompletedBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::_Script_ImageLoader_eventOnImageLoadCompletedBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnImageLoadCompletedBP_DelegateWrapper(const FMulticastScriptDelegate& OnImageLoadCompletedBP, UTexture2D* LoadedTexture, const FString& ImagePath, FVector2D ImageSize)
{
	struct _Script_ImageLoader_eventOnImageLoadCompletedBP_Parms
	{
		UTexture2D* LoadedTexture;
		FString ImagePath;
		FVector2D ImageSize;
	};
	_Script_ImageLoader_eventOnImageLoadCompletedBP_Parms Parms;
	Parms.LoadedTexture=LoadedTexture;
	Parms.ImagePath=ImagePath;
	Parms.ImageSize=ImageSize;
	OnImageLoadCompletedBP.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnImageLoadCompletedBP

// Begin Delegate FOnImageLoadFailureBP
struct Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadFailureBP__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncNodes/LoadImageToTextureAsync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadFailureBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ImageLoader, nullptr, "OnImageLoadFailureBP__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadFailureBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadFailureBP__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadFailureBP__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadFailureBP__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnImageLoadFailureBP_DelegateWrapper(const FMulticastScriptDelegate& OnImageLoadFailureBP)
{
	OnImageLoadFailureBP.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnImageLoadFailureBP

// Begin Class ULoadImageToTextureAsync Function LoadImageToTextureAsync
struct Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics
{
	struct LoadImageToTextureAsync_eventLoadImageToTextureAsync_Parms
	{
		const UObject* NewWorldContext;
		FString ImagePath;
		ULoadImageToTextureAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "ImageLoader" },
		{ "ModuleRelativePath", "AsyncNodes/LoadImageToTextureAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewWorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWorldContext;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImagePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::NewProp_NewWorldContext = { "NewWorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadImageToTextureAsync_eventLoadImageToTextureAsync_Parms, NewWorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewWorldContext_MetaData), NewProp_NewWorldContext_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadImageToTextureAsync_eventLoadImageToTextureAsync_Parms, ImagePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadImageToTextureAsync_eventLoadImageToTextureAsync_Parms, ReturnValue), Z_Construct_UClass_ULoadImageToTextureAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::NewProp_NewWorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::NewProp_ImagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadImageToTextureAsync, nullptr, "LoadImageToTextureAsync", nullptr, nullptr, Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::LoadImageToTextureAsync_eventLoadImageToTextureAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::LoadImageToTextureAsync_eventLoadImageToTextureAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoadImageToTextureAsync::execLoadImageToTextureAsync)
{
	P_GET_OBJECT(UObject,Z_Param_NewWorldContext);
	P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULoadImageToTextureAsync**)Z_Param__Result=ULoadImageToTextureAsync::LoadImageToTextureAsync(Z_Param_NewWorldContext,Z_Param_ImagePath);
	P_NATIVE_END;
}
// End Class ULoadImageToTextureAsync Function LoadImageToTextureAsync

// Begin Class ULoadImageToTextureAsync
void ULoadImageToTextureAsync::StaticRegisterNativesULoadImageToTextureAsync()
{
	UClass* Class = ULoadImageToTextureAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadImageToTextureAsync", &ULoadImageToTextureAsync::execLoadImageToTextureAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadImageToTextureAsync);
UClass* Z_Construct_UClass_ULoadImageToTextureAsync_NoRegister()
{
	return ULoadImageToTextureAsync::StaticClass();
}
struct Z_Construct_UClass_ULoadImageToTextureAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AsyncNodes/LoadImageToTextureAsync.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AsyncNodes/LoadImageToTextureAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnImageLoadCompleted_MetaData[] = {
		{ "ModuleRelativePath", "AsyncNodes/LoadImageToTextureAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnImageLoadFailure_MetaData[] = {
		{ "ModuleRelativePath", "AsyncNodes/LoadImageToTextureAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "ModuleRelativePath", "AsyncNodes/LoadImageToTextureAsync.h" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnImageLoadCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnImageLoadFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadImageToTextureAsync_LoadImageToTextureAsync, "LoadImageToTextureAsync" }, // 3539112854
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadImageToTextureAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadImageToTextureAsync_Statics::NewProp_OnImageLoadCompleted = { "OnImageLoadCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadImageToTextureAsync, OnImageLoadCompleted), Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnImageLoadCompleted_MetaData), NewProp_OnImageLoadCompleted_MetaData) }; // 3249606062
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadImageToTextureAsync_Statics::NewProp_OnImageLoadFailure = { "OnImageLoadFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadImageToTextureAsync, OnImageLoadFailure), Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadFailureBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnImageLoadFailure_MetaData), NewProp_OnImageLoadFailure_MetaData) }; // 3740551978
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadImageToTextureAsync_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadImageToTextureAsync, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadImageToTextureAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadImageToTextureAsync_Statics::NewProp_OnImageLoadCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadImageToTextureAsync_Statics::NewProp_OnImageLoadFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadImageToTextureAsync_Statics::NewProp_WorldContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadImageToTextureAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoadImageToTextureAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ImageLoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadImageToTextureAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadImageToTextureAsync_Statics::ClassParams = {
	&ULoadImageToTextureAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULoadImageToTextureAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoadImageToTextureAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadImageToTextureAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadImageToTextureAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoadImageToTextureAsync()
{
	if (!Z_Registration_Info_UClass_ULoadImageToTextureAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadImageToTextureAsync.OuterSingleton, Z_Construct_UClass_ULoadImageToTextureAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoadImageToTextureAsync.OuterSingleton;
}
template<> IMAGELOADER_API UClass* StaticClass<ULoadImageToTextureAsync>()
{
	return ULoadImageToTextureAsync::StaticClass();
}
ULoadImageToTextureAsync::ULoadImageToTextureAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadImageToTextureAsync);
ULoadImageToTextureAsync::~ULoadImageToTextureAsync() {}
// End Class ULoadImageToTextureAsync

// Begin Registration
struct Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoadImageToTextureAsync, ULoadImageToTextureAsync::StaticClass, TEXT("ULoadImageToTextureAsync"), &Z_Registration_Info_UClass_ULoadImageToTextureAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadImageToTextureAsync), 2535893037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h_4059871258(TEXT("/Script/ImageLoader"),
	Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_AsyncNodes_LoadImageToTextureAsync_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
