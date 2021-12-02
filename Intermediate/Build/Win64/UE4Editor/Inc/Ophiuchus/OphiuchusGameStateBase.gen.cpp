// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ophiuchus/OphiuchusGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOphiuchusGameStateBase() {}
// Cross Module References
	OPHIUCHUS_API UClass* Z_Construct_UClass_AOphiuchusGameStateBase_NoRegister();
	OPHIUCHUS_API UClass* Z_Construct_UClass_AOphiuchusGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Ophiuchus();
// End Cross Module References
	void AOphiuchusGameStateBase::StaticRegisterNativesAOphiuchusGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_AOphiuchusGameStateBase_NoRegister()
	{
		return AOphiuchusGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AOphiuchusGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOphiuchusGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Ophiuchus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOphiuchusGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OphiuchusGameStateBase.h" },
		{ "ModuleRelativePath", "OphiuchusGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOphiuchusGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOphiuchusGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOphiuchusGameStateBase_Statics::ClassParams = {
		&AOphiuchusGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOphiuchusGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOphiuchusGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOphiuchusGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOphiuchusGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOphiuchusGameStateBase, 1916455126);
	template<> OPHIUCHUS_API UClass* StaticClass<AOphiuchusGameStateBase>()
	{
		return AOphiuchusGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOphiuchusGameStateBase(Z_Construct_UClass_AOphiuchusGameStateBase, &AOphiuchusGameStateBase::StaticClass, TEXT("/Script/Ophiuchus"), TEXT("AOphiuchusGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOphiuchusGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
