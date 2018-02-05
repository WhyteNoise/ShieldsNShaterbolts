// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SHIELDSNSHATERBOLTS_ShieldsNShaterboltsProjectile_generated_h
#error "ShieldsNShaterboltsProjectile.generated.h already included, missing '#pragma once' in ShieldsNShaterboltsProjectile.h"
#endif
#define SHIELDSNSHATERBOLTS_ShieldsNShaterboltsProjectile_generated_h

#define ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShieldsNShaterboltsProjectile(); \
	friend SHIELDSNSHATERBOLTS_API class UClass* Z_Construct_UClass_AShieldsNShaterboltsProjectile(); \
public: \
	DECLARE_CLASS(AShieldsNShaterboltsProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShieldsNShaterbolts"), NO_API) \
	DECLARE_SERIALIZER(AShieldsNShaterboltsProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAShieldsNShaterboltsProjectile(); \
	friend SHIELDSNSHATERBOLTS_API class UClass* Z_Construct_UClass_AShieldsNShaterboltsProjectile(); \
public: \
	DECLARE_CLASS(AShieldsNShaterboltsProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShieldsNShaterbolts"), NO_API) \
	DECLARE_SERIALIZER(AShieldsNShaterboltsProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShieldsNShaterboltsProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShieldsNShaterboltsProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShieldsNShaterboltsProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShieldsNShaterboltsProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShieldsNShaterboltsProjectile(AShieldsNShaterboltsProjectile&&); \
	NO_API AShieldsNShaterboltsProjectile(const AShieldsNShaterboltsProjectile&); \
public:


#define ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShieldsNShaterboltsProjectile(AShieldsNShaterboltsProjectile&&); \
	NO_API AShieldsNShaterboltsProjectile(const AShieldsNShaterboltsProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShieldsNShaterboltsProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShieldsNShaterboltsProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShieldsNShaterboltsProjectile)


#define ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AShieldsNShaterboltsProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AShieldsNShaterboltsProjectile, ProjectileMovement); }


#define ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_12_PROLOG
#define ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_RPC_WRAPPERS \
	ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_INCLASS \
	ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_INCLASS_NO_PURE_DECLS \
	ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShieldsNShaterbolts_Source_ShieldsNShaterbolts_ShieldsNShaterboltsProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
