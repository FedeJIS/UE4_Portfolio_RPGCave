// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEPortfolioRPGCave/Interactive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractive() {}
// Cross Module References
	UEPORTFOLIORPGCAVE_API UClass* Z_Construct_UClass_UInteractive_NoRegister();
	UEPORTFOLIORPGCAVE_API UClass* Z_Construct_UClass_UInteractive();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UEPortfolioRPGCave();
// End Cross Module References
	void UInteractive::StaticRegisterNativesUInteractive()
	{
	}
	UClass* Z_Construct_UClass_UInteractive_NoRegister()
	{
		return UInteractive::StaticClass();
	}
	struct Z_Construct_UClass_UInteractive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UEPortfolioRPGCave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractive_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractive_Statics::ClassParams = {
		&UInteractive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractive, 3643125882);
	template<> UEPORTFOLIORPGCAVE_API UClass* StaticClass<UInteractive>()
	{
		return UInteractive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractive(Z_Construct_UClass_UInteractive, &UInteractive::StaticClass, TEXT("/Script/UEPortfolioRPGCave"), TEXT("UInteractive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
