// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ophiuchus/EnemySpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawn() {}
// Cross Module References
	OPHIUCHUS_API UClass* Z_Construct_UClass_AEnemySpawn_NoRegister();
	OPHIUCHUS_API UClass* Z_Construct_UClass_AEnemySpawn();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_Ophiuchus();
// End Cross Module References
	void AEnemySpawn::StaticRegisterNativesAEnemySpawn()
	{
	}
	UClass* Z_Construct_UClass_AEnemySpawn_NoRegister()
	{
		return AEnemySpawn::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Ophiuchus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemySpawn.h" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawn_Statics::ClassParams = {
		&AEnemySpawn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemySpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemySpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemySpawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemySpawn, 1973966532);
	template<> OPHIUCHUS_API UClass* StaticClass<AEnemySpawn>()
	{
		return AEnemySpawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemySpawn(Z_Construct_UClass_AEnemySpawn, &AEnemySpawn::StaticClass, TEXT("/Script/Ophiuchus"), TEXT("AEnemySpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif