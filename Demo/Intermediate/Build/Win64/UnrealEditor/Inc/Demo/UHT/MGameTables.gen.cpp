// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MGameTables/MGameTables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMGameTables() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UItemConfigManager_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMGameTables();
	DEMO_API UClass* Z_Construct_UClass_UMGameTables_NoRegister();
	GAMETABLES_API UClass* Z_Construct_UClass_UGameTables();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void UMGameTables::StaticRegisterNativesUMGameTables()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGameTables);
	UClass* Z_Construct_UClass_UMGameTables_NoRegister()
	{
		return UMGameTables::StaticClass();
	}
	struct Z_Construct_UClass_UMGameTables_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGameTables_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameTables,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameTables_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameTables_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MGameTables/MGameTables.h" },
		{ "ModuleRelativePath", "Public/MGameTables/MGameTables.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameTables_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x81\x93\xe5\x85\xb7\xe8\xa1\xa8 */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/MGameTables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x93\xe5\x85\xb7\xe8\xa1\xa8" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMGameTables_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGameTables, Item), Z_Construct_UClass_UItemConfigManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameTables_Statics::NewProp_Item_MetaData), Z_Construct_UClass_UMGameTables_Statics::NewProp_Item_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGameTables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameTables_Statics::NewProp_Item,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGameTables_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGameTables>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGameTables_Statics::ClassParams = {
		&UMGameTables::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMGameTables_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMGameTables_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameTables_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGameTables_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameTables_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMGameTables()
	{
		if (!Z_Registration_Info_UClass_UMGameTables.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGameTables.OuterSingleton, Z_Construct_UClass_UMGameTables_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGameTables.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UMGameTables>()
	{
		return UMGameTables::StaticClass();
	}
	UMGameTables::UMGameTables(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGameTables);
	UMGameTables::~UMGameTables() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTables_MGameTables_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTables_MGameTables_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMGameTables, UMGameTables::StaticClass, TEXT("UMGameTables"), &Z_Registration_Info_UClass_UMGameTables, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGameTables), 244017780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTables_MGameTables_h_1047869016(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTables_MGameTables_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTables_MGameTables_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
