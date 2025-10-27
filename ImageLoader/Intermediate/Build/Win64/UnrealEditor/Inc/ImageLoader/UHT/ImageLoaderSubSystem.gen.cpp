// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImageLoader/SubSystem/ImageLoaderSubSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageLoaderSubSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
IMAGELOADER_API UClass* Z_Construct_UClass_UImageLoaderSubSystem();
IMAGELOADER_API UClass* Z_Construct_UClass_UImageLoaderSubSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ImageLoader();
// End Cross Module References

// Begin Class UImageLoaderSubSystem
void UImageLoaderSubSystem::StaticRegisterNativesUImageLoaderSubSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageLoaderSubSystem);
UClass* Z_Construct_UClass_UImageLoaderSubSystem_NoRegister()
{
	return UImageLoaderSubSystem::StaticClass();
}
struct Z_Construct_UClass_UImageLoaderSubSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SubSystem/ImageLoaderSubSystem.h" },
		{ "ModuleRelativePath", "SubSystem/ImageLoaderSubSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageLoaderSubSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UImageLoaderSubSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ImageLoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImageLoaderSubSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageLoaderSubSystem_Statics::ClassParams = {
	&UImageLoaderSubSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImageLoaderSubSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UImageLoaderSubSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImageLoaderSubSystem()
{
	if (!Z_Registration_Info_UClass_UImageLoaderSubSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageLoaderSubSystem.OuterSingleton, Z_Construct_UClass_UImageLoaderSubSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImageLoaderSubSystem.OuterSingleton;
}
template<> IMAGELOADER_API UClass* StaticClass<UImageLoaderSubSystem>()
{
	return UImageLoaderSubSystem::StaticClass();
}
UImageLoaderSubSystem::UImageLoaderSubSystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImageLoaderSubSystem);
UImageLoaderSubSystem::~UImageLoaderSubSystem() {}
// End Class UImageLoaderSubSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SubSystem_ImageLoaderSubSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UImageLoaderSubSystem, UImageLoaderSubSystem::StaticClass, TEXT("UImageLoaderSubSystem"), &Z_Registration_Info_UClass_UImageLoaderSubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageLoaderSubSystem), 2868589123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SubSystem_ImageLoaderSubSystem_h_679202087(TEXT("/Script/ImageLoader"),
	Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SubSystem_ImageLoaderSubSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_ImageLoader_Source_ImageLoader_SubSystem_ImageLoaderSubSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
