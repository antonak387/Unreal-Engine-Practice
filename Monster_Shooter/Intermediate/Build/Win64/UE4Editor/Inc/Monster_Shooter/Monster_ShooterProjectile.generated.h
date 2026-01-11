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
#ifdef MONSTER_SHOOTER_Monster_ShooterProjectile_generated_h
#error "Monster_ShooterProjectile.generated.h already included, missing '#pragma once' in Monster_ShooterProjectile.h"
#endif
#define MONSTER_SHOOTER_Monster_ShooterProjectile_generated_h

#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_SPARSE_DATA
#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonster_ShooterProjectile(); \
	friend struct Z_Construct_UClass_AMonster_ShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AMonster_ShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Monster_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AMonster_ShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMonster_ShooterProjectile(); \
	friend struct Z_Construct_UClass_AMonster_ShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AMonster_ShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Monster_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AMonster_ShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonster_ShooterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonster_ShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster_ShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster_ShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster_ShooterProjectile(AMonster_ShooterProjectile&&); \
	NO_API AMonster_ShooterProjectile(const AMonster_ShooterProjectile&); \
public:


#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster_ShooterProjectile(AMonster_ShooterProjectile&&); \
	NO_API AMonster_ShooterProjectile(const AMonster_ShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster_ShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster_ShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonster_ShooterProjectile)


#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMonster_ShooterProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMonster_ShooterProjectile, ProjectileMovement); }


#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_12_PROLOG
#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_SPARSE_DATA \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_RPC_WRAPPERS \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_INCLASS \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_SPARSE_DATA \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTER_SHOOTER_API UClass* StaticClass<class AMonster_ShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Monster_Shooter_Source_Monster_Shooter_Monster_ShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
