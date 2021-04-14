// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UEPORTFOLIORPGCAVE_Lever_generated_h
#error "Lever.generated.h already included, missing '#pragma once' in Lever.h"
#endif
#define UEPORTFOLIORPGCAVE_Lever_generated_h

#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_11_DELEGATE \
struct _Script_UEPortfolioRPGCave_eventOnPulledLever_Parms \
{ \
	int32 ID; \
}; \
static inline void FOnPulledLever_DelegateWrapper(const FMulticastScriptDelegate& OnPulledLever, int32 ID) \
{ \
	_Script_UEPortfolioRPGCave_eventOnPulledLever_Parms Parms; \
	Parms.ID=ID; \
	OnPulledLever.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_SPARSE_DATA
#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALever(); \
	friend struct Z_Construct_UClass_ALever_Statics; \
public: \
	DECLARE_CLASS(ALever, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEPortfolioRPGCave"), NO_API) \
	DECLARE_SERIALIZER(ALever) \
	virtual UObject* _getUObject() const override { return const_cast<ALever*>(this); }


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALever(); \
	friend struct Z_Construct_UClass_ALever_Statics; \
public: \
	DECLARE_CLASS(ALever, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEPortfolioRPGCave"), NO_API) \
	DECLARE_SERIALIZER(ALever) \
	virtual UObject* _getUObject() const override { return const_cast<ALever*>(this); }


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALever(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALever) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALever); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALever); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALever(ALever&&); \
	NO_API ALever(const ALever&); \
public:


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALever(ALever&&); \
	NO_API ALever(const ALever&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALever); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALever); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALever)


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionMesh() { return STRUCT_OFFSET(ALever, CollisionMesh); }


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_12_PROLOG
#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_PRIVATE_PROPERTY_OFFSET \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_SPARSE_DATA \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_RPC_WRAPPERS \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_INCLASS \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_PRIVATE_PROPERTY_OFFSET \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_SPARSE_DATA \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_INCLASS_NO_PURE_DECLS \
	UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEPORTFOLIORPGCAVE_API UClass* StaticClass<class ALever>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEPortfolioRPGCave_Source_UEPortfolioRPGCave_Lever_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
