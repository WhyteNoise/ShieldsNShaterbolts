// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHIELDSNSHATERBOLTS2_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define SHIELDSNSHATERBOLTS2_BaseCharacter_generated_h

#define ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateLives) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateLives(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateHealth(Z_Param_delta); \
		P_NATIVE_END; \
	}


#define ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateLives) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateLives(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateHealth(Z_Param_delta); \
		P_NATIVE_END; \
	}


#define ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend SHIELDSNSHATERBOLTS2_API class UClass* Z_Construct_UClass_ABaseCharacter(); \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShieldsNShaterbolts2"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend SHIELDSNSHATERBOLTS2_API class UClass* Z_Construct_UClass_ABaseCharacter(); \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShieldsNShaterbolts2"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_9_PROLOG
#define ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_RPC_WRAPPERS \
	ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_INCLASS \
	ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShieldsNShaterbolts2_Source_ShieldsNShaterbolts2_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
