// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/GameplayAbilitySystem/GameplayEffects/GEEC/GEEC_LifeSteal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGEEC_LifeSteal() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UMGameplayEffectExecutionCalculation();
	DEMO_API UClass* Z_Construct_UClass_UMGameplayEffectExecutionCalculation_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void UMGameplayEffectExecutionCalculation::StaticRegisterNativesUMGameplayEffectExecutionCalculation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGameplayEffectExecutionCalculation);
	UClass* Z_Construct_UClass_UMGameplayEffectExecutionCalculation_NoRegister()
	{
		return UMGameplayEffectExecutionCalculation::StaticClass();
	}
	struct Z_Construct_UClass_UMGameplayEffectExecutionCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGameplayEffectExecutionCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayEffectExecutionCalculation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameplayEffectExecutionCalculation_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/GameplayEffects/GEEC/GEEC_LifeSteal.h" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/GameplayEffects/GEEC/GEEC_LifeSteal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGameplayEffectExecutionCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGameplayEffectExecutionCalculation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGameplayEffectExecutionCalculation_Statics::ClassParams = {
		&UMGameplayEffectExecutionCalculation::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayEffectExecutionCalculation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGameplayEffectExecutionCalculation_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMGameplayEffectExecutionCalculation()
	{
		if (!Z_Registration_Info_UClass_UMGameplayEffectExecutionCalculation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGameplayEffectExecutionCalculation.OuterSingleton, Z_Construct_UClass_UMGameplayEffectExecutionCalculation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGameplayEffectExecutionCalculation.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UMGameplayEffectExecutionCalculation>()
	{
		return UMGameplayEffectExecutionCalculation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGameplayEffectExecutionCalculation);
	UMGameplayEffectExecutionCalculation::~UMGameplayEffectExecutionCalculation() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_GEEC_GEEC_LifeSteal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_GEEC_GEEC_LifeSteal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMGameplayEffectExecutionCalculation, UMGameplayEffectExecutionCalculation::StaticClass, TEXT("UMGameplayEffectExecutionCalculation"), &Z_Registration_Info_UClass_UMGameplayEffectExecutionCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGameplayEffectExecutionCalculation), 2755027561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_GEEC_GEEC_LifeSteal_h_1858332898(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_GEEC_GEEC_LifeSteal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_GEEC_GEEC_LifeSteal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
