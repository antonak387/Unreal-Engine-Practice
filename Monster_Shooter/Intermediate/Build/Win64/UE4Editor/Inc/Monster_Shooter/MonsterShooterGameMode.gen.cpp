// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Monster_Shooter/Public/MonsterShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterShooterGameMode() {}
// Cross Module References
	MONSTER_SHOOTER_API UClass* Z_Construct_UClass_AMonsterShooterGameMode_NoRegister();
	MONSTER_SHOOTER_API UClass* Z_Construct_UClass_AMonsterShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Monster_Shooter();
// End Cross Module References
	void AMonsterShooterGameMode::StaticRegisterNativesAMonsterShooterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMonsterShooterGameMode_NoRegister()
	{
		return AMonsterShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Monster_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MonsterShooterGameMode.h" },
		{ "ModuleRelativePath", "Public/MonsterShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterShooterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonsterShooterGameMode_Statics::ClassParams = {
		&AMonsterShooterGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterShooterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterShooterGameMode, 1911528099);
	template<> MONSTER_SHOOTER_API UClass* StaticClass<AMonsterShooterGameMode>()
	{
		return AMonsterShooterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterShooterGameMode(Z_Construct_UClass_AMonsterShooterGameMode, &AMonsterShooterGameMode::StaticClass, TEXT("/Script/Monster_Shooter"), TEXT("AMonsterShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
