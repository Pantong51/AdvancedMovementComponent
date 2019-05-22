// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef AMC_AMC_MovementComponent_generated_h
#error "AMC_MovementComponent.generated.h already included, missing '#pragma once' in AMC_MovementComponent.h"
#endif
#define AMC_AMC_MovementComponent_generated_h

#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_RPC_WRAPPERS \
	virtual bool ServerSetMoveDirection_Validate(FVector const& ); \
	virtual void ServerSetMoveDirection_Implementation(FVector const& MoveDir); \
 \
	DECLARE_FUNCTION(execGetIsDodging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsDodging(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableDodge) \
	{ \
		P_GET_UBOOL(Z_Param_bIsDodgeEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableDodge(Z_Param_bIsDodgeEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDodge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDodge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSprintingSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSprintingSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJetpackSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetJetpackSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsJetpacking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsJetpacking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanJetpack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanJetpack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetMoveDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MoveDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetMoveDirection_Validate(Z_Param_MoveDir)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetMoveDirection_Validate")); \
			return; \
		} \
		P_THIS->ServerSetMoveDirection_Implementation(Z_Param_MoveDir); \
		P_NATIVE_END; \
	}


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSetMoveDirection_Validate(FVector const& ); \
	virtual void ServerSetMoveDirection_Implementation(FVector const& MoveDir); \
 \
	DECLARE_FUNCTION(execGetIsDodging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsDodging(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableDodge) \
	{ \
		P_GET_UBOOL(Z_Param_bIsDodgeEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableDodge(Z_Param_bIsDodgeEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDodge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDodge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSprintingSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSprintingSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJetpackSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetJetpackSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsJetpacking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsJetpacking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanJetpack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanJetpack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetMoveDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MoveDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetMoveDirection_Validate(Z_Param_MoveDir)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetMoveDirection_Validate")); \
			return; \
		} \
		P_THIS->ServerSetMoveDirection_Implementation(Z_Param_MoveDir); \
		P_NATIVE_END; \
	}


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_EVENT_PARMS \
	struct AMC_MovementComponent_eventServerSetMoveDirection_Parms \
	{ \
		FVector MoveDir; \
	};


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_CALLBACK_WRAPPERS
#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAMC_MovementComponent(); \
	friend struct Z_Construct_UClass_UAMC_MovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAMC_MovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AMC"), NO_API) \
	DECLARE_SERIALIZER(UAMC_MovementComponent)


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUAMC_MovementComponent(); \
	friend struct Z_Construct_UClass_UAMC_MovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAMC_MovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AMC"), NO_API) \
	DECLARE_SERIALIZER(UAMC_MovementComponent)


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAMC_MovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAMC_MovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAMC_MovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAMC_MovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAMC_MovementComponent(UAMC_MovementComponent&&); \
	NO_API UAMC_MovementComponent(const UAMC_MovementComponent&); \
public:


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAMC_MovementComponent(UAMC_MovementComponent&&); \
	NO_API UAMC_MovementComponent(const UAMC_MovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAMC_MovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAMC_MovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAMC_MovementComponent)


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_PRIVATE_PROPERTY_OFFSET
#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_45_PROLOG \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_EVENT_PARMS


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_PRIVATE_PROPERTY_OFFSET \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_RPC_WRAPPERS \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_CALLBACK_WRAPPERS \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_INCLASS \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_PRIVATE_PROPERTY_OFFSET \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_CALLBACK_WRAPPERS \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_INCLASS_NO_PURE_DECLS \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_MovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
