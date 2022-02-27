// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPHIUCHUS_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define OPHIUCHUS_Enemy_generated_h

#define 2_Dimensional_Source_Ophiuchus_Enemy_h_13_SPARSE_DATA
#define 2_Dimensional_Source_Ophiuchus_Enemy_h_13_RPC_WRAPPERS
#define 2_Dimensional_Source_Ophiuchus_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define 2_Dimensional_Source_Ophiuchus_Enemy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ophiuchus"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define 2_Dimensional_Source_Ophiuchus_Enemy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ophiuchus"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define 2_Dimensional_Source_Ophiuchus_Enemy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define 2_Dimensional_Source_Ophiuchus_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define 2_Dimensional_Source_Ophiuchus_Enemy_h_13_PRIVATE_PROPERTY_OFFSET
#define 2_Dimensional_Source_Ophiuchus_Enemy_h_11_PROLOG
#define 2_Dimensional_Source_Ophiuchus_Enemy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	2_Dimensional_Source_Ophiuchus_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	2_Dimensional_Source_Ophiuchus_Enemy_h_13_SPARSE_DATA \
	2_Dimensional_Source_Ophiuchus_Enemy_h_13_RPC_WRAPPERS \
	2_Dimensional_Source_Ophiuchus_Enemy_h_13_INCLASS \
	2_Dimensional_Source_Ophiuchus_Enemy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define 2_Dimensional_Source_Ophiuchus_Enemy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	2_Dimensional_Source_Ophiuchus_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	2_Dimensional_Source_Ophiuchus_Enemy_h_13_SPARSE_DATA \
	2_Dimensional_Source_Ophiuchus_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	2_Dimensional_Source_Ophiuchus_Enemy_h_13_INCLASS_NO_PURE_DECLS \
	2_Dimensional_Source_Ophiuchus_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPHIUCHUS_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID 2_Dimensional_Source_Ophiuchus_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
