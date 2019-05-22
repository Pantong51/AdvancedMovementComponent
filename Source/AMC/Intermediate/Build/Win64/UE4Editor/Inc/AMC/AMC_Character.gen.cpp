// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AMC/Public/AMC_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMC_Character() {}
// Cross Module References
	AMC_API UClass* Z_Construct_UClass_AAMC_Character_NoRegister();
	AMC_API UClass* Z_Construct_UClass_AAMC_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AMC();
	AMC_API UFunction* Z_Construct_UFunction_AAMC_Character_StartJetpack();
	AMC_API UFunction* Z_Construct_UFunction_AAMC_Character_StartSprint();
	AMC_API UFunction* Z_Construct_UFunction_AAMC_Character_StopJetpack();
	AMC_API UFunction* Z_Construct_UFunction_AAMC_Character_StopSprint();
// End Cross Module References
	void AAMC_Character::StaticRegisterNativesAAMC_Character()
	{
		UClass* Class = AAMC_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartJetpack", &AAMC_Character::execStartJetpack },
			{ "StartSprint", &AAMC_Character::execStartSprint },
			{ "StopJetpack", &AAMC_Character::execStopJetpack },
			{ "StopSprint", &AAMC_Character::execStopSprint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAMC_Character_StartJetpack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMC_Character_StartJetpack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jetpack" },
		{ "ModuleRelativePath", "Public/AMC_Character.h" },
		{ "ToolTip", "Method:    StartJetpack\nFullName:  AAdvancedMovementCharacter::StopJetpack\nAccess:    public\nReturns:   void\nQualifier: Used to set the state of the jetpack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMC_Character_StartJetpack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMC_Character, "StartJetpack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAMC_Character_StartJetpack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAMC_Character_StartJetpack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAMC_Character_StartJetpack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAMC_Character_StartJetpack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAMC_Character_StartSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMC_Character_StartSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/AMC_Character.h" },
		{ "ToolTip", "Method:    StartSprint\nFullName:  AAdvancedMovementCharacter::StartSprint\nAccess:    public\nReturns:   void\nQualifier: Used to set the state of the sprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMC_Character_StartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMC_Character, "StartSprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAMC_Character_StartSprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAMC_Character_StartSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAMC_Character_StartSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAMC_Character_StartSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAMC_Character_StopJetpack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMC_Character_StopJetpack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jetpack" },
		{ "ModuleRelativePath", "Public/AMC_Character.h" },
		{ "ToolTip", "Method:    StopJetpack\nFullName:  AAdvancedMovementCharacter::StopJetpack\nAccess:    public\nReturns:   void\nQualifier: Used to set the state of the jetpack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMC_Character_StopJetpack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMC_Character, "StopJetpack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAMC_Character_StopJetpack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAMC_Character_StopJetpack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAMC_Character_StopJetpack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAMC_Character_StopJetpack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAMC_Character_StopSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMC_Character_StopSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/AMC_Character.h" },
		{ "ToolTip", "Method:    StopSprint\nFullName:  AAdvancedMovementCharacter::StopSprint\nAccess:    public\nReturns:   void\nQualifier: Used to set the state of the sprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMC_Character_StopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMC_Character, "StopSprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAMC_Character_StopSprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAMC_Character_StopSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAMC_Character_StopSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAMC_Character_StopSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAMC_Character_NoRegister()
	{
		return AAMC_Character::StaticClass();
	}
	struct Z_Construct_UClass_AAMC_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAMC_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AMC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAMC_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAMC_Character_StartJetpack, "StartJetpack" }, // 2624354034
		{ &Z_Construct_UFunction_AAMC_Character_StartSprint, "StartSprint" }, // 1606910868
		{ &Z_Construct_UFunction_AAMC_Character_StopJetpack, "StopJetpack" }, // 2638882028
		{ &Z_Construct_UFunction_AAMC_Character_StopSprint, "StopSprint" }, // 2313336139
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMC_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AMC_Character.h" },
		{ "ModuleRelativePath", "Public/AMC_Character.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMC_Character_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Public/AMC_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAMC_Character_Statics::NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAMC_Character, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AAMC_Character_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAMC_Character_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMC_Character_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Public/AMC_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAMC_Character_Statics::NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAMC_Character, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AAMC_Character_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAMC_Character_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMC_Character_Statics::NewProp_RightDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/AMC_Character.h" },
		{ "ToolTip", "value between -1 and 1 for the right direction of the player" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAMC_Character_Statics::NewProp_RightDirection = { UE4CodeGen_Private::EPropertyClass::Float, "RightDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AAMC_Character, RightDirection), METADATA_PARAMS(Z_Construct_UClass_AAMC_Character_Statics::NewProp_RightDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAMC_Character_Statics::NewProp_RightDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMC_Character_Statics::NewProp_ForwardDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/AMC_Character.h" },
		{ "ToolTip", "value between -1 and 1 for the forward direction of the player" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAMC_Character_Statics::NewProp_ForwardDirection = { UE4CodeGen_Private::EPropertyClass::Float, "ForwardDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AAMC_Character, ForwardDirection), METADATA_PARAMS(Z_Construct_UClass_AAMC_Character_Statics::NewProp_ForwardDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAMC_Character_Statics::NewProp_ForwardDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAMC_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMC_Character_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMC_Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMC_Character_Statics::NewProp_RightDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMC_Character_Statics::NewProp_ForwardDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAMC_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAMC_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAMC_Character_Statics::ClassParams = {
		&AAMC_Character::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AAMC_Character_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAMC_Character_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAMC_Character_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAMC_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAMC_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAMC_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAMC_Character, 2778450554);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAMC_Character(Z_Construct_UClass_AAMC_Character, &AAMC_Character::StaticClass, TEXT("/Script/AMC"), TEXT("AAMC_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAMC_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
