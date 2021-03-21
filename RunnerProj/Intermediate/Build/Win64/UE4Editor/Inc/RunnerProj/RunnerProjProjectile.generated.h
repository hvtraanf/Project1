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
struct FVector;
struct FHitResult;
#ifdef RUNNERPROJ_RunnerProjProjectile_generated_h
#error "RunnerProjProjectile.generated.h already included, missing '#pragma once' in RunnerProjProjectile.h"
#endif
#define RUNNERPROJ_RunnerProjProjectile_generated_h

#define RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_SPARSE_DATA
#define RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunnerProjProjectile(); \
	friend struct Z_Construct_UClass_ARunnerProjProjectile_Statics; \
public: \
	DECLARE_CLASS(ARunnerProjProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunnerProj"), NO_API) \
	DECLARE_SERIALIZER(ARunnerProjProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARunnerProjProjectile(); \
	friend struct Z_Construct_UClass_ARunnerProjProjectile_Statics; \
public: \
	DECLARE_CLASS(ARunnerProjProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunnerProj"), NO_API) \
	DECLARE_SERIALIZER(ARunnerProjProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunnerProjProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunnerProjProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunnerProjProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunnerProjProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunnerProjProjectile(ARunnerProjProjectile&&); \
	NO_API ARunnerProjProjectile(const ARunnerProjProjectile&); \
public:


#define RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunnerProjProjectile(ARunnerProjProjectile&&); \
	NO_API ARunnerProjProjectile(const ARunnerProjProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunnerProjProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunnerProjProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARunnerProjProjectile)


#define RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ARunnerProjProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ARunnerProjProjectile, ProjectileMovement); }


#define RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_12_PROLOG
#define RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_SPARSE_DATA \
	RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_RPC_WRAPPERS \
	RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_INCLASS \
	RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_SPARSE_DATA \
	RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_INCLASS_NO_PURE_DECLS \
	RunnerProj_Source_RunnerProj_RunnerProjProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNNERPROJ_API UClass* StaticClass<class ARunnerProjProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RunnerProj_Source_RunnerProj_RunnerProjProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
