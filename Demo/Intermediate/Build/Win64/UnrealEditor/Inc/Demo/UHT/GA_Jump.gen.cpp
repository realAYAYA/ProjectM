// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/GameplayAbilitySystem/Abilities/GA_Jump.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_Jump() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UGA_Jump();
	DEMO_API UClass* Z_Construct_UClass_UGA_Jump_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void UGA_Jump::StaticRegisterNativesUGA_Jump()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_Jump);
	UClass* Z_Construct_UClass_UGA_Jump_NoRegister()
	{
		return UGA_Jump::StaticClass();
	}
	struct Z_Construct_UClass_UGA_Jump_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGA_Jump_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Jump_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Jump_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/Abilities/GA_Jump.h" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/GA_Jump.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGA_Jump_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_Jump>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_Jump_Statics::ClassParams = {
		&UGA_Jump::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Jump_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_Jump_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGA_Jump()
	{
		if (!Z_Registration_Info_UClass_UGA_Jump.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_Jump.OuterSingleton, Z_Construct_UClass_UGA_Jump_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGA_Jump.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UGA_Jump>()
	{
		return UGA_Jump::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_Jump);
	UGA_Jump::~UGA_Jump() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Jump_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Jump_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGA_Jump, UGA_Jump::StaticClass, TEXT("UGA_Jump"), &Z_Registration_Info_UClass_UGA_Jump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_Jump), 3752907789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Jump_h_1687480407(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Jump_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_GA_Jump_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
