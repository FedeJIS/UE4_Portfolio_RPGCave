// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEPortfolioRPGCave/Pillar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePillar() {}
// Cross Module References
	UEPORTFOLIORPGCAVE_API UClass* Z_Construct_UClass_APillar_NoRegister();
	UEPORTFOLIORPGCAVE_API UClass* Z_Construct_UClass_APillar();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UEPortfolioRPGCave();
	UEPORTFOLIORPGCAVE_API UClass* Z_Construct_UClass_UInteractive_NoRegister();
// End Cross Module References
	void APillar::StaticRegisterNativesAPillar()
	{
	}
	UClass* Z_Construct_UClass_APillar_NoRegister()
	{
		return APillar::StaticClass();
	}
	struct Z_Construct_UClass_APillar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APillar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UEPortfolioRPGCave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APillar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pillar.h" },
		{ "ModuleRelativePath", "Pillar.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APillar_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractive_NoRegister, (int32)VTABLE_OFFSET(APillar, IInteractive), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APillar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APillar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APillar_Statics::ClassParams = {
		&APillar::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APillar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APillar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APillar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APillar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APillar, 2439844477);
	template<> UEPORTFOLIORPGCAVE_API UClass* StaticClass<APillar>()
	{
		return APillar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APillar(Z_Construct_UClass_APillar, &APillar::StaticClass, TEXT("/Script/UEPortfolioRPGCave"), TEXT("APillar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APillar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
