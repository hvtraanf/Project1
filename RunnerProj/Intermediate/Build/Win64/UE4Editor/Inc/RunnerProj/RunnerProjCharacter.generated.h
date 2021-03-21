// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNNERPROJ_RunnerProjCharacter_generated_h
#error "RunnerProjCharacter.generated.h already included, missing '#pragma once' in RunnerProjCharacter.h"
#endif
#define RUNNERPROJ_RunnerProjCharacter_generated_h

#define RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_SPARSE_DATA
#define RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_RPC_WRAPPERS
#define RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunnerProjCharacter(); \
	friend struct Z_Construct_UClass_ARunnerProjCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunnerProjCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunnerProj"), NO_API) \
	DECLARE_SERIALIZER(ARunnerProjCharacter)


#define RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesARunnerProjCharacter(); \
	friend struct Z_Construct_UClass_ARunnerProjCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunnerProjCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunnerProj"), NO_API) \
	DECLARE_SERIALIZER(ARunnerProjCharacter)


#define RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunnerProjCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunnerProjCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunnerProjCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunnerProjCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunnerProjCharacter(ARunnerProjCharacter&&); \
	NO_API ARunnerProjCharacter(const ARunnerProjCharacter&); \
public:


#define RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunnerProjCharacter(ARunnerProjCharacter&&); \
	NO_API ARunnerProjCharacter(const ARunnerProjCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunnerProjCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunnerProjCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARunnerProjCharacter)


#define RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ARunnerProjCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ARunnerProjCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ARunnerProjCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ARunnerProjCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ARunnerProjCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ARunnerProjCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ARunnerProjCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ARunnerProjCharacter, L_MotionController); }


#define RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_17_PROLOG
#define RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_SPARSE_DATA \
	RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_RPC_WRAPPERS \
	RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_INCLASS \
	RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_SPARSE_DATA \
	RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_INCLASS_NO_PURE_DECLS \
	RunnerProj_Source_RunnerProj_RunnerProjCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNNERPROJ_API UClass* StaticClass<class ARunnerProjCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RunnerProj_Source_RunnerProj_RunnerProjCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
