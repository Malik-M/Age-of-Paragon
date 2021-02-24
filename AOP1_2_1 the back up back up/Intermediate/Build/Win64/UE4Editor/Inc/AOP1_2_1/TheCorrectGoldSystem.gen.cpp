// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AOP1_2_1/TheCorrectGoldSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheCorrectGoldSystem() {}
// Cross Module References
	AOP1_2_1_API UClass* Z_Construct_UClass_UTheCorrectGoldSystem_NoRegister();
	AOP1_2_1_API UClass* Z_Construct_UClass_UTheCorrectGoldSystem();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AOP1_2_1();
	AOP1_2_1_API UFunction* Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop();
// End Cross Module References
	void UTheCorrectGoldSystem::StaticRegisterNativesUTheCorrectGoldSystem()
	{
		UClass* Class = UTheCorrectGoldSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuyFromShop", &UTheCorrectGoldSystem::execBuyFromShop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics
	{
		struct TheCorrectGoldSystem_eventBuyFromShop_Parms
		{
			int32 cost;
			int32 currentGold;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentGold;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_cost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheCorrectGoldSystem_eventBuyFromShop_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics::NewProp_currentGold = { "currentGold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheCorrectGoldSystem_eventBuyFromShop_Parms, currentGold), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics::NewProp_cost = { "cost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheCorrectGoldSystem_eventBuyFromShop_Parms, cost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics::NewProp_currentGold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics::NewProp_cost,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics::Function_MetaDataParams[] = {
		{ "Category", "The Correct Gold System" },
		{ "ModuleRelativePath", "TheCorrectGoldSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheCorrectGoldSystem, nullptr, "BuyFromShop", nullptr, nullptr, sizeof(TheCorrectGoldSystem_eventBuyFromShop_Parms), Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTheCorrectGoldSystem_NoRegister()
	{
		return UTheCorrectGoldSystem::StaticClass();
	}
	struct Z_Construct_UClass_UTheCorrectGoldSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTheCorrectGoldSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AOP1_2_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTheCorrectGoldSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTheCorrectGoldSystem_BuyFromShop, "BuyFromShop" }, // 2132743520
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheCorrectGoldSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TheCorrectGoldSystem.h" },
		{ "ModuleRelativePath", "TheCorrectGoldSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTheCorrectGoldSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTheCorrectGoldSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTheCorrectGoldSystem_Statics::ClassParams = {
		&UTheCorrectGoldSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTheCorrectGoldSystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTheCorrectGoldSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTheCorrectGoldSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTheCorrectGoldSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTheCorrectGoldSystem, 3542342100);
	template<> AOP1_2_1_API UClass* StaticClass<UTheCorrectGoldSystem>()
	{
		return UTheCorrectGoldSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTheCorrectGoldSystem(Z_Construct_UClass_UTheCorrectGoldSystem, &UTheCorrectGoldSystem::StaticClass, TEXT("/Script/AOP1_2_1"), TEXT("UTheCorrectGoldSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTheCorrectGoldSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
