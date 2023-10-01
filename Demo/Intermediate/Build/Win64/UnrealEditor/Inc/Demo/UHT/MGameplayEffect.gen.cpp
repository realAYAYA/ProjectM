// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/GameplayAbilitySystem/GameplayEffects/MGameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMGameplayEffect() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UMGameplayEffect();
	DEMO_API UClass* Z_Construct_UClass_UMGameplayEffect_NoRegister();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EBuffType();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EDamageType();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ERangeType();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERangeType;
	static UEnum* ERangeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERangeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERangeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_ERangeType, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("ERangeType"));
		}
		return Z_Registration_Info_UEnum_ERangeType.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<ERangeType>()
	{
		return ERangeType_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_ERangeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_ERangeType_Statics::Enumerators[] = {
		{ "ERangeType::None", (int64)ERangeType::None },
		{ "ERangeType::Melee", (int64)ERangeType::Melee },
		{ "ERangeType::Ranged", (int64)ERangeType::Ranged },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_ERangeType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Melee.Comment", "// \xe7\x94\xa8\xe4\xba\x8e\xe6\x97\xa0\xe6\xb3\x95\xe8\xa2\xab\xe9\xa9\xb1\xe6\x95\xa3\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c\n" },
		{ "Melee.Displayname", "Melee" },
		{ "Melee.Name", "ERangeType::Melee" },
		{ "Melee.ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe6\x97\xa0\xe6\xb3\x95\xe8\xa2\xab\xe9\xa9\xb1\xe6\x95\xa3\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/GameplayEffects/MGameplayEffect.h" },
		{ "None.Displayname", "None" },
		{ "None.Name", "ERangeType::None" },
		{ "Ranged.Displayname", "Ranged" },
		{ "Ranged.Name", "ERangeType::Ranged" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_ERangeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"ERangeType",
		"ERangeType",
		Z_Construct_UEnum_Demo_ERangeType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ERangeType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ERangeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_ERangeType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_ERangeType()
	{
		if (!Z_Registration_Info_UEnum_ERangeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERangeType.InnerSingleton, Z_Construct_UEnum_Demo_ERangeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERangeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBuffType;
	static UEnum* EBuffType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBuffType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBuffType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EBuffType, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EBuffType"));
		}
		return Z_Registration_Info_UEnum_EBuffType.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EBuffType>()
	{
		return EBuffType_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EBuffType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EBuffType_Statics::Enumerators[] = {
		{ "EBuffType::None", (int64)EBuffType::None },
		{ "EBuffType::Spell", (int64)EBuffType::Spell },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EBuffType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/GameplayEffects/MGameplayEffect.h" },
		{ "None.Displayname", "None" },
		{ "None.Name", "EBuffType::None" },
		{ "Spell.Comment", "// \xe7\x94\xa8\xe4\xba\x8e\xe6\x97\xa0\xe6\xb3\x95\xe8\xa2\xab\xe9\xa9\xb1\xe6\x95\xa3\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c\n" },
		{ "Spell.Displayname", "Spell" },
		{ "Spell.Name", "EBuffType::Spell" },
		{ "Spell.ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe6\x97\xa0\xe6\xb3\x95\xe8\xa2\xab\xe9\xa9\xb1\xe6\x95\xa3\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EBuffType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EBuffType",
		"EBuffType",
		Z_Construct_UEnum_Demo_EBuffType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EBuffType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EBuffType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EBuffType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EBuffType()
	{
		if (!Z_Registration_Info_UEnum_EBuffType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBuffType.InnerSingleton, Z_Construct_UEnum_Demo_EBuffType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBuffType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageType;
	static UEnum* EDamageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDamageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EDamageType, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EDamageType"));
		}
		return Z_Registration_Info_UEnum_EDamageType.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EDamageType>()
	{
		return EDamageType_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EDamageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EDamageType_Statics::Enumerators[] = {
		{ "EDamageType::None", (int64)EDamageType::None },
		{ "EDamageType::Physical", (int64)EDamageType::Physical },
		{ "EDamageType::Frost", (int64)EDamageType::Frost },
		{ "EDamageType::Flame", (int64)EDamageType::Flame },
		{ "EDamageType::Nature", (int64)EDamageType::Nature },
		{ "EDamageType::Divine", (int64)EDamageType::Divine },
		{ "EDamageType::Shadow", (int64)EDamageType::Shadow },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EDamageType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Divine.Displayname", "Divine" },
		{ "Divine.Name", "EDamageType::Divine" },
		{ "Flame.Displayname", "Flame" },
		{ "Flame.Name", "EDamageType::Flame" },
		{ "Frost.Displayname", "Frost" },
		{ "Frost.Name", "EDamageType::Frost" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/GameplayEffects/MGameplayEffect.h" },
		{ "Nature.Displayname", "Nature" },
		{ "Nature.Name", "EDamageType::Nature" },
		{ "None.Displayname", "None" },
		{ "None.Name", "EDamageType::None" },
		{ "Physical.Comment", "// \xe7\x94\xa8\xe4\xba\x8e\xe6\x97\xa0\xe6\xb3\x95\xe8\xa2\xab\xe9\xa9\xb1\xe6\x95\xa3\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c\n" },
		{ "Physical.Displayname", "Physical" },
		{ "Physical.Name", "EDamageType::Physical" },
		{ "Physical.ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe6\x97\xa0\xe6\xb3\x95\xe8\xa2\xab\xe9\xa9\xb1\xe6\x95\xa3\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c" },
		{ "Shadow.Displayname", "Shadow" },
		{ "Shadow.Name", "EDamageType::Shadow" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EDamageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EDamageType",
		"EDamageType",
		Z_Construct_UEnum_Demo_EDamageType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EDamageType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EDamageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EDamageType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EDamageType()
	{
		if (!Z_Registration_Info_UEnum_EDamageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageType.InnerSingleton, Z_Construct_UEnum_Demo_EDamageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDamageType.InnerSingleton;
	}
	void UMGameplayEffect::StaticRegisterNativesUMGameplayEffect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGameplayEffect);
	UClass* Z_Construct_UClass_UMGameplayEffect_NoRegister()
	{
		return UMGameplayEffect::StaticClass();
	}
	struct Z_Construct_UClass_UMGameplayEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGameplayEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayEffect_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameplayEffect_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/GameplayEffects/MGameplayEffect.h" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/GameplayEffects/MGameplayEffect.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGameplayEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGameplayEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGameplayEffect_Statics::ClassParams = {
		&UMGameplayEffect::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGameplayEffect_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMGameplayEffect()
	{
		if (!Z_Registration_Info_UClass_UMGameplayEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGameplayEffect.OuterSingleton, Z_Construct_UClass_UMGameplayEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGameplayEffect.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UMGameplayEffect>()
	{
		return UMGameplayEffect::StaticClass();
	}
	UMGameplayEffect::UMGameplayEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGameplayEffect);
	UMGameplayEffect::~UMGameplayEffect() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_Statics::EnumInfo[] = {
		{ ERangeType_StaticEnum, TEXT("ERangeType"), &Z_Registration_Info_UEnum_ERangeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3158397536U) },
		{ EBuffType_StaticEnum, TEXT("EBuffType"), &Z_Registration_Info_UEnum_EBuffType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1606343591U) },
		{ EDamageType_StaticEnum, TEXT("EDamageType"), &Z_Registration_Info_UEnum_EDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2039942961U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMGameplayEffect, UMGameplayEffect::StaticClass, TEXT("UMGameplayEffect"), &Z_Registration_Info_UClass_UMGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGameplayEffect), 1908906358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_3834519257(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
