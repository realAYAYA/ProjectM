// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/GameplayAbilitySystem/GameplayEffects/GMMC/GMMC_DirectDamage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMMC_DirectDamage() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UGMMC_DirectDamage();
	DEMO_API UClass* Z_Construct_UClass_UGMMC_DirectDamage_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void UGMMC_DirectDamage::StaticRegisterNativesUGMMC_DirectDamage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGMMC_DirectDamage);
	UClass* Z_Construct_UClass_UGMMC_DirectDamage_NoRegister()
	{
		return UGMMC_DirectDamage::StaticClass();
	}
	struct Z_Construct_UClass_UGMMC_DirectDamage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGMMC_DirectDamage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMMC_DirectDamage_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMMC_DirectDamage_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/GameplayEffects/GMMC/GMMC_DirectDamage.h" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/GameplayEffects/GMMC/GMMC_DirectDamage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGMMC_DirectDamage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMMC_DirectDamage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGMMC_DirectDamage_Statics::ClassParams = {
		&UGMMC_DirectDamage::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMMC_DirectDamage_Statics::Class_MetaDataParams), Z_Construct_UClass_UGMMC_DirectDamage_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGMMC_DirectDamage()
	{
		if (!Z_Registration_Info_UClass_UGMMC_DirectDamage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGMMC_DirectDamage.OuterSingleton, Z_Construct_UClass_UGMMC_DirectDamage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGMMC_DirectDamage.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UGMMC_DirectDamage>()
	{
		return UGMMC_DirectDamage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGMMC_DirectDamage);
	UGMMC_DirectDamage::~UGMMC_DirectDamage() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_GMMC_GMMC_DirectDamage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_GMMC_GMMC_DirectDamage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGMMC_DirectDamage, UGMMC_DirectDamage::StaticClass, TEXT("UGMMC_DirectDamage"), &Z_Registration_Info_UClass_UGMMC_DirectDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGMMC_DirectDamage), 778897010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_GMMC_GMMC_DirectDamage_h_1886823164(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_GMMC_GMMC_DirectDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_GMMC_GMMC_DirectDamage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
