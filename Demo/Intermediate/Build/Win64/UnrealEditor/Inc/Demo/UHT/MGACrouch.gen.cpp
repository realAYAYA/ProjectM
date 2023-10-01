// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MGACrouch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMGACrouch() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UMGACrouch();
	DEMO_API UClass* Z_Construct_UClass_UMGACrouch_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void UMGACrouch::StaticRegisterNativesUMGACrouch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGACrouch);
	UClass* Z_Construct_UClass_UMGACrouch_NoRegister()
	{
		return UMGACrouch::StaticClass();
	}
	struct Z_Construct_UClass_UMGACrouch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGACrouch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGACrouch_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGACrouch_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MGACrouch.h" },
		{ "ModuleRelativePath", "MGACrouch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGACrouch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGACrouch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGACrouch_Statics::ClassParams = {
		&UMGACrouch::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGACrouch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGACrouch_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMGACrouch()
	{
		if (!Z_Registration_Info_UClass_UMGACrouch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGACrouch.OuterSingleton, Z_Construct_UClass_UMGACrouch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGACrouch.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UMGACrouch>()
	{
		return UMGACrouch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGACrouch);
	UMGACrouch::~UMGACrouch() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_MGACrouch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_MGACrouch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMGACrouch, UMGACrouch::StaticClass, TEXT("UMGACrouch"), &Z_Registration_Info_UClass_UMGACrouch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGACrouch), 2449158980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_MGACrouch_h_105692194(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_MGACrouch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_MGACrouch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
