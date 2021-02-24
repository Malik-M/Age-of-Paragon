// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AOP1_2_1_TheCorrectGoldSystem_generated_h
#error "TheCorrectGoldSystem.generated.h already included, missing '#pragma once' in TheCorrectGoldSystem.h"
#endif
#define AOP1_2_1_TheCorrectGoldSystem_generated_h

#define AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBuyFromShop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_cost); \
		P_GET_PROPERTY(UIntProperty,Z_Param_currentGold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->BuyFromShop(Z_Param_cost,Z_Param_currentGold); \
		P_NATIVE_END; \
	}


#define AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBuyFromShop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_cost); \
		P_GET_PROPERTY(UIntProperty,Z_Param_currentGold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->BuyFromShop(Z_Param_cost,Z_Param_currentGold); \
		P_NATIVE_END; \
	}


#define AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTheCorrectGoldSystem(); \
	friend struct Z_Construct_UClass_UTheCorrectGoldSystem_Statics; \
public: \
	DECLARE_CLASS(UTheCorrectGoldSystem, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AOP1_2_1"), NO_API) \
	DECLARE_SERIALIZER(UTheCorrectGoldSystem)


#define AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTheCorrectGoldSystem(); \
	friend struct Z_Construct_UClass_UTheCorrectGoldSystem_Statics; \
public: \
	DECLARE_CLASS(UTheCorrectGoldSystem, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AOP1_2_1"), NO_API) \
	DECLARE_SERIALIZER(UTheCorrectGoldSystem)


#define AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTheCorrectGoldSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTheCorrectGoldSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTheCorrectGoldSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTheCorrectGoldSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTheCorrectGoldSystem(UTheCorrectGoldSystem&&); \
	NO_API UTheCorrectGoldSystem(const UTheCorrectGoldSystem&); \
public:


#define AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTheCorrectGoldSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTheCorrectGoldSystem(UTheCorrectGoldSystem&&); \
	NO_API UTheCorrectGoldSystem(const UTheCorrectGoldSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTheCorrectGoldSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTheCorrectGoldSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTheCorrectGoldSystem)


#define AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_PRIVATE_PROPERTY_OFFSET
#define AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_12_PROLOG
#define AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_PRIVATE_PROPERTY_OFFSET \
	AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_RPC_WRAPPERS \
	AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_INCLASS \
	AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_PRIVATE_PROPERTY_OFFSET \
	AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_INCLASS_NO_PURE_DECLS \
	AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AOP1_2_1_API UClass* StaticClass<class UTheCorrectGoldSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AOP1_2_1_Source_AOP1_2_1_TheCorrectGoldSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
