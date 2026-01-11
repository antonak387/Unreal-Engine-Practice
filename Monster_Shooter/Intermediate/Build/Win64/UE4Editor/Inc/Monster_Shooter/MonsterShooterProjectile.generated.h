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
struct FHitResult;
#ifdef MONSTER_SHOOTER_MonsterShooterProjectile_generated_h
#error "MonsterShooterProjectile.generated.h already included, missing '#pragma once' in MonsterShooterProjectile.h"
#endif
#define MONSTER_SHOOTER_MonsterShooterProjectile_generated_h

#define Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_SPARSE_DATA
#define Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterShooterProjectile(); \
	friend struct Z_Construct_UClass_AMonsterShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AMonsterShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Monster_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AMonsterShooterProjectile)


#define Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMonsterShooterProjectile(); \
	friend struct Z_Construct_UClass_AMonsterShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AMonsterShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Monster_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AMonsterShooterProjectile)


#define Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonsterShooterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonsterShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterShooterProjectile(AMonsterShooterProjectile&&); \
	NO_API AMonsterShooterProjectile(const AMonsterShooterProjectile&); \
public:


#define Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterShooterProjectile(AMonsterShooterProjectile&&); \
	NO_API AMonsterShooterProjectile(const AMonsterShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonsterShooterProjectile)


#define Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_PRIVATE_PROPERTY_OFFSET
#define Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_9_PROLOG
#define Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_SPARSE_DATA \
	Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_RPC_WRAPPERS \
	Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_INCLASS \
	Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_SPARSE_DATA \
	Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTER_SHOOTER_API UClass* StaticClass<class AMonsterShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Monster_Shooter_Source_Monster_Shooter_Public_MonsterShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
