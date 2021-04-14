// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEPortfolioRPGCave/UEPortfolioRPGCaveGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEPortfolioRPGCaveGameMode() {}
// Cross Module References
	UEPORTFOLIORPGCAVE_API UClass* Z_Construct_UClass_AUEPortfolioRPGCaveGameMode_NoRegister();
	UEPORTFOLIORPGCAVE_API UClass* Z_Construct_UClass_AUEPortfolioRPGCaveGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UEPortfolioRPGCave();
// End Cross Module References
	void AUEPortfolioRPGCaveGameMode::StaticRegisterNativesAUEPortfolioRPGCaveGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUEPortfolioRPGCaveGameMode_NoRegister()
	{
		return AUEPortfolioRPGCaveGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUEPortfolioRPGCaveGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUEPortfolioRPGCaveGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UEPortfolioRPGCave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEPortfolioRPGCaveGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UEPortfolioRPGCaveGameMode.h" },
		{ "ModuleRelativePath", "UEPortfolioRPGCaveGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUEPortfolioRPGCaveGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUEPortfolioRPGCaveGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUEPortfolioRPGCaveGameMode_Statics::ClassParams = {
		&AUEPortfolioRPGCaveGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUEPortfolioRPGCaveGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUEPortfolioRPGCaveGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUEPortfolioRPGCaveGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUEPortfolioRPGCaveGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUEPortfolioRPGCaveGameMode, 2167921968);
	template<> UEPORTFOLIORPGCAVE_API UClass* StaticClass<AUEPortfolioRPGCaveGameMode>()
	{
		return AUEPortfolioRPGCaveGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUEPortfolioRPGCaveGameMode(Z_Construct_UClass_AUEPortfolioRPGCaveGameMode, &AUEPortfolioRPGCaveGameMode::StaticClass, TEXT("/Script/UEPortfolioRPGCave"), TEXT("AUEPortfolioRPGCaveGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUEPortfolioRPGCaveGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
