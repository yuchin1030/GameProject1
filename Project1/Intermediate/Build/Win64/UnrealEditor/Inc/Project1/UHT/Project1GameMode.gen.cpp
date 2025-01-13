// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project1/Project1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject1GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECT1_API UClass* Z_Construct_UClass_AProject1GameMode();
PROJECT1_API UClass* Z_Construct_UClass_AProject1GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project1();
// End Cross Module References

// Begin Class AProject1GameMode
void AProject1GameMode::StaticRegisterNativesAProject1GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProject1GameMode);
UClass* Z_Construct_UClass_AProject1GameMode_NoRegister()
{
	return AProject1GameMode::StaticClass();
}
struct Z_Construct_UClass_AProject1GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Project1GameMode.h" },
		{ "ModuleRelativePath", "Project1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject1GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProject1GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Project1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject1GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject1GameMode_Statics::ClassParams = {
	&AProject1GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProject1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProject1GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProject1GameMode()
{
	if (!Z_Registration_Info_UClass_AProject1GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject1GameMode.OuterSingleton, Z_Construct_UClass_AProject1GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProject1GameMode.OuterSingleton;
}
template<> PROJECT1_API UClass* StaticClass<AProject1GameMode>()
{
	return AProject1GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProject1GameMode);
AProject1GameMode::~AProject1GameMode() {}
// End Class AProject1GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Project1GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProject1GameMode, AProject1GameMode::StaticClass, TEXT("AProject1GameMode"), &Z_Registration_Info_UClass_AProject1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject1GameMode), 2329039248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Project1GameMode_h_119163045(TEXT("/Script/Project1"),
	Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Project1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Project1GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
