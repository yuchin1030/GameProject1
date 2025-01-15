// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project1/Public/Customer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
PROJECT1_API UClass* Z_Construct_UClass_ACustomer();
PROJECT1_API UClass* Z_Construct_UClass_ACustomer_NoRegister();
PROJECT1_API UEnum* Z_Construct_UEnum_Project1_ECustomerState();
UPackage* Z_Construct_UPackage__Script_Project1();
// End Cross Module References

// Begin Enum ECustomerState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomerState;
static UEnum* ECustomerState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECustomerState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECustomerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Project1_ECustomerState, (UObject*)Z_Construct_UPackage__Script_Project1(), TEXT("ECustomerState"));
	}
	return Z_Registration_Info_UEnum_ECustomerState.OuterSingleton;
}
template<> PROJECT1_API UEnum* StaticEnum<ECustomerState>()
{
	return ECustomerState_StaticEnum();
}
struct Z_Construct_UEnum_Project1_ECustomerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CHECK.Name", "ECustomerState::CHECK" },
		{ "ENTRY.Name", "ECustomerState::ENTRY" },
		{ "EXIT.Name", "ECustomerState::EXIT" },
		{ "IDLE.Name", "ECustomerState::IDLE" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ORDER.Name", "ECustomerState::ORDER" },
		{ "WAIT.Name", "ECustomerState::WAIT" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECustomerState::IDLE", (int64)ECustomerState::IDLE },
		{ "ECustomerState::ENTRY", (int64)ECustomerState::ENTRY },
		{ "ECustomerState::ORDER", (int64)ECustomerState::ORDER },
		{ "ECustomerState::WAIT", (int64)ECustomerState::WAIT },
		{ "ECustomerState::CHECK", (int64)ECustomerState::CHECK },
		{ "ECustomerState::EXIT", (int64)ECustomerState::EXIT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Project1_ECustomerState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Project1,
	nullptr,
	"ECustomerState",
	"ECustomerState",
	Z_Construct_UEnum_Project1_ECustomerState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Project1_ECustomerState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Project1_ECustomerState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Project1_ECustomerState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Project1_ECustomerState()
{
	if (!Z_Registration_Info_UEnum_ECustomerState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomerState.InnerSingleton, Z_Construct_UEnum_Project1_ECustomerState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECustomerState.InnerSingleton;
}
// End Enum ECustomerState

// Begin Class ACustomer
void ACustomer::StaticRegisterNativesACustomer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomer);
UClass* Z_Construct_UClass_ACustomer_NoRegister()
{
	return ACustomer::StaticClass();
}
struct Z_Construct_UClass_ACustomer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Customer.h" },
		{ "ModuleRelativePath", "Public/Customer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_customerState_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/Customer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_menu_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Customer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reorderTime_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd(60, 90, 180)\n" },
#endif
		{ "ModuleRelativePath", "Public/Customer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd(60, 90, 180)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_v_reorderTime_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd \xef\xbf\xbd\xe8\xbf\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Customer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd \xef\xbf\xbd\xe8\xbf\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_orderCnt_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd(30, 60, 90)\n// \xef\xbf\xbd\xd6\xb9\xef\xbf\xbd\xc8\xbd\xef\xbf\xbd\xef\xbf\xbd(1~3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/Customer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd(30, 60, 90)\n\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd\xc8\xbd\xef\xbf\xbd\xef\xbf\xbd(1~3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_waitingTime_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd5\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd9\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Customer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd5\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd9\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reorderWaitingTime_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd9\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Customer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd9\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_servingTime_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd5\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xbe\xc6\xbe\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd(\xef\xbf\xbd\xd5\xb4\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xcc\xb8\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/Customer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd5\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xbe\xc6\xbe\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd(\xef\xbf\xbd\xd5\xb4\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xcc\xb8\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bServed_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Customer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_customerState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_customerState;
	static const UECodeGen_Private::FStrPropertyParams NewProp_menu_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_menu;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_reorderTime_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_reorderTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_v_reorderTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_orderCnt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_waitingTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_reorderWaitingTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_servingTime;
	static void NewProp_bServed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bServed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_customerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_customerState = { "customerState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomer, customerState), Z_Construct_UEnum_Project1_ECustomerState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_customerState_MetaData), NewProp_customerState_MetaData) }; // 3932550418
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_menu_Inner = { "menu", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_menu = { "menu", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomer, menu), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_menu_MetaData), NewProp_menu_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_reorderTime_Inner = { "reorderTime", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_reorderTime = { "reorderTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomer, reorderTime), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reorderTime_MetaData), NewProp_reorderTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_v_reorderTime = { "v_reorderTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomer, v_reorderTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_v_reorderTime_MetaData), NewProp_v_reorderTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_orderCnt = { "orderCnt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomer, orderCnt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_orderCnt_MetaData), NewProp_orderCnt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_waitingTime = { "waitingTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomer, waitingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_waitingTime_MetaData), NewProp_waitingTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_reorderWaitingTime = { "reorderWaitingTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomer, reorderWaitingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reorderWaitingTime_MetaData), NewProp_reorderWaitingTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_servingTime = { "servingTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomer, servingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_servingTime_MetaData), NewProp_servingTime_MetaData) };
void Z_Construct_UClass_ACustomer_Statics::NewProp_bServed_SetBit(void* Obj)
{
	((ACustomer*)Obj)->bServed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_bServed = { "bServed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACustomer), &Z_Construct_UClass_ACustomer_Statics::NewProp_bServed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bServed_MetaData), NewProp_bServed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_customerState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_customerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_menu_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_menu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_reorderTime_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_reorderTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_v_reorderTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_orderCnt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_waitingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_reorderWaitingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_servingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_bServed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACustomer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Project1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomer_Statics::ClassParams = {
	&ACustomer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACustomer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACustomer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomer_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustomer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACustomer()
{
	if (!Z_Registration_Info_UClass_ACustomer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomer.OuterSingleton, Z_Construct_UClass_ACustomer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACustomer.OuterSingleton;
}
template<> PROJECT1_API UClass* StaticClass<ACustomer>()
{
	return ACustomer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomer);
ACustomer::~ACustomer() {}
// End Class ACustomer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_Customer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECustomerState_StaticEnum, TEXT("ECustomerState"), &Z_Registration_Info_UEnum_ECustomerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3932550418U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACustomer, ACustomer::StaticClass, TEXT("ACustomer"), &Z_Registration_Info_UClass_ACustomer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomer), 1272024442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_Customer_h_2608097982(TEXT("/Script/Project1"),
	Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_Customer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_Customer_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_Customer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_Customer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
