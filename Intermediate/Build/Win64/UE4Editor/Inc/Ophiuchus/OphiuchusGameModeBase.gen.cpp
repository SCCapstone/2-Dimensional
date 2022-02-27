// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ophiuchus/OphiuchusGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOphiuchusGameModeBase() {}
// Cross Module References
	OPHIUCHUS_API UClass* Z_Construct_UClass_AOphiuchusGameModeBase_NoRegister();
	OPHIUCHUS_API UClass* Z_Construct_UClass_AOphiuchusGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Ophiuchus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	OPHIUCHUS_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
// End Cross Module References
	void AOphiuchusGameModeBase::StaticRegisterNativesAOphiuchusGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AOphiuchusGameModeBase_NoRegister()
	{
		return AOphiuchusGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AOphiuchusGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOphiuchusGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Ophiuchus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOphiuchusGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OphiuchusGameModeBase.h" },
		{ "ModuleRelativePath", "OphiuchusGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOphiuchusGameModeBase_Statics::NewProp_EnemyClass_MetaData[] = {
		{ "Category", "EnemySettings" },
		{ "ModuleRelativePath", "OphiuchusGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOphiuchusGameModeBase_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOphiuchusGameModeBase, EnemyClass), Z_Construct_UClass_AEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOphiuchusGameModeBase_Statics::NewProp_EnemyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOphiuchusGameModeBase_Statics::NewProp_EnemyClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOphiuchusGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOphiuchusGameModeBase_Statics::NewProp_EnemyClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOphiuchusGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOphiuchusGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOphiuchusGameModeBase_Statics::ClassParams = {
		&AOphiuchusGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOphiuchusGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOphiuchusGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOphiuchusGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOphiuchusGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOphiuchusGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOphiuchusGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOphiuchusGameModeBase, 2286749026);
	template<> OPHIUCHUS_API UClass* StaticClass<AOphiuchusGameModeBase>()
	{
		return AOphiuchusGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOphiuchusGameModeBase(Z_Construct_UClass_AOphiuchusGameModeBase, &AOphiuchusGameModeBase::StaticClass, TEXT("/Script/Ophiuchus"), TEXT("AOphiuchusGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOphiuchusGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
