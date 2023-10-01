// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/GameplayAbilitySystem/Abilities/GA_CastSpell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_CastSpell() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEMO_API UClass* Z_Construct_UClass_UGA_CastSpell();
	DEMO_API UClass* Z_Construct_UClass_UGA_CastSpell_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMAbilityTask_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMGameplayAbility();
	DEMO_API UClass* Z_Construct_UClass_UMGameplayEffect_NoRegister();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ETargetType();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void UGA_CastSpell::StaticRegisterNativesUGA_CastSpell()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_CastSpell);
	UClass* Z_Construct_UClass_UGA_CastSpell_NoRegister()
	{
		return UGA_CastSpell::StaticClass();
	}
	struct Z_Construct_UClass_UGA_CastSpell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CastTime;
		static const UECodeGen_Private::FClassPropertyParams NewProp_EffectsToTarget_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectsToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectsToTarget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpellTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpellTask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGA_CastSpell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_CastSpell_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_CastSpell_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/Abilities/GA_CastSpell.h" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_CastSpell.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x8a\x80\xe8\x83\xbd\xe7\xad\x89\xe7\xba\xa7*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_CastSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_CastSpell, Level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_Level_MetaData), Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_Level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_CastTime_MetaData[] = {
		{ "Category", "CastSpell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x96\xbd\xe6\xb3\x95\xe6\x97\xb6\xe9\x97\xb4*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_CastSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\xbd\xe6\xb3\x95\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_CastTime = { "CastTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_CastSpell, CastTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_CastTime_MetaData), Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_CastTime_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_EffectsToTarget_Inner = { "EffectsToTarget", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_EffectsToTarget_MetaData[] = {
		{ "Category", "CastSpell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xaf\xb9\xe7\x9b\xae\xe6\xa0\x87\xe6\x96\xbd\xe5\x8a\xa0\xe6\x95\x88\xe6\x9e\x9c*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_CastSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe7\x9b\xae\xe6\xa0\x87\xe6\x96\xbd\xe5\x8a\xa0\xe6\x95\x88\xe6\x9e\x9c" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_EffectsToTarget = { "EffectsToTarget", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_CastSpell, EffectsToTarget), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_EffectsToTarget_MetaData), Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_EffectsToTarget_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "CastSpell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x8a\x80\xe8\x83\xbd\xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_CastSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_CastSpell, TargetType), Z_Construct_UEnum_Demo_ETargetType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_TargetType_MetaData), Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_TargetType_MetaData) }; // 2766206230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_SpellTask_MetaData[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_CastSpell.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_SpellTask = { "SpellTask", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_CastSpell, SpellTask), Z_Construct_UClass_UMAbilityTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_SpellTask_MetaData), Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_SpellTask_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_CastSpell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_CastTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_EffectsToTarget_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_EffectsToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_TargetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_TargetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_CastSpell_Statics::NewProp_SpellTask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGA_CastSpell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_CastSpell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_CastSpell_Statics::ClassParams = {
		&UGA_CastSpell::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGA_CastSpell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGA_CastSpell_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_CastSpell_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_CastSpell_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_CastSpell_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGA_CastSpell()
	{
		if (!Z_Registration_Info_UClass_UGA_CastSpell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_CastSpell.OuterSingleton, Z_Construct_UClass_UGA_CastSpell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGA_CastSpell.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UGA_CastSpell>()
	{
		return UGA_CastSpell::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_CastSpell);
	UGA_CastSpell::~UGA_CastSpell() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_CastSpell_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_CastSpell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGA_CastSpell, UGA_CastSpell::StaticClass, TEXT("UGA_CastSpell"), &Z_Registration_Info_UClass_UGA_CastSpell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_CastSpell), 4099946949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_CastSpell_h_3782200146(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_CastSpell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_CastSpell_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
