// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageLoader_init() {}
	IMAGELOADER_API UFunction* Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature();
	IMAGELOADER_API UFunction* Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadFailureBP__DelegateSignature();
	IMAGELOADER_API UFunction* Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveFailureBP__DelegateSignature();
	IMAGELOADER_API UFunction* Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ImageLoader;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ImageLoader()
	{
		if (!Z_Registration_Info_UPackage__Script_ImageLoader.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadCompletedBP__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ImageLoader_OnImageLoadFailureBP__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveFailureBP__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ImageLoader_OnTextureSaveSuccessBP__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ImageLoader",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFB88A034,
				0x324F2154,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ImageLoader.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ImageLoader.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ImageLoader(Z_Construct_UPackage__Script_ImageLoader, TEXT("/Script/ImageLoader"), Z_Registration_Info_UPackage__Script_ImageLoader, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFB88A034, 0x324F2154));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
