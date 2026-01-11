// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MONSTER_SHOOTER_Monster_ShooterCharacter_generated_h
#error "Monster_ShooterCharacter.generated.h already included, missing '#pragma once' in Monster_ShooterCharacter.h"
#endif
#define MONSTER_SHOOTER_Monster_ShooterCharacter_generated_h

#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_SPARSE_DATA
#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_RPC_WRAPPERS
#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonster_ShooterCharacter(); \
	friend struct Z_Construct_UClass_AMonster_ShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AMonster_ShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Monster_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AMonster_ShooterCharacter)


#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMonster_ShooterCharacter(); \
	friend struct Z_Construct_UClass_AMonster_ShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AMonster_ShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Monster_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AMonster_ShooterCharacter)


#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonster_ShooterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonster_ShooterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster_ShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster_ShooterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster_ShooterCharacter(AMonster_ShooterCharacter&&); \
	NO_API AMonster_ShooterCharacter(const AMonster_ShooterCharacter&); \
public:


#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster_ShooterCharacter(AMonster_ShooterCharacter&&); \
	NO_API AMonster_ShooterCharacter(const AMonster_ShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster_ShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster_ShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonster_ShooterCharacter)


#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMonster_ShooterCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMonster_ShooterCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMonster_ShooterCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMonster_ShooterCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMonster_ShooterCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMonster_ShooterCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMonster_ShooterCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMonster_ShooterCharacter, L_MotionController); }


#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_17_PROLOG
#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_SPARSE_DATA \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_RPC_WRAPPERS \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_INCLASS \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_SPARSE_DATA \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTER_SHOOTER_API UClass* StaticClass<class AMonster_ShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Monster_Shooter_Source_Monster_Shooter_Monster_ShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
