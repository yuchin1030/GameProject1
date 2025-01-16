// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject1_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Project1;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Project1()
	{
		if (!Z_Registration_Info_UPackage__Script_Project1.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Project1",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x1C49634B,
				0xBEE27A7B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Project1.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Project1.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Project1(Z_Construct_UPackage__Script_Project1, TEXT("/Script/Project1"), Z_Registration_Info_UPackage__Script_Project1, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1C49634B, 0xBEE27A7B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
