// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/GameplayAbilitySystem/Abilities/GA_Melee.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_Melee() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEMO_API UClass* Z_Construct_UClass_UGA_Melee();
	DEMO_API UClass* Z_Construct_UClass_UGA_Melee_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMGameplayAbility();
	DEMO_API UClass* Z_Construct_UClass_UMGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void UGA_Melee::StaticRegisterNativesUGA_Melee()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_Melee);
	UClass* Z_Construct_UClass_UGA_Melee_NoRegister()
	{
		return UGA_Melee::StaticClass();
	}
	struct Z_Construct_UClass_UGA_Melee_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FClassPropertyParams NewProp_EffectsToTarget_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectsToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectsToTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGA_Melee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Melee_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Melee_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/Abilities/GA_Melee.h" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_Melee.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Melee_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x8a\x80\xe8\x83\xbd\xe7\xad\x89\xe7\xba\xa7*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGA_Melee_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Melee, Level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Melee_Statics::NewProp_Level_MetaData), Z_Construct_UClass_UGA_Melee_Statics::NewProp_Level_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGA_Melee_Statics::NewProp_EffectsToTarget_Inner = { "EffectsToTarget", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Melee_Statics::NewProp_EffectsToTarget_MetaData[] = {
		{ "Category", "CastMelee" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xaf\xb9\xe7\x9b\xae\xe6\xa0\x87\xe6\x96\xbd\xe5\x8a\xa0\xe6\x95\x88\xe6\x9e\x9c*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe7\x9b\xae\xe6\xa0\x87\xe6\x96\xbd\xe5\x8a\xa0\xe6\x95\x88\xe6\x9e\x9c" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGA_Melee_Statics::NewProp_EffectsToTarget = { "EffectsToTarget", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Melee, EffectsToTarget), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Melee_Statics::NewProp_EffectsToTarget_MetaData), Z_Construct_UClass_UGA_Melee_Statics::NewProp_EffectsToTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_Melee_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Melee_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Melee_Statics::NewProp_EffectsToTarget_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Melee_Statics::NewProp_EffectsToTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGA_Melee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_Melee>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_Melee_Statics::ClassParams = {
		&UGA_Melee::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGA_Melee_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Melee_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Melee_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_Melee_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Melee_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGA_Melee()
	{
		if (!Z_Registration_Info_UClass_UGA_Melee.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_Melee.OuterSingleton, Z_Construct_UClass_UGA_Melee_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGA_Melee.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UGA_Melee>()
	{
		return UGA_Melee::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_Melee);
	UGA_Melee::~UGA_Melee() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Melee_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Melee_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGA_Melee, UGA_Melee::StaticClass, TEXT("UGA_Melee"), &Z_Registration_Info_UClass_UGA_Melee, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_Melee), 722695935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Melee_h_3060755751(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Melee_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Melee_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
