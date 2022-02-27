// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPHIUCHUS_HealthBar_generated_h
#error "HealthBar.generated.h already included, missing '#pragma once' in HealthBar.h"
#endif
#define OPHIUCHUS_HealthBar_generated_h

#define 2_Dimensional_Source_Ophiuchus_HealthBar_h_15_SPARSE_DATA
#define 2_Dimensional_Source_Ophiuchus_HealthBar_h_15_RPC_WRAPPERS
#define 2_Dimensional_Source_Ophiuchus_HealthBar_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define 2_Dimensional_Source_Ophiuchus_HealthBar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthBar(); \
	friend struct Z_Construct_UClass_UHealthBar_Statics; \
public: \
	DECLARE_CLASS(UHealthBar, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Ophiuchus"), NO_API) \
	DECLARE_SERIALIZER(UHealthBar)


#define 2_Dimensional_Source_Ophiuchus_HealthBar_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHealthBar(); \
	friend struct Z_Construct_UClass_UHealthBar_Statics; \
public: \
	DECLARE_CLASS(UHealthBar, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Ophiuchus"), NO_API) \
	DECLARE_SERIALIZER(UHealthBar)


#define 2_Dimensional_Source_Ophiuchus_HealthBar_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthBar(UHealthBar&&); \
	NO_API UHealthBar(const UHealthBar&); \
public:


#define 2_Dimensional_Source_Ophiuchus_HealthBar_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthBar(UHealthBar&&); \
	NO_API UHealthBar(const UHealthBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthBar); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthBar)


#define 2_Dimensional_Source_Ophiuchus_HealthBar_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthBar() { return STRUCT_OFFSET(UHealthBar, HealthBar); } \
	FORCEINLINE static uint32 __PPO__CurrentHealthLabel() { return STRUCT_OFFSET(UHealthBar, CurrentHealthLabel); } \
	FORCEINLINE static uint32 __PPO__MaxHealthLabel() { return STRUCT_OFFSET(UHealthBar, MaxHealthLabel); }


#define 2_Dimensional_Source_Ophiuchus_HealthBar_h_12_PROLOG
#define 2_Dimensional_Source_Ophiuchus_HealthBar_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	2_Dimensional_Source_Ophiuchus_HealthBar_h_15_PRIVATE_PROPERTY_OFFSET \
	2_Dimensional_Source_Ophiuchus_HealthBar_h_15_SPARSE_DATA \
	2_Dimensional_Source_Ophiuchus_HealthBar_h_15_RPC_WRAPPERS \
	2_Dimensional_Source_Ophiuchus_HealthBar_h_15_INCLASS \
	2_Dimensional_Source_Ophiuchus_HealthBar_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define 2_Dimensional_Source_Ophiuchus_HealthBar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	2_Dimensional_Source_Ophiuchus_HealthBar_h_15_PRIVATE_PROPERTY_OFFSET \
	2_Dimensional_Source_Ophiuchus_HealthBar_h_15_SPARSE_DATA \
	2_Dimensional_Source_Ophiuchus_HealthBar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	2_Dimensional_Source_Ophiuchus_HealthBar_h_15_INCLASS_NO_PURE_DECLS \
	2_Dimensional_Source_Ophiuchus_HealthBar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPHIUCHUS_API UClass* StaticClass<class UHealthBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID 2_Dimensional_Source_Ophiuchus_HealthBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
