// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEPortfolioRPGCave/UEPortfolioRPGCaveCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEPortfolioRPGCaveCharacter() {}
// Cross Module References
	UEPORTFOLIORPGCAVE_API UClass* Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_NoRegister();
	UEPORTFOLIORPGCAVE_API UClass* Z_Construct_UClass_AUEPortfolioRPGCaveCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UEPortfolioRPGCave();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUEPortfolioRPGCaveCharacter::execSetIsAttacking)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsAttacking(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUEPortfolioRPGCaveCharacter::execIsAttacking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttacking();
		P_NATIVE_END;
	}
	void AUEPortfolioRPGCaveCharacter::StaticRegisterNativesAUEPortfolioRPGCaveCharacter()
	{
		UClass* Class = AUEPortfolioRPGCaveCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAttacking", &AUEPortfolioRPGCaveCharacter::execIsAttacking },
			{ "SetIsAttacking", &AUEPortfolioRPGCaveCharacter::execSetIsAttacking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking_Statics
	{
		struct UEPortfolioRPGCaveCharacter_eventIsAttacking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEPortfolioRPGCaveCharacter_eventIsAttacking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEPortfolioRPGCaveCharacter_eventIsAttacking_Parms), &Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "UEPortfolioRPGCaveCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUEPortfolioRPGCaveCharacter, nullptr, "IsAttacking", nullptr, nullptr, sizeof(UEPortfolioRPGCaveCharacter_eventIsAttacking_Parms), Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking_Statics
	{
		struct UEPortfolioRPGCaveCharacter_eventSetIsAttacking_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking_Statics::NewProp_value_SetBit(void* Obj)
	{
		((UEPortfolioRPGCaveCharacter_eventSetIsAttacking_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEPortfolioRPGCaveCharacter_eventSetIsAttacking_Parms), &Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "UEPortfolioRPGCaveCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUEPortfolioRPGCaveCharacter, nullptr, "SetIsAttacking", nullptr, nullptr, sizeof(UEPortfolioRPGCaveCharacter_eventSetIsAttacking_Parms), Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_NoRegister()
	{
		return AUEPortfolioRPGCaveCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorToWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorToWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[];
#endif
		static void NewProp_bIsAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UEPortfolioRPGCave,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_IsAttacking, "IsAttacking" }, // 143629946
		{ &Z_Construct_UFunction_AUEPortfolioRPGCaveCharacter_SetIsAttacking, "SetIsAttacking" }, // 2340928569
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UEPortfolioRPGCaveCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UEPortfolioRPGCaveCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_CursorToWorld_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** A decal that projects to the cursor location. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UEPortfolioRPGCaveCharacter.h" },
		{ "ToolTip", "A decal that projects to the cursor location." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_CursorToWorld = { "CursorToWorld", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUEPortfolioRPGCaveCharacter, CursorToWorld), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_CursorToWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_CursorToWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UEPortfolioRPGCaveCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUEPortfolioRPGCaveCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UEPortfolioRPGCaveCharacter.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUEPortfolioRPGCaveCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "UEPortfolioRPGCaveCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((AUEPortfolioRPGCaveCharacter*)Obj)->bIsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUEPortfolioRPGCaveCharacter), &Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_bIsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_bIsAttacking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_CursorToWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::NewProp_bIsAttacking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUEPortfolioRPGCaveCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::ClassParams = {
		&AUEPortfolioRPGCaveCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUEPortfolioRPGCaveCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUEPortfolioRPGCaveCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUEPortfolioRPGCaveCharacter, 303177798);
	template<> UEPORTFOLIORPGCAVE_API UClass* StaticClass<AUEPortfolioRPGCaveCharacter>()
	{
		return AUEPortfolioRPGCaveCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUEPortfolioRPGCaveCharacter(Z_Construct_UClass_AUEPortfolioRPGCaveCharacter, &AUEPortfolioRPGCaveCharacter::StaticClass, TEXT("/Script/UEPortfolioRPGCave"), TEXT("AUEPortfolioRPGCaveCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUEPortfolioRPGCaveCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
