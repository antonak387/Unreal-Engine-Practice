// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Monster_Shooter/Monster_ShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonster_ShooterGameMode() {}
// Cross Module References
	MONSTER_SHOOTER_API UClass* Z_Construct_UClass_AMonster_ShooterGameMode_NoRegister();
	MONSTER_SHOOTER_API UClass* Z_Construct_UClass_AMonster_ShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Monster_Shooter();
// End Cross Module References
	void AMonster_ShooterGameMode::StaticRegisterNativesAMonster_ShooterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMonster_ShooterGameMode_NoRegister()
	{
		return AMonster_ShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMonster_ShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonster_ShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Monster_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_ShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Monster_ShooterGameMode.h" },
		{ "ModuleRelativePath", "Monster_ShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonster_ShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonster_ShooterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonster_ShooterGameMode_Statics::ClassParams = {
		&AMonster_ShooterGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMonster_ShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_ShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonster_ShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonster_ShooterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonster_ShooterGameMode, 2640334386);
	template<> MONSTER_SHOOTER_API UClass* StaticClass<AMonster_ShooterGameMode>()
	{
		return AMonster_ShooterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonster_ShooterGameMode(Z_Construct_UClass_AMonster_ShooterGameMode, &AMonster_ShooterGameMode::StaticClass, TEXT("/Script/Monster_Shooter"), TEXT("AMonster_ShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonster_ShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
