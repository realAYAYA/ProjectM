// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameTables/Public/GameTables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameTables() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMETABLES_API UClass* Z_Construct_UClass_UGameTables();
	GAMETABLES_API UClass* Z_Construct_UClass_UGameTables_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameTables();
// End Cross Module References
	void UGameTables::StaticRegisterNativesUGameTables()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameTables);
	UClass* Z_Construct_UClass_UGameTables_NoRegister()
	{
		return UGameTables::StaticClass();
	}
	struct Z_Construct_UClass_UGameTables_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameTables_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameTables,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameTables_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameTables_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * \xe6\xb8\xb8\xe6\x88\x8f\xe8\xa1\xa8\xe6\xa0\xbc\xe9\x85\x8d\xe7\xbd\xae\n */" },
#endif
		{ "IncludePath", "GameTables.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameTables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xe6\xb8\xb8\xe6\x88\x8f\xe8\xa1\xa8\xe6\xa0\xbc\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameTables_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameTables>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameTables_Statics::ClassParams = {
		&UGameTables::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameTables_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameTables_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGameTables()
	{
		if (!Z_Registration_Info_UClass_UGameTables.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameTables.OuterSingleton, Z_Construct_UClass_UGameTables_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameTables.OuterSingleton;
	}
	template<> GAMETABLES_API UClass* StaticClass<UGameTables>()
	{
		return UGameTables::StaticClass();
	}
	UGameTables::UGameTables(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameTables);
	UGameTables::~UGameTables() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_GameTables_Source_GameTables_Public_GameTables_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_GameTables_Source_GameTables_Public_GameTables_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameTables, UGameTables::StaticClass, TEXT("UGameTables"), &Z_Registration_Info_UClass_UGameTables, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameTables), 3146739837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_GameTables_Source_GameTables_Public_GameTables_h_4046034023(TEXT("/Script/GameTables"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_GameTables_Source_GameTables_Public_GameTables_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_GameTables_Source_GameTables_Public_GameTables_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
