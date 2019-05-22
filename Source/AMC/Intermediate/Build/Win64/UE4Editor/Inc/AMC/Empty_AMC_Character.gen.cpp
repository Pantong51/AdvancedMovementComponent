// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AMC/Public/Empty_AMC_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmpty_AMC_Character() {}
// Cross Module References
	AMC_API UClass* Z_Construct_UClass_AEmpty_AMC_Character_NoRegister();
	AMC_API UClass* Z_Construct_UClass_AEmpty_AMC_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AMC();
	AMC_API UFunction* Z_Construct_UFunction_AEmpty_AMC_Character_StartJetpacking();
	AMC_API UFunction* Z_Construct_UFunction_AEmpty_AMC_Character_StartSprinting();
	AMC_API UFunction* Z_Construct_UFunction_AEmpty_AMC_Character_StopJetpacking();
	AMC_API UFunction* Z_Construct_UFunction_AEmpty_AMC_Character_StopSprinting();
// End Cross Module References
	void AEmpty_AMC_Character::StaticRegisterNativesAEmpty_AMC_Character()
	{
		UClass* Class = AEmpty_AMC_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartJetpacking", &AEmpty_AMC_Character::execStartJetpacking },
			{ "StartSprinting", &AEmpty_AMC_Character::execStartSprinting },
			{ "StopJetpacking", &AEmpty_AMC_Character::execStopJetpacking },
			{ "StopSprinting", &AEmpty_AMC_Character::execStopSprinting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEmpty_AMC_Character_StartJetpacking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmpty_AMC_Character_StartJetpacking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Empty_AMC_Character.h" },
		{ "ToolTip", "Sets starting jetpacking if can" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmpty_AMC_Character_StartJetpacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmpty_AMC_Character, "StartJetpacking", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmpty_AMC_Character_StartJetpacking_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmpty_AMC_Character_StartJetpacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmpty_AMC_Character_StartJetpacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmpty_AMC_Character_StartJetpacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmpty_AMC_Character_StartSprinting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmpty_AMC_Character_StartSprinting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Empty_AMC_Character.h" },
		{ "ToolTip", "set starting sprinting if can" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmpty_AMC_Character_StartSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmpty_AMC_Character, "StartSprinting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmpty_AMC_Character_StartSprinting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmpty_AMC_Character_StartSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmpty_AMC_Character_StartSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmpty_AMC_Character_StartSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmpty_AMC_Character_StopJetpacking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmpty_AMC_Character_StopJetpacking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Empty_AMC_Character.h" },
		{ "ToolTip", "stops starting jetpacking if can" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmpty_AMC_Character_StopJetpacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmpty_AMC_Character, "StopJetpacking", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmpty_AMC_Character_StopJetpacking_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmpty_AMC_Character_StopJetpacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmpty_AMC_Character_StopJetpacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmpty_AMC_Character_StopJetpacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmpty_AMC_Character_StopSprinting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmpty_AMC_Character_StopSprinting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Empty_AMC_Character.h" },
		{ "ToolTip", "stops starting sprinting if can" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmpty_AMC_Character_StopSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmpty_AMC_Character, "StopSprinting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmpty_AMC_Character_StopSprinting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmpty_AMC_Character_StopSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmpty_AMC_Character_StopSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmpty_AMC_Character_StopSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEmpty_AMC_Character_NoRegister()
	{
		return AEmpty_AMC_Character::StaticClass();
	}
	struct Z_Construct_UClass_AEmpty_AMC_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEmpty_AMC_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AMC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEmpty_AMC_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEmpty_AMC_Character_StartJetpacking, "StartJetpacking" }, // 330869448
		{ &Z_Construct_UFunction_AEmpty_AMC_Character_StartSprinting, "StartSprinting" }, // 3398323453
		{ &Z_Construct_UFunction_AEmpty_AMC_Character_StopJetpacking, "StopJetpacking" }, // 728396567
		{ &Z_Construct_UFunction_AEmpty_AMC_Character_StopSprinting, "StopSprinting" }, // 1774569124
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmpty_AMC_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Empty_AMC_Character.h" },
		{ "ModuleRelativePath", "Public/Empty_AMC_Character.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEmpty_AMC_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmpty_AMC_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEmpty_AMC_Character_Statics::ClassParams = {
		&AEmpty_AMC_Character::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AEmpty_AMC_Character_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEmpty_AMC_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEmpty_AMC_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEmpty_AMC_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEmpty_AMC_Character, 2118804078);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEmpty_AMC_Character(Z_Construct_UClass_AEmpty_AMC_Character, &AEmpty_AMC_Character::StaticClass, TEXT("/Script/AMC"), TEXT("AEmpty_AMC_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmpty_AMC_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
