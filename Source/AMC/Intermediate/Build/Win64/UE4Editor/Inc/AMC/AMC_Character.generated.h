// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AMC_AMC_Character_generated_h
#error "AMC_Character.generated.h already included, missing '#pragma once' in AMC_Character.h"
#endif
#define AMC_AMC_Character_generated_h

#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJetpack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJetpack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJetpack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJetpack(); \
		P_NATIVE_END; \
	}


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJetpack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJetpack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJetpack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJetpack(); \
		P_NATIVE_END; \
	}


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAMC_Character(); \
	friend struct Z_Construct_UClass_AAMC_Character_Statics; \
public: \
	DECLARE_CLASS(AAMC_Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AMC"), NO_API) \
	DECLARE_SERIALIZER(AAMC_Character)


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAMC_Character(); \
	friend struct Z_Construct_UClass_AAMC_Character_Statics; \
public: \
	DECLARE_CLASS(AAMC_Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AMC"), NO_API) \
	DECLARE_SERIALIZER(AAMC_Character)


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAMC_Character(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAMC_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAMC_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAMC_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAMC_Character(AAMC_Character&&); \
	NO_API AAMC_Character(const AAMC_Character&); \
public:


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAMC_Character(AAMC_Character&&); \
	NO_API AAMC_Character(const AAMC_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAMC_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAMC_Character); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAMC_Character)


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_PRIVATE_PROPERTY_OFFSET
#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_9_PROLOG
#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_RPC_WRAPPERS \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_INCLASS \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_INCLASS_NO_PURE_DECLS \
	Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Temp_AMC_HostProject_Plugins_AMC_Source_AMC_Public_AMC_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
