// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerProj/RunnerProjHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunnerProjHUD() {}
// Cross Module References
	RUNNERPROJ_API UClass* Z_Construct_UClass_ARunnerProjHUD_NoRegister();
	RUNNERPROJ_API UClass* Z_Construct_UClass_ARunnerProjHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_RunnerProj();
// End Cross Module References
	void ARunnerProjHUD::StaticRegisterNativesARunnerProjHUD()
	{
	}
	UClass* Z_Construct_UClass_ARunnerProjHUD_NoRegister()
	{
		return ARunnerProjHUD::StaticClass();
	}
	struct Z_Construct_UClass_ARunnerProjHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunnerProjHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerProj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunnerProjHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "RunnerProjHUD.h" },
		{ "ModuleRelativePath", "RunnerProjHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunnerProjHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunnerProjHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARunnerProjHUD_Statics::ClassParams = {
		&ARunnerProjHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARunnerProjHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerProjHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunnerProjHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARunnerProjHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARunnerProjHUD, 3561877969);
	template<> RUNNERPROJ_API UClass* StaticClass<ARunnerProjHUD>()
	{
		return ARunnerProjHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARunnerProjHUD(Z_Construct_UClass_ARunnerProjHUD, &ARunnerProjHUD::StaticClass, TEXT("/Script/RunnerProj"), TEXT("ARunnerProjHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunnerProjHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
