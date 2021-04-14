// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEPortfolioRPGCave/UEPortfolioRPGCavePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEPortfolioRPGCavePlayerController() {}
// Cross Module References
	UEPORTFOLIORPGCAVE_API UClass* Z_Construct_UClass_AUEPortfolioRPGCavePlayerController_NoRegister();
	UEPORTFOLIORPGCAVE_API UClass* Z_Construct_UClass_AUEPortfolioRPGCavePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_UEPortfolioRPGCave();
// End Cross Module References
	void AUEPortfolioRPGCavePlayerController::StaticRegisterNativesAUEPortfolioRPGCavePlayerController()
	{
	}
	UClass* Z_Construct_UClass_AUEPortfolioRPGCavePlayerController_NoRegister()
	{
		return AUEPortfolioRPGCavePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AUEPortfolioRPGCavePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUEPortfolioRPGCavePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UEPortfolioRPGCave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEPortfolioRPGCavePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UEPortfolioRPGCavePlayerController.h" },
		{ "ModuleRelativePath", "UEPortfolioRPGCavePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUEPortfolioRPGCavePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUEPortfolioRPGCavePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUEPortfolioRPGCavePlayerController_Statics::ClassParams = {
		&AUEPortfolioRPGCavePlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUEPortfolioRPGCavePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUEPortfolioRPGCavePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUEPortfolioRPGCavePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUEPortfolioRPGCavePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUEPortfolioRPGCavePlayerController, 1208445551);
	template<> UEPORTFOLIORPGCAVE_API UClass* StaticClass<AUEPortfolioRPGCavePlayerController>()
	{
		return AUEPortfolioRPGCavePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUEPortfolioRPGCavePlayerController(Z_Construct_UClass_AUEPortfolioRPGCavePlayerController, &AUEPortfolioRPGCavePlayerController::StaticClass, TEXT("/Script/UEPortfolioRPGCave"), TEXT("AUEPortfolioRPGCavePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUEPortfolioRPGCavePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
