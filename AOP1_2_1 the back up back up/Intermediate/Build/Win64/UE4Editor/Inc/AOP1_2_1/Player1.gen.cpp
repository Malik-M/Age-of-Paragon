// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AOP1_2_1/Player1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer1() {}
// Cross Module References
	AOP1_2_1_API UClass* Z_Construct_UClass_APlayer1_NoRegister();
	AOP1_2_1_API UClass* Z_Construct_UClass_APlayer1();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AOP1_2_1();
// End Cross Module References
	void APlayer1::StaticRegisterNativesAPlayer1()
	{
	}
	UClass* Z_Construct_UClass_APlayer1_NoRegister()
	{
		return APlayer1::StaticClass();
	}
	struct Z_Construct_UClass_APlayer1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AOP1_2_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player1.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_gold_MetaData[] = {
		{ "Category", "goldAmount" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_gold = { "gold", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, gold), METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_gold_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_gold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_gold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer1_Statics::ClassParams = {
		&APlayer1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayer1_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer1, 3040717019);
	template<> AOP1_2_1_API UClass* StaticClass<APlayer1>()
	{
		return APlayer1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer1(Z_Construct_UClass_APlayer1, &APlayer1::StaticClass, TEXT("/Script/AOP1_2_1"), TEXT("APlayer1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
