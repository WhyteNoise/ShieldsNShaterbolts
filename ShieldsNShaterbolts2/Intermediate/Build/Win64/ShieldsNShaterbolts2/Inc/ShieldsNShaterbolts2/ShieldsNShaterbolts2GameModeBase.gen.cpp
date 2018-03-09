// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ShieldsNShaterbolts2GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShieldsNShaterbolts2GameModeBase() {}
// Cross Module References
	SHIELDSNSHATERBOLTS2_API UClass* Z_Construct_UClass_AShieldsNShaterbolts2GameModeBase_NoRegister();
	SHIELDSNSHATERBOLTS2_API UClass* Z_Construct_UClass_AShieldsNShaterbolts2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShieldsNShaterbolts2();
// End Cross Module References
	void AShieldsNShaterbolts2GameModeBase::StaticRegisterNativesAShieldsNShaterbolts2GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AShieldsNShaterbolts2GameModeBase_NoRegister()
	{
		return AShieldsNShaterbolts2GameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AShieldsNShaterbolts2GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ShieldsNShaterbolts2,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ShieldsNShaterbolts2GameModeBase.h" },
				{ "ModuleRelativePath", "ShieldsNShaterbolts2GameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AShieldsNShaterbolts2GameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AShieldsNShaterbolts2GameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(AShieldsNShaterbolts2GameModeBase, 611416929);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShieldsNShaterbolts2GameModeBase(Z_Construct_UClass_AShieldsNShaterbolts2GameModeBase, &AShieldsNShaterbolts2GameModeBase::StaticClass, TEXT("/Script/ShieldsNShaterbolts2"), TEXT("AShieldsNShaterbolts2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldsNShaterbolts2GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
