// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEPORTFOLIORPGCAVE_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define UEPORTFOLIORPGCAVE_Door_generated_h

#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_SPARSE_DATA
#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenDoor);


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenDoor);


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEPortfolioRPGCave"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	virtual UObject* _getUObject() const override { return const_cast<ADoor*>(this); }


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEPortfolioRPGCave"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	virtual UObject* _getUObject() const override { return const_cast<ADoor*>(this); }


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_PRIVATE_PROPERTY_OFFSET
#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_12_PROLOG
#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_PRIVATE_PROPERTY_OFFSET \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_SPARSE_DATA \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_RPC_WRAPPERS \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_INCLASS \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_PRIVATE_PROPERTY_OFFSET \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_SPARSE_DATA \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_INCLASS_NO_PURE_DECLS \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEPORTFOLIORPGCAVE_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
