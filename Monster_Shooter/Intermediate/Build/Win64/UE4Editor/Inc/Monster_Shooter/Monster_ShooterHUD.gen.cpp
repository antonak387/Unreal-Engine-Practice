// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Monster_Shooter/Monster_ShooterHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonster_ShooterHUD() {}
// Cross Module References
	MONSTER_SHOOTER_API UClass* Z_Construct_UClass_AMonster_ShooterHUD_NoRegister();
	MONSTER_SHOOTER_API UClass* Z_Construct_UClass_AMonster_ShooterHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Monster_Shooter();
// End Cross Module References
	void AMonster_ShooterHUD::StaticRegisterNativesAMonster_ShooterHUD()
	{
	}
	UClass* Z_Construct_UClass_AMonster_ShooterHUD_NoRegister()
	{
		return AMonster_ShooterHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMonster_ShooterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonster_ShooterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Monster_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_ShooterHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Monster_ShooterHUD.h" },
		{ "ModuleRelativePath", "Monster_ShooterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonster_ShooterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonster_ShooterHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonster_ShooterHUD_Statics::ClassParams = {
		&AMonster_ShooterHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMonster_ShooterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_ShooterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonster_ShooterHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonster_ShooterHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonster_ShooterHUD, 3794766117);
	template<> MONSTER_SHOOTER_API UClass* StaticClass<AMonster_ShooterHUD>()
	{
		return AMonster_ShooterHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonster_ShooterHUD(Z_Construct_UClass_AMonster_ShooterHUD, &AMonster_ShooterHUD::StaticClass, TEXT("/Script/Monster_Shooter"), TEXT("AMonster_ShooterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonster_ShooterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
