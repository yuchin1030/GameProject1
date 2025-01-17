// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project1/Public/FlipPancake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlipPancake() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROJECT1_API UClass* Z_Construct_UClass_AFlipPancake();
PROJECT1_API UClass* Z_Construct_UClass_AFlipPancake_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project1();
// End Cross Module References

// Begin Class AFlipPancake
void AFlipPancake::StaticRegisterNativesAFlipPancake()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlipPancake);
UClass* Z_Construct_UClass_AFlipPancake_NoRegister()
{
	return AFlipPancake::StaticClass();
}
struct Z_Construct_UClass_AFlipPancake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FlipPancake.h" },
		{ "ModuleRelativePath", "Public/FlipPancake.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlipPancake>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFlipPancake_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Project1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlipPancake_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlipPancake_Statics::ClassParams = {
	&AFlipPancake::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlipPancake_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlipPancake_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlipPancake()
{
	if (!Z_Registration_Info_UClass_AFlipPancake.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlipPancake.OuterSingleton, Z_Construct_UClass_AFlipPancake_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlipPancake.OuterSingleton;
}
template<> PROJECT1_API UClass* StaticClass<AFlipPancake>()
{
	return AFlipPancake::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlipPancake);
AFlipPancake::~AFlipPancake() {}
// End Class AFlipPancake

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_FlipPancake_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlipPancake, AFlipPancake::StaticClass, TEXT("AFlipPancake"), &Z_Registration_Info_UClass_AFlipPancake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlipPancake), 3886941516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_FlipPancake_h_3863227594(TEXT("/Script/Project1"),
	Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_FlipPancake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_FlipPancake_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
