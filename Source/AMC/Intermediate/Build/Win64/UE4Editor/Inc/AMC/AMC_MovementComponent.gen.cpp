// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AMC/Public/AMC_MovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMC_MovementComponent() {}
// Cross Module References
	AMC_API UClass* Z_Construct_UClass_UAMC_MovementComponent_NoRegister();
	AMC_API UClass* Z_Construct_UClass_UAMC_MovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_AMC();
	AMC_API UFunction* Z_Construct_UFunction_UAMC_MovementComponent_CanDodge();
	AMC_API UFunction* Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack();
	AMC_API UFunction* Z_Construct_UFunction_UAMC_MovementComponent_CanSprint();
	AMC_API UFunction* Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge();
	AMC_API UFunction* Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging();
	AMC_API UFunction* Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking();
	AMC_API UFunction* Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting();
	AMC_API UFunction* Z_Construct_UFunction_UAMC_MovementComponent_GetJetpackSpeed();
	AMC_API UFunction* Z_Construct_UFunction_UAMC_MovementComponent_GetSprintingSpeed();
	AMC_API UFunction* Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	static FName NAME_UAMC_MovementComponent_ServerSetMoveDirection = FName(TEXT("ServerSetMoveDirection"));
	void UAMC_MovementComponent::ServerSetMoveDirection(FVector const& MoveDir)
	{
		AMC_MovementComponent_eventServerSetMoveDirection_Parms Parms;
		Parms.MoveDir=MoveDir;
		ProcessEvent(FindFunctionChecked(NAME_UAMC_MovementComponent_ServerSetMoveDirection),&Parms);
	}
	void UAMC_MovementComponent::StaticRegisterNativesUAMC_MovementComponent()
	{
		UClass* Class = UAMC_MovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDodge", &UAMC_MovementComponent::execCanDodge },
			{ "CanJetpack", &UAMC_MovementComponent::execCanJetpack },
			{ "CanSprint", &UAMC_MovementComponent::execCanSprint },
			{ "EnableDodge", &UAMC_MovementComponent::execEnableDodge },
			{ "GetIsDodging", &UAMC_MovementComponent::execGetIsDodging },
			{ "GetIsJetpacking", &UAMC_MovementComponent::execGetIsJetpacking },
			{ "GetIsSprinting", &UAMC_MovementComponent::execGetIsSprinting },
			{ "GetJetpackSpeed", &UAMC_MovementComponent::execGetJetpackSpeed },
			{ "GetSprintingSpeed", &UAMC_MovementComponent::execGetSprintingSpeed },
			{ "ServerSetMoveDirection", &UAMC_MovementComponent::execServerSetMoveDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAMC_MovementComponent_CanDodge_Statics
	{
		struct AMC_MovementComponent_eventCanDodge_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAMC_MovementComponent_CanDodge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AMC_MovementComponent_eventCanDodge_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAMC_MovementComponent_CanDodge_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMC_MovementComponent_eventCanDodge_Parms), &Z_Construct_UFunction_UAMC_MovementComponent_CanDodge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMC_MovementComponent_CanDodge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMC_MovementComponent_CanDodge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMC_MovementComponent_CanDodge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Method:    CanDodge\nFullName:  UAMC_MovementComponent::CanDodge\nAccess:    virtual public\nReturns:   bool\nQualifier: const/ Gets can dodge" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMC_MovementComponent_CanDodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMC_MovementComponent, "CanDodge", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(AMC_MovementComponent_eventCanDodge_Parms), Z_Construct_UFunction_UAMC_MovementComponent_CanDodge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_CanDodge_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAMC_MovementComponent_CanDodge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_CanDodge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAMC_MovementComponent_CanDodge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAMC_MovementComponent_CanDodge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack_Statics
	{
		struct AMC_MovementComponent_eventCanJetpack_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AMC_MovementComponent_eventCanJetpack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMC_MovementComponent_eventCanJetpack_Parms), &Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AMC|Checks" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Method:    CanJetpack\nFullName:  UAMC_MovementComponent::CanJetpack\nAccess:    public\nReturns:   bool\nQualifier: Checks if the movement component should activate Jetpack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMC_MovementComponent, "CanJetpack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(AMC_MovementComponent_eventCanJetpack_Parms), Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMC_MovementComponent_CanSprint_Statics
	{
		struct AMC_MovementComponent_eventCanSprint_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAMC_MovementComponent_CanSprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AMC_MovementComponent_eventCanSprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAMC_MovementComponent_CanSprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMC_MovementComponent_eventCanSprint_Parms), &Z_Construct_UFunction_UAMC_MovementComponent_CanSprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMC_MovementComponent_CanSprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMC_MovementComponent_CanSprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMC_MovementComponent_CanSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "AMC|Checks" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Method:    CanSprint\nFullName:  UAMC_MovementComponent::CanSprint\nAccess:    public\nReturns:   bool\nQualifier: Checks if the movement component should activate Sprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMC_MovementComponent_CanSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMC_MovementComponent, "CanSprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(AMC_MovementComponent_eventCanSprint_Parms), Z_Construct_UFunction_UAMC_MovementComponent_CanSprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_CanSprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAMC_MovementComponent_CanSprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_CanSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAMC_MovementComponent_CanSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAMC_MovementComponent_CanSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge_Statics
	{
		struct AMC_MovementComponent_eventEnableDodge_Parms
		{
			bool bIsDodgeEnabled;
		};
		static void NewProp_bIsDodgeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDodgeEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge_Statics::NewProp_bIsDodgeEnabled_SetBit(void* Obj)
	{
		((AMC_MovementComponent_eventEnableDodge_Parms*)Obj)->bIsDodgeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge_Statics::NewProp_bIsDodgeEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsDodgeEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMC_MovementComponent_eventEnableDodge_Parms), &Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge_Statics::NewProp_bIsDodgeEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge_Statics::NewProp_bIsDodgeEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Method:    EnableDodge\nFullName:  UAMC_MovementComponent::EnableDodge\nAccess:    public\nReturns:   void\nQualifier: Enable/Disable Dodge\nParameter: bIsDodgeEnabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMC_MovementComponent, "EnableDodge", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AMC_MovementComponent_eventEnableDodge_Parms), Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging_Statics
	{
		struct AMC_MovementComponent_eventGetIsDodging_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AMC_MovementComponent_eventGetIsDodging_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMC_MovementComponent_eventGetIsDodging_Parms), &Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Method:    GetIsDodging\nFullName:  UAMC_MovementComponent::GetIsDodging\nAccess:    public\nReturns:   bool\nQualifier: const: Get Dodge bool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMC_MovementComponent, "GetIsDodging", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AMC_MovementComponent_eventGetIsDodging_Parms), Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking_Statics
	{
		struct AMC_MovementComponent_eventGetIsJetpacking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AMC_MovementComponent_eventGetIsJetpacking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMC_MovementComponent_eventGetIsJetpacking_Parms), &Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking_Statics::Function_MetaDataParams[] = {
		{ "Category", "AMC|Checks" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Method:    GetIsJetpacking\nFullName:  UAMC_MovementComponent::GetIsJetpacking\nAccess:    public\nReturns:   bool\nQualifier: true if currently jetpacking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMC_MovementComponent, "GetIsJetpacking", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AMC_MovementComponent_eventGetIsJetpacking_Parms), Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting_Statics
	{
		struct AMC_MovementComponent_eventGetIsSprinting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AMC_MovementComponent_eventGetIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMC_MovementComponent_eventGetIsSprinting_Parms), &Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "AMC|Checks" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Method:    GetIsSprinting\nFullName:  UAMC_MovementComponent::GetIsSprinting\nAccess:    public\nReturns:   bool\nQualifier: true if currently sprinting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMC_MovementComponent, "GetIsSprinting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AMC_MovementComponent_eventGetIsSprinting_Parms), Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMC_MovementComponent_GetJetpackSpeed_Statics
	{
		struct AMC_MovementComponent_eventGetJetpackSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAMC_MovementComponent_GetJetpackSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AMC_MovementComponent_eventGetJetpackSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMC_MovementComponent_GetJetpackSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMC_MovementComponent_GetJetpackSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMC_MovementComponent_GetJetpackSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Method:    GetJetpackSpeed\nFullName:  UAMC_MovementComponent::GetJetpackSpeed\nAccess:    public\nReturns:   float\nQualifier: Get the jetpack speed from curve or float" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMC_MovementComponent_GetJetpackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMC_MovementComponent, "GetJetpackSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AMC_MovementComponent_eventGetJetpackSpeed_Parms), Z_Construct_UFunction_UAMC_MovementComponent_GetJetpackSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_GetJetpackSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAMC_MovementComponent_GetJetpackSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_GetJetpackSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAMC_MovementComponent_GetJetpackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAMC_MovementComponent_GetJetpackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMC_MovementComponent_GetSprintingSpeed_Statics
	{
		struct AMC_MovementComponent_eventGetSprintingSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAMC_MovementComponent_GetSprintingSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AMC_MovementComponent_eventGetSprintingSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMC_MovementComponent_GetSprintingSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMC_MovementComponent_GetSprintingSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMC_MovementComponent_GetSprintingSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Method:    GetSprintingSpeed\nFullName:  UAMC_MovementComponent::GetSprintingSpeed\nAccess:    public\nReturns:   float\nQualifier: Get the sprint speed multiplier from curve or float" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMC_MovementComponent_GetSprintingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMC_MovementComponent, "GetSprintingSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AMC_MovementComponent_eventGetSprintingSpeed_Parms), Z_Construct_UFunction_UAMC_MovementComponent_GetSprintingSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_GetSprintingSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAMC_MovementComponent_GetSprintingSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_GetSprintingSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAMC_MovementComponent_GetSprintingSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAMC_MovementComponent_GetSprintingSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection_Statics::NewProp_MoveDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection_Statics::NewProp_MoveDir = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveDir", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000082, 1, nullptr, STRUCT_OFFSET(AMC_MovementComponent_eventServerSetMoveDirection_Parms, MoveDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection_Statics::NewProp_MoveDir_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection_Statics::NewProp_MoveDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection_Statics::NewProp_MoveDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMC_MovementComponent, "ServerSetMoveDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80A20C40, sizeof(AMC_MovementComponent_eventServerSetMoveDirection_Parms), Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAMC_MovementComponent_NoRegister()
	{
		return UAMC_MovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAMC_MovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_JumpCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedToJumpBeforeJetpack_MetaData[];
#endif
		static void NewProp_bNeedToJumpBeforeJetpack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedToJumpBeforeJetpack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxZVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxZVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxXYVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxXYVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundZUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundZUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDodgeDurration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDodgeDurration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDodgeCurve_MetaData[];
#endif
		static void NewProp_bDodgeCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDodgeCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeStrengthCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DodgeStrengthCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeAirStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DodgeAirStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DodgeStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityScaleWhileJetpack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScaleWhileJetpack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHoldJetpackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHoldJetpackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JetpackForwardMomentumScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JetpackForwardMomentumScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JetpackAirScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JetpackAirScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJetpackAccelerationCurve_MetaData[];
#endif
		static void NewProp_bJetpackAccelerationCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJetpackAccelerationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJetpackSpeedCurve_MetaData[];
#endif
		static void NewProp_bJetpackSpeedCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJetpackSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJetpackEnabled_MetaData[];
#endif
		static void NewProp_bJetpackEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJetpackEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JetpackAccelerationMultiplierCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JetpackAccelerationMultiplierCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JetpackForceCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JetpackForceCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JetpackAccelerationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JetpackAccelerationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JetpackForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JetpackForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHoldSprintTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHoldSprintTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaintainXYVelocityRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaintainXYVelocityRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaintainZVelocityRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaintainZVelocityRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMantainingXYVelocity_MetaData[];
#endif
		static void NewProp_bAllowMantainingXYVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMantainingXYVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMantainingZVelocity_MetaData[];
#endif
		static void NewProp_bAllowMantainingZVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMantainingZVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSprintAccelerationCurve_MetaData[];
#endif
		static void NewProp_bSprintAccelerationCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSprintAccelerationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSprintSpeedCurve_MetaData[];
#endif
		static void NewProp_bSprintSpeedCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSprintSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSprintEnabled_MetaData[];
#endif
		static void NewProp_bSprintEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSprintEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintAccelerationMultiplierCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprintAccelerationMultiplierCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedMultiplierCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprintSpeedMultiplierCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintAccelerationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintAccelerationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAMC_MovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AMC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAMC_MovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAMC_MovementComponent_CanDodge, "CanDodge" }, // 114685408
		{ &Z_Construct_UFunction_UAMC_MovementComponent_CanJetpack, "CanJetpack" }, // 809501277
		{ &Z_Construct_UFunction_UAMC_MovementComponent_CanSprint, "CanSprint" }, // 794462355
		{ &Z_Construct_UFunction_UAMC_MovementComponent_EnableDodge, "EnableDodge" }, // 3725303159
		{ &Z_Construct_UFunction_UAMC_MovementComponent_GetIsDodging, "GetIsDodging" }, // 1857485113
		{ &Z_Construct_UFunction_UAMC_MovementComponent_GetIsJetpacking, "GetIsJetpacking" }, // 2577148649
		{ &Z_Construct_UFunction_UAMC_MovementComponent_GetIsSprinting, "GetIsSprinting" }, // 804813784
		{ &Z_Construct_UFunction_UAMC_MovementComponent_GetJetpackSpeed, "GetJetpackSpeed" }, // 1162663000
		{ &Z_Construct_UFunction_UAMC_MovementComponent_GetSprintingSpeed, "GetSprintingSpeed" }, // 1637470208
		{ &Z_Construct_UFunction_UAMC_MovementComponent_ServerSetMoveDirection, "ServerSetMoveDirection" }, // 2742475468
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AMC_MovementComponent.h" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Here's how player movement prediction, replication and correction works in network games:\n\nEvery tick, the TickComponent() function is called.  It figures out the acceleration and rotation change for the frame,\nand then calls PerformMovement() (for locally controlled Characters), or ReplicateMoveToServer() (if it's a network client).\n\nReplicateMoveToServer() saves the move (in the PendingMove list), calls PerformMovement(), and then replicates the move\nto the server by calling the replicated function ServerMove() - passing the movement parameters, the client's\nresultant position, and a timestamp.\n\nServerMove() is executed on the server.  It decodes the movement parameters and causes the appropriate movement\nto occur.  It then looks at the resulting position and if enough time has passed since the last response, or the\nposition error is significant enough, the server calls ClientAdjustPosition(), a replicated function.\n\nClientAdjustPosition() is executed on the client.  The client sets its position to the servers version of position,\nand sets the bUpdatePosition flag to true.\n\nWhen TickComponent() is called on the client again, if bUpdatePosition is true, the client will call\nClientUpdatePosition() before calling PerformMovement().  ClientUpdatePosition() replays all the moves in the pending\nmove list which occurred after the timestamp of the move the server was adjusting.\n// Bit masks used by GetCompressedFlags() to encode movement information.\n//                                                     FLAG_JumpPressed = 0x01,        // Jump pressed\n//                                                     FLAG_WantsToCrouch = 0x02,      // Wants to crouch\n//                                                     FLAG_Reserved_1 = 0x04, // Reserved for future use\n//                                                     FLAG_Reserved_2 = 0x08, // Reserved for future use\n//                                                     // Remaining bit masks are available for custom flags.\n//                                                     FLAG_Custom_0 = 0x10, // Sprinting\n//                                                     FLAG_Custom_1 = 0x20, // Jetpacking\n//                                                     FLAG_Custom_2 = 0x40, // Quick Dodge\n//                                                     FLAG_Custom_3 = 0x80, // Wall Running" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JumpCount_MetaData[] = {
		{ "Category", "AMC|Config" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JumpCount = { UE4CodeGen_Private::EPropertyClass::Int, "JumpCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, JumpCount), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JumpCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JumpCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bNeedToJumpBeforeJetpack_MetaData[] = {
		{ "Category", "AMC|Config" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bNeedToJumpBeforeJetpack_SetBit(void* Obj)
	{
		((UAMC_MovementComponent*)Obj)->bNeedToJumpBeforeJetpack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bNeedToJumpBeforeJetpack = { UE4CodeGen_Private::EPropertyClass::Bool, "bNeedToJumpBeforeJetpack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAMC_MovementComponent), &Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bNeedToJumpBeforeJetpack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bNeedToJumpBeforeJetpack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bNeedToJumpBeforeJetpack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxZVelocity_MetaData[] = {
		{ "Category", "AMC|Config" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxZVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxZVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, MaxZVelocity), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxZVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxZVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxXYVelocity_MetaData[] = {
		{ "Category", "AMC|Config" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxXYVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxXYVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, MaxXYVelocity), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxXYVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxXYVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_GroundZUp_MetaData[] = {
		{ "Category", "QuickDodge" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Boost up if on ground" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_GroundZUp = { UE4CodeGen_Private::EPropertyClass::Float, "GroundZUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, GroundZUp), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_GroundZUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_GroundZUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxDodgeDurration_MetaData[] = {
		{ "Category", "QuickDodge" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "How long the dodge should execute" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxDodgeDurration = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDodgeDurration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, MaxDodgeDurration), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxDodgeDurration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxDodgeDurration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bDodgeCurve_MetaData[] = {
		{ "Category", "QuickDodge" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Use curve isntead of float for dodge" },
	};
#endif
	void Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bDodgeCurve_SetBit(void* Obj)
	{
		((UAMC_MovementComponent*)Obj)->bDodgeCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bDodgeCurve = { UE4CodeGen_Private::EPropertyClass::Bool, "bDodgeCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAMC_MovementComponent), &Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bDodgeCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bDodgeCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bDodgeCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeStrengthCurve_MetaData[] = {
		{ "Category", "QuickDodge" },
		{ "EditCondition", "bDodgeCurve" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeStrengthCurve = { UE4CodeGen_Private::EPropertyClass::Object, "DodgeStrengthCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, DodgeStrengthCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeStrengthCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeStrengthCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeAirStrength_MetaData[] = {
		{ "Category", "QuickDodge" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Multiplier Addative to a Dodge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeAirStrength = { UE4CodeGen_Private::EPropertyClass::Float, "DodgeAirStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, DodgeAirStrength), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeAirStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeAirStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeStrength_MetaData[] = {
		{ "Category", "QuickDodge" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Strength of a Dodge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeStrength = { UE4CodeGen_Private::EPropertyClass::Float, "DodgeStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, DodgeStrength), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_GravityScaleWhileJetpack_MetaData[] = {
		{ "Category", "Jetpack" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Scales the gravity applied per tick(While Falling)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_GravityScaleWhileJetpack = { UE4CodeGen_Private::EPropertyClass::Float, "GravityScaleWhileJetpack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, GravityScaleWhileJetpack), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_GravityScaleWhileJetpack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_GravityScaleWhileJetpack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxHoldJetpackTime_MetaData[] = {
		{ "Category", "Jetpack" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Max hold time on jetpack" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxHoldJetpackTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxHoldJetpackTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, MaxHoldJetpackTime), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxHoldJetpackTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxHoldJetpackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForwardMomentumScale_MetaData[] = {
		{ "Category", "Jetpack" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Sets how much Vecloity.x and Vecloity.y the jetpack has, setting to value too high will exponentially increase X and Y Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForwardMomentumScale = { UE4CodeGen_Private::EPropertyClass::Float, "JetpackForwardMomentumScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, JetpackForwardMomentumScale), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForwardMomentumScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForwardMomentumScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAirScale_MetaData[] = {
		{ "Category", "Jetpack" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Scales the cost of resources in air" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAirScale = { UE4CodeGen_Private::EPropertyClass::Float, "JetpackAirScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, JetpackAirScale), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAirScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAirScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackAccelerationCurve_MetaData[] = {
		{ "Category", "Jetpack" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Use a float curve for acceleration" },
	};
#endif
	void Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackAccelerationCurve_SetBit(void* Obj)
	{
		((UAMC_MovementComponent*)Obj)->bJetpackAccelerationCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackAccelerationCurve = { UE4CodeGen_Private::EPropertyClass::Bool, "bJetpackAccelerationCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAMC_MovementComponent), &Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackAccelerationCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackAccelerationCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackAccelerationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackSpeedCurve_MetaData[] = {
		{ "Category", "Jetpack" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Use a float curve for max speed" },
	};
#endif
	void Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackSpeedCurve_SetBit(void* Obj)
	{
		((UAMC_MovementComponent*)Obj)->bJetpackSpeedCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackSpeedCurve = { UE4CodeGen_Private::EPropertyClass::Bool, "bJetpackSpeedCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAMC_MovementComponent), &Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackSpeedCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackSpeedCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackEnabled_MetaData[] = {
		{ "Category", "Jetpack" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Is Jetpack Enabled" },
	};
#endif
	void Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackEnabled_SetBit(void* Obj)
	{
		((UAMC_MovementComponent*)Obj)->bJetpackEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bJetpackEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAMC_MovementComponent), &Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAccelerationMultiplierCurve_MetaData[] = {
		{ "Category", "Jetpack" },
		{ "EditCondition", "bJetpackAccelerationCurve" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAccelerationMultiplierCurve = { UE4CodeGen_Private::EPropertyClass::Object, "JetpackAccelerationMultiplierCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, JetpackAccelerationMultiplierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAccelerationMultiplierCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAccelerationMultiplierCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForceCurve_MetaData[] = {
		{ "Category", "Jetpack" },
		{ "EditCondition", "bJetpackSpeedCurve" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForceCurve = { UE4CodeGen_Private::EPropertyClass::Object, "JetpackForceCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, JetpackForceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForceCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForceCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAccelerationMultiplier_MetaData[] = {
		{ "Category", "Jetpack" },
		{ "EditCondition", "!bJetpackAccelearationCurve" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAccelerationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "JetpackAccelerationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, JetpackAccelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAccelerationMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForce_MetaData[] = {
		{ "Category", "Jetpack" },
		{ "EditCondition", "!bJetpackSpeedCurve" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForce = { UE4CodeGen_Private::EPropertyClass::Float, "JetpackForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, JetpackForce), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxHoldSprintTime_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Max hold time on sprint" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxHoldSprintTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxHoldSprintTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, MaxHoldSprintTime), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxHoldSprintTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxHoldSprintTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaintainXYVelocityRate_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaintainXYVelocityRate = { UE4CodeGen_Private::EPropertyClass::Float, "MaintainXYVelocityRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, MaintainXYVelocityRate), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaintainXYVelocityRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaintainXYVelocityRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaintainZVelocityRate_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Value between 0-1, used to \"soften\" zVelocity changes when sprinting in air" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaintainZVelocityRate = { UE4CodeGen_Private::EPropertyClass::Float, "MaintainZVelocityRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, MaintainZVelocityRate), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaintainZVelocityRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaintainZVelocityRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bAllowMantainingXYVelocity_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bAllowMantainingXYVelocity_SetBit(void* Obj)
	{
		((UAMC_MovementComponent*)Obj)->bAllowMantainingXYVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bAllowMantainingXYVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowMantainingXYVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAMC_MovementComponent), &Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bAllowMantainingXYVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bAllowMantainingXYVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bAllowMantainingXYVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bAllowMantainingZVelocity_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Scales the effects of sprint in air" },
	};
#endif
	void Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bAllowMantainingZVelocity_SetBit(void* Obj)
	{
		((UAMC_MovementComponent*)Obj)->bAllowMantainingZVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bAllowMantainingZVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowMantainingZVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAMC_MovementComponent), &Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bAllowMantainingZVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bAllowMantainingZVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bAllowMantainingZVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintAccelerationCurve_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Use a float curve for acceleration" },
	};
#endif
	void Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintAccelerationCurve_SetBit(void* Obj)
	{
		((UAMC_MovementComponent*)Obj)->bSprintAccelerationCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintAccelerationCurve = { UE4CodeGen_Private::EPropertyClass::Bool, "bSprintAccelerationCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAMC_MovementComponent), &Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintAccelerationCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintAccelerationCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintAccelerationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintSpeedCurve_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Use a float curve for max speed" },
	};
#endif
	void Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintSpeedCurve_SetBit(void* Obj)
	{
		((UAMC_MovementComponent*)Obj)->bSprintSpeedCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintSpeedCurve = { UE4CodeGen_Private::EPropertyClass::Bool, "bSprintSpeedCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAMC_MovementComponent), &Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintSpeedCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintSpeedCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintEnabled_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
		{ "ToolTip", "Is Sprint Enabled" },
	};
#endif
	void Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintEnabled_SetBit(void* Obj)
	{
		((UAMC_MovementComponent*)Obj)->bSprintEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bSprintEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAMC_MovementComponent), &Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintAccelerationMultiplierCurve_MetaData[] = {
		{ "Category", "Sprint" },
		{ "EditCondition", "bSprintAccelerationCurve" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintAccelerationMultiplierCurve = { UE4CodeGen_Private::EPropertyClass::Object, "SprintAccelerationMultiplierCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, SprintAccelerationMultiplierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintAccelerationMultiplierCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintAccelerationMultiplierCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintSpeedMultiplierCurve_MetaData[] = {
		{ "Category", "Sprint" },
		{ "EditCondition", "bSprintSpeedCurve" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintSpeedMultiplierCurve = { UE4CodeGen_Private::EPropertyClass::Object, "SprintSpeedMultiplierCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, SprintSpeedMultiplierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintSpeedMultiplierCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintSpeedMultiplierCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintAccelerationMultiplier_MetaData[] = {
		{ "Category", "Sprint" },
		{ "EditCondition", "!bSprintAccelearationCurve" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintAccelerationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "SprintAccelerationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, SprintAccelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintAccelerationMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintSpeedMultiplier_MetaData[] = {
		{ "Category", "Sprint" },
		{ "EditCondition", "!bSprintSpeedCurve" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintSpeedMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "SprintSpeedMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, SprintSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintSpeedMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MoveDirection_MetaData[] = {
		{ "Category", "AMC_MovementComponent" },
		{ "ModuleRelativePath", "Public/AMC_MovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MoveDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAMC_MovementComponent, MoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MoveDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MoveDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAMC_MovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JumpCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bNeedToJumpBeforeJetpack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxZVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxXYVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_GroundZUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxDodgeDurration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bDodgeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeStrengthCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeAirStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_DodgeStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_GravityScaleWhileJetpack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxHoldJetpackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForwardMomentumScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAirScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackAccelerationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bJetpackEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAccelerationMultiplierCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForceCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackAccelerationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_JetpackForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaxHoldSprintTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaintainXYVelocityRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MaintainZVelocityRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bAllowMantainingXYVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bAllowMantainingZVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintAccelerationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_bSprintEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintAccelerationMultiplierCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintSpeedMultiplierCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintAccelerationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_SprintSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMC_MovementComponent_Statics::NewProp_MoveDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAMC_MovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAMC_MovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAMC_MovementComponent_Statics::ClassParams = {
		&UAMC_MovementComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAMC_MovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAMC_MovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAMC_MovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAMC_MovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAMC_MovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAMC_MovementComponent, 1805891528);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAMC_MovementComponent(Z_Construct_UClass_UAMC_MovementComponent, &UAMC_MovementComponent::StaticClass, TEXT("/Script/AMC"), TEXT("UAMC_MovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAMC_MovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
