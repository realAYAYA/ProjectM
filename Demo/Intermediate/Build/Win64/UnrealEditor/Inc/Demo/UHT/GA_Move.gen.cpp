// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/GameplayAbilitySystem/Abilities/GA_Move.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_Move() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UGA_Move();
	DEMO_API UClass* Z_Construct_UClass_UGA_Move_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void UGA_Move::StaticRegisterNativesUGA_Move()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_Move);
	UClass* Z_Construct_UClass_UGA_Move_NoRegister()
	{
		return UGA_Move::StaticClass();
	}
	struct Z_Construct_UClass_UGA_Move_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGA_Move_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Move_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Move_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/Abilities/GA_Move.h" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_Move.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGA_Move_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_Move>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_Move_Statics::ClassParams = {
		&UGA_Move::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Move_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_Move_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGA_Move()
	{
		if (!Z_Registration_Info_UClass_UGA_Move.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_Move.OuterSingleton, Z_Construct_UClass_UGA_Move_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGA_Move.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UGA_Move>()
	{
		return UGA_Move::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_Move);
	UGA_Move::~UGA_Move() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Move_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Move_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGA_Move, UGA_Move::StaticClass, TEXT("UGA_Move"), &Z_Registration_Info_UClass_UGA_Move, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_Move), 2845306001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Move_h_2234354688(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Move_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Move_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
