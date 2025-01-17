// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Customer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT1_Customer_generated_h
#error "Customer.generated.h already included, missing '#pragma once' in Customer.h"
#endif
#define PROJECT1_Customer_generated_h

#define FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_Customer_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomer(); \
	friend struct Z_Construct_UClass_ACustomer_Statics; \
public: \
	DECLARE_CLASS(ACustomer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project1"), NO_API) \
	DECLARE_SERIALIZER(ACustomer)


#define FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_Customer_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACustomer(ACustomer&&); \
	ACustomer(const ACustomer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACustomer) \
	NO_API virtual ~ACustomer();


#define FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_Customer_h_20_PROLOG
#define FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_Customer_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_Customer_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_Customer_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT1_API UClass* StaticClass<class ACustomer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_USER_Documents_GitHub_GameProject1_Project1_Source_Project1_Public_Customer_h


#define FOREACH_ENUM_ECUSTOMERSTATE(op) \
	op(ECustomerState::IDLE) \
	op(ECustomerState::ENTRY) \
	op(ECustomerState::ORDER) \
	op(ECustomerState::WAIT) \
	op(ECustomerState::CHECK) \
	op(ECustomerState::EXIT) 

enum class ECustomerState : uint8;
template<> struct TIsUEnumClass<ECustomerState> { enum { Value = true }; };
template<> PROJECT1_API UEnum* StaticEnum<ECustomerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
