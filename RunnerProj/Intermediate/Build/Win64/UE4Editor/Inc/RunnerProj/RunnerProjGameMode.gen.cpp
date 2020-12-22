// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerProj/RunnerProjGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunnerProjGameMode() {}
// Cross Module References
	RUNNERPROJ_API UClass* Z_Construct_UClass_ARunnerProjGameMode_NoRegister();
	RUNNERPROJ_API UClass* Z_Construct_UClass_ARunnerProjGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RunnerProj();
// End Cross Module References
	void ARunnerProjGameMode::StaticRegisterNativesARunnerProjGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARunnerProjGameMode_NoRegister()
	{
		return ARunnerProjGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARunnerProjGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunnerProjGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerProj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunnerProjGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RunnerProjGameMode.h" },
		{ "ModuleRelativePath", "RunnerProjGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunnerProjGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunnerProjGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARunnerProjGameMode_Statics::ClassParams = {
		&ARunnerProjGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARunnerProjGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerProjGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunnerProjGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARunnerProjGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARunnerProjGameMode, 2261204835);
	template<> RUNNERPROJ_API UClass* StaticClass<ARunnerProjGameMode>()
	{
		return ARunnerProjGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARunnerProjGameMode(Z_Construct_UClass_ARunnerProjGameMode, &ARunnerProjGameMode::StaticClass, TEXT("/Script/RunnerProj"), TEXT("ARunnerProjGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunnerProjGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
