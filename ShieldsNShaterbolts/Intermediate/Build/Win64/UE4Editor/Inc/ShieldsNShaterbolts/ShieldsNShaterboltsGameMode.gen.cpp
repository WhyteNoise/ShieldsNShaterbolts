// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ShieldsNShaterboltsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShieldsNShaterboltsGameMode() {}
// Cross Module References
	SHIELDSNSHATERBOLTS_API UClass* Z_Construct_UClass_AShieldsNShaterboltsGameMode_NoRegister();
	SHIELDSNSHATERBOLTS_API UClass* Z_Construct_UClass_AShieldsNShaterboltsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShieldsNShaterbolts();
// End Cross Module References
	void AShieldsNShaterboltsGameMode::StaticRegisterNativesAShieldsNShaterboltsGameMode()
	{
	}
	UClass* Z_Construct_UClass_AShieldsNShaterboltsGameMode_NoRegister()
	{
		return AShieldsNShaterboltsGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AShieldsNShaterboltsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ShieldsNShaterbolts,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ShieldsNShaterboltsGameMode.h" },
				{ "ModuleRelativePath", "ShieldsNShaterboltsGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AShieldsNShaterboltsGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AShieldsNShaterboltsGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShieldsNShaterboltsGameMode, 1575545880);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShieldsNShaterboltsGameMode(Z_Construct_UClass_AShieldsNShaterboltsGameMode, &AShieldsNShaterboltsGameMode::StaticClass, TEXT("/Script/ShieldsNShaterbolts"), TEXT("AShieldsNShaterboltsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldsNShaterboltsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
