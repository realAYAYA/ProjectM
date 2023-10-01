// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/GameplayAbilitySystem/Abilities/GA_Charge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_Charge() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEMO_API UClass* Z_Construct_UClass_UGA_Charge();
	DEMO_API UClass* Z_Construct_UClass_UGA_Charge_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMAbilityTask_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMGameplayAbility();
	DEMO_API UClass* Z_Construct_UClass_UMGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void UGA_Charge::StaticRegisterNativesUGA_Charge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_Charge);
	UClass* Z_Construct_UClass_UGA_Charge_NoRegister()
	{
		return UGA_Charge::StaticClass();
	}
	struct Z_Construct_UClass_UGA_Charge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinRange;
		static const UECodeGen_Private::FClassPropertyParams NewProp_EffectsToTarget_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectsToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectsToTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChargeTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChargeTask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGA_Charge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Charge_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Charge_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/Abilities/GA_Charge.h" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_Charge.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Charge_Statics::NewProp_MinRange_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x9c\x80\xe5\xb0\x8f\xe8\xb7\x9d\xe7\xa6\xbb*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_Charge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xb0\x8f\xe8\xb7\x9d\xe7\xa6\xbb" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGA_Charge_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Charge, MinRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Charge_Statics::NewProp_MinRange_MetaData), Z_Construct_UClass_UGA_Charge_Statics::NewProp_MinRange_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGA_Charge_Statics::NewProp_EffectsToTarget_Inner = { "EffectsToTarget", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Charge_Statics::NewProp_EffectsToTarget_MetaData[] = {
		{ "Category", "CastMelee" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xaf\xb9\xe7\x9b\xae\xe6\xa0\x87\xe6\x96\xbd\xe5\x8a\xa0\xe6\x95\x88\xe6\x9e\x9c*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_Charge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe7\x9b\xae\xe6\xa0\x87\xe6\x96\xbd\xe5\x8a\xa0\xe6\x95\x88\xe6\x9e\x9c" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGA_Charge_Statics::NewProp_EffectsToTarget = { "EffectsToTarget", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Charge, EffectsToTarget), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Charge_Statics::NewProp_EffectsToTarget_MetaData), Z_Construct_UClass_UGA_Charge_Statics::NewProp_EffectsToTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Charge_Statics::NewProp_ChargeTask_MetaData[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_Charge.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_Charge_Statics::NewProp_ChargeTask = { "ChargeTask", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Charge, ChargeTask), Z_Construct_UClass_UMAbilityTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Charge_Statics::NewProp_ChargeTask_MetaData), Z_Construct_UClass_UGA_Charge_Statics::NewProp_ChargeTask_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_Charge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Charge_Statics::NewProp_MinRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Charge_Statics::NewProp_EffectsToTarget_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Charge_Statics::NewProp_EffectsToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Charge_Statics::NewProp_ChargeTask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGA_Charge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_Charge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_Charge_Statics::ClassParams = {
		&UGA_Charge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGA_Charge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Charge_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Charge_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_Charge_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Charge_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGA_Charge()
	{
		if (!Z_Registration_Info_UClass_UGA_Charge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_Charge.OuterSingleton, Z_Construct_UClass_UGA_Charge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGA_Charge.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UGA_Charge>()
	{
		return UGA_Charge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_Charge);
	UGA_Charge::~UGA_Charge() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Charge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Charge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGA_Charge, UGA_Charge::StaticClass, TEXT("UGA_Charge"), &Z_Registration_Info_UClass_UGA_Charge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_Charge), 1002231834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Charge_h_1466032378(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Charge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Charge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
