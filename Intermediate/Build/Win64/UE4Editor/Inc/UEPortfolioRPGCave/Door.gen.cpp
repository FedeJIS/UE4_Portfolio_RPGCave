// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEPortfolioRPGCave/Door.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}
// Cross Module References
	UEPORTFOLIORPGCAVE_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	UEPORTFOLIORPGCAVE_API UClass* Z_Construct_UClass_ADoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UEPortfolioRPGCave();
	UEPORTFOLIORPGCAVE_API UClass* Z_Construct_UClass_UInteractive_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADoor::execOpenDoor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenDoor(Z_Param_ID);
		P_NATIVE_END;
	}
	void ADoor::StaticRegisterNativesADoor()
	{
		UClass* Class = ADoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenDoor", &ADoor::execOpenDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoor_OpenDoor_Statics
	{
		struct Door_eventOpenDoor_Parms
		{
			int32 ID;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ADoor_OpenDoor_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Door_eventOpenDoor_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_OpenDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_OpenDoor_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OpenDoor", nullptr, nullptr, sizeof(Door_eventOpenDoor_Parms), Z_Construct_UFunction_ADoor_OpenDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OpenDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoor_NoRegister()
	{
		return ADoor::StaticClass();
	}
	struct Z_Construct_UClass_ADoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsClosed_MetaData[];
#endif
		static void NewProp_bIsClosed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClosed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDoubleDoor_MetaData[];
#endif
		static void NewProp_bIsDoubleDoor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDoubleDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightDoor_YawValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightDoor_YawValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftDoor_YawValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftDoor_YawValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeverID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LeverID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UEPortfolioRPGCave,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoor_OpenDoor, "OpenDoor" }, // 251482378
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Door.h" },
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_bIsClosed_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
	void Z_Construct_UClass_ADoor_Statics::NewProp_bIsClosed_SetBit(void* Obj)
	{
		((ADoor*)Obj)->bIsClosed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bIsClosed = { "bIsClosed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bIsClosed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_bIsClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_bIsClosed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_bIsDoubleDoor_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
	void Z_Construct_UClass_ADoor_Statics::NewProp_bIsDoubleDoor_SetBit(void* Obj)
	{
		((ADoor*)Obj)->bIsDoubleDoor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bIsDoubleDoor = { "bIsDoubleDoor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bIsDoubleDoor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_bIsDoubleDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_bIsDoubleDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_RightDoor_YawValue_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RightDoor_YawValue = { "RightDoor_YawValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor, RightDoor_YawValue), METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_RightDoor_YawValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_RightDoor_YawValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_LeftDoor_YawValue_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_LeftDoor_YawValue = { "LeftDoor_YawValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor, LeftDoor_YawValue), METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_LeftDoor_YawValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_LeftDoor_YawValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_LeverID_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_LeverID = { "LeverID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor, LeverID), METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_LeverID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_LeverID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bIsClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bIsDoubleDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RightDoor_YawValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_LeftDoor_YawValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_LeverID,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADoor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractive_NoRegister, (int32)VTABLE_OFFSET(ADoor, IInteractive), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
		&ADoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADoor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoor, 528164250);
	template<> UEPORTFOLIORPGCAVE_API UClass* StaticClass<ADoor>()
	{
		return ADoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoor(Z_Construct_UClass_ADoor, &ADoor::StaticClass, TEXT("/Script/UEPortfolioRPGCave"), TEXT("ADoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
