// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ShieldsNShaterboltsPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShieldsNShaterboltsPawn() {}
// Cross Module References
	SHIELDSNSHATERBOLTS_API UClass* Z_Construct_UClass_AShieldsNShaterboltsPawn_NoRegister();
	SHIELDSNSHATERBOLTS_API UClass* Z_Construct_UClass_AShieldsNShaterboltsPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ShieldsNShaterbolts();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AShieldsNShaterboltsPawn::StaticRegisterNativesAShieldsNShaterboltsPawn()
	{
	}
	UClass* Z_Construct_UClass_AShieldsNShaterboltsPawn_NoRegister()
	{
		return AShieldsNShaterboltsPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AShieldsNShaterboltsPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_ShieldsNShaterbolts,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "ShieldsNShaterboltsPawn.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "ShieldsNShaterboltsPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "ShieldsNShaterboltsPawn.h" },
				{ "ToolTip", "Sound to play each time we fire" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound = { UE4CodeGen_Private::EPropertyClass::Object, "FireSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AShieldsNShaterboltsPawn, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_FireSound_MetaData, ARRAY_COUNT(NewProp_FireSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "ShieldsNShaterboltsPawn.h" },
				{ "ToolTip", "The speed our ship moves around the level" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MoveSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AShieldsNShaterboltsPawn, MoveSpeed), METADATA_PARAMS(NewProp_MoveSpeed_MetaData, ARRAY_COUNT(NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "ShieldsNShaterboltsPawn.h" },
				{ "ToolTip", "How fast the weapon will fire" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate = { UE4CodeGen_Private::EPropertyClass::Float, "FireRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AShieldsNShaterboltsPawn, FireRate), METADATA_PARAMS(NewProp_FireRate_MetaData, ARRAY_COUNT(NewProp_FireRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "ShieldsNShaterboltsPawn.h" },
				{ "ToolTip", "Offset from the ships location to spawn projectiles" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "GunOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AShieldsNShaterboltsPawn, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_GunOffset_MetaData, ARRAY_COUNT(NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ShieldsNShaterboltsPawn.h" },
				{ "ToolTip", "Camera boom positioning the camera above the character" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AShieldsNShaterboltsPawn, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_CameraBoom_MetaData, ARRAY_COUNT(NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ShieldsNShaterboltsPawn.h" },
				{ "ToolTip", "The camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AShieldsNShaterboltsPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_CameraComponent_MetaData, ARRAY_COUNT(NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipMeshComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ShieldsNShaterboltsPawn.h" },
				{ "ToolTip", "The mesh component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ShipMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AShieldsNShaterboltsPawn, ShipMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_ShipMeshComponent_MetaData, ARRAY_COUNT(NewProp_ShipMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GunOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraBoom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShipMeshComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AShieldsNShaterboltsPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AShieldsNShaterboltsPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShieldsNShaterboltsPawn, 980958934);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShieldsNShaterboltsPawn(Z_Construct_UClass_AShieldsNShaterboltsPawn, &AShieldsNShaterboltsPawn::StaticClass, TEXT("/Script/ShieldsNShaterbolts"), TEXT("AShieldsNShaterboltsPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldsNShaterboltsPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
