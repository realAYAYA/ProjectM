// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/Characters/MCharacterDataAsset.h"
#include "Public/MGameTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCharacterDataAsset() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UMCharacterDataAsset();
	DEMO_API UClass* Z_Construct_UClass_UMCharacterDataAsset_NoRegister();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void UMCharacterDataAsset::StaticRegisterNativesUMCharacterDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMCharacterDataAsset);
	UClass* Z_Construct_UClass_UMCharacterDataAsset_NoRegister()
	{
		return UMCharacterDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMCharacterDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMCharacterDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCharacterDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCharacterDataAsset_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Characters/MCharacterDataAsset.h" },
		{ "ModuleRelativePath", "Private/Characters/MCharacterDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCharacterDataAsset_Statics::NewProp_CharacterData_MetaData[] = {
		{ "Category", "MCharacterDataAsset" },
		{ "ModuleRelativePath", "Private/Characters/MCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMCharacterDataAsset_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCharacterDataAsset, CharacterData), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCharacterDataAsset_Statics::NewProp_CharacterData_MetaData), Z_Construct_UClass_UMCharacterDataAsset_Statics::NewProp_CharacterData_MetaData) }; // 3385385191
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMCharacterDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCharacterDataAsset_Statics::NewProp_CharacterData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMCharacterDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMCharacterDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMCharacterDataAsset_Statics::ClassParams = {
		&UMCharacterDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMCharacterDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMCharacterDataAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCharacterDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMCharacterDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCharacterDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMCharacterDataAsset()
	{
		if (!Z_Registration_Info_UClass_UMCharacterDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMCharacterDataAsset.OuterSingleton, Z_Construct_UClass_UMCharacterDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMCharacterDataAsset.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UMCharacterDataAsset>()
	{
		return UMCharacterDataAsset::StaticClass();
	}
	UMCharacterDataAsset::UMCharacterDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMCharacterDataAsset);
	UMCharacterDataAsset::~UMCharacterDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_MCharacterDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_MCharacterDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMCharacterDataAsset, UMCharacterDataAsset::StaticClass, TEXT("UMCharacterDataAsset"), &Z_Registration_Info_UClass_UMCharacterDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMCharacterDataAsset), 2325113201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_MCharacterDataAsset_h_4131527039(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_MCharacterDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_MCharacterDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
