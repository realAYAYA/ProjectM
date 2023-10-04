// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IM4U/Classes/VmdImportUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVmdImportUI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	IM4U_API UClass* Z_Construct_UClass_UVmdImportUI();
	IM4U_API UClass* Z_Construct_UClass_UVmdImportUI_NoRegister();
	IM4U_API UEnum* Z_Construct_UEnum_IM4U_EVMDImportType();
	UPackage* Z_Construct_UPackage__Script_IM4U();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVMDImportType;
	static UEnum* EVMDImportType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVMDImportType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVMDImportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IM4U_EVMDImportType, (UObject*)Z_Construct_UPackage__Script_IM4U(), TEXT("EVMDImportType"));
		}
		return Z_Registration_Info_UEnum_EVMDImportType.OuterSingleton;
	}
	template<> IM4U_API UEnum* StaticEnum<EVMDImportType>()
	{
		return EVMDImportType_StaticEnum();
	}
	struct Z_Construct_UEnum_IM4U_EVMDImportType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IM4U_EVMDImportType_Statics::Enumerators[] = {
		{ "VMDIT_Animation", (int64)VMDIT_Animation },
		{ "VMDIT_MAX", (int64)VMDIT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IM4U_EVMDImportType_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Import mesh type */" },
#endif
		{ "ModuleRelativePath", "Classes/VmdImportUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Import mesh type" },
#endif
		{ "VMDIT_Animation.Comment", "/** Select Animation if you'd like to import only animation. */" },
		{ "VMDIT_Animation.DisplayName", "Animation" },
		{ "VMDIT_Animation.Name", "VMDIT_Animation" },
		{ "VMDIT_Animation.ToolTip", "Select Animation if you'd like to import only animation." },
		{ "VMDIT_MAX.Name", "VMDIT_MAX" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IM4U_EVMDImportType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IM4U,
		nullptr,
		"EVMDImportType",
		"EVMDImportType",
		Z_Construct_UEnum_IM4U_EVMDImportType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IM4U_EVMDImportType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IM4U_EVMDImportType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IM4U_EVMDImportType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_IM4U_EVMDImportType()
	{
		if (!Z_Registration_Info_UEnum_EVMDImportType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVMDImportType.InnerSingleton, Z_Construct_UEnum_IM4U_EVMDImportType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVMDImportType.InnerSingleton;
	}
	void UVmdImportUI::StaticRegisterNativesUVmdImportUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVmdImportUI);
	UClass* Z_Construct_UClass_UVmdImportUI_NoRegister()
	{
		return UVmdImportUI::StaticClass();
	}
	struct Z_Construct_UClass_UVmdImportUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletonMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequenceAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MMD2UE4NameTableRow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MMD2UE4NameTableRow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVmdImportUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IM4U,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVmdImportUI_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVmdImportUI_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "FTransform" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VmdImportUI.h" },
		{ "ModuleRelativePath", "Classes/VmdImportUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVmdImportUI_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Skeleton to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing and animation this MUST be specified to import the asset. */" },
#endif
		{ "ModuleRelativePath", "Classes/VmdImportUI.h" },
		{ "OBJRestrict", "false" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skeleton to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing and animation this MUST be specified to import the asset." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVmdImportUI_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVmdImportUI, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVmdImportUI_Statics::NewProp_Skeleton_MetaData), Z_Construct_UClass_UVmdImportUI_Statics::NewProp_Skeleton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVmdImportUI_Statics::NewProp_SkeletonMesh_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** SkeletonMesh to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing and animation this MUST be specified to import the asset. */" },
#endif
		{ "ModuleRelativePath", "Classes/VmdImportUI.h" },
		{ "OBJRestrict", "false" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SkeletonMesh to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing and animation this MUST be specified to import the asset." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVmdImportUI_Statics::NewProp_SkeletonMesh = { "SkeletonMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVmdImportUI, SkeletonMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVmdImportUI_Statics::NewProp_SkeletonMesh_MetaData), Z_Construct_UClass_UVmdImportUI_Statics::NewProp_SkeletonMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVmdImportUI_Statics::NewProp_AnimSequenceAsset_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Skeleton to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing and animation this MUST be specified to import the asset. */" },
#endif
		{ "ModuleRelativePath", "Classes/VmdImportUI.h" },
		{ "OBJRestrict", "false" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skeleton to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing and animation this MUST be specified to import the asset." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVmdImportUI_Statics::NewProp_AnimSequenceAsset = { "AnimSequenceAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVmdImportUI, AnimSequenceAsset), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVmdImportUI_Statics::NewProp_AnimSequenceAsset_MetaData), Z_Construct_UClass_UVmdImportUI_Statics::NewProp_AnimSequenceAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVmdImportUI_Statics::NewProp_MMD2UE4NameTableRow_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MMD2UE4NameTableRow to use for imported asset. When importing a Anim, leaving this as \"None\" will create a new skeleton. When importing and animation this MUST be specified to import the asset. */" },
#endif
		{ "ModuleRelativePath", "Classes/VmdImportUI.h" },
		{ "OBJRestrict", "false" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MMD2UE4NameTableRow to use for imported asset. When importing a Anim, leaving this as \"None\" will create a new skeleton. When importing and animation this MUST be specified to import the asset." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVmdImportUI_Statics::NewProp_MMD2UE4NameTableRow = { "MMD2UE4NameTableRow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVmdImportUI, MMD2UE4NameTableRow), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVmdImportUI_Statics::NewProp_MMD2UE4NameTableRow_MetaData), Z_Construct_UClass_UVmdImportUI_Statics::NewProp_MMD2UE4NameTableRow_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVmdImportUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVmdImportUI_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVmdImportUI_Statics::NewProp_SkeletonMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVmdImportUI_Statics::NewProp_AnimSequenceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVmdImportUI_Statics::NewProp_MMD2UE4NameTableRow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVmdImportUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVmdImportUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVmdImportUI_Statics::ClassParams = {
		&UVmdImportUI::StaticClass,
		"EditorUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVmdImportUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVmdImportUI_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVmdImportUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UVmdImportUI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVmdImportUI_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVmdImportUI()
	{
		if (!Z_Registration_Info_UClass_UVmdImportUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVmdImportUI.OuterSingleton, Z_Construct_UClass_UVmdImportUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVmdImportUI.OuterSingleton;
	}
	template<> IM4U_API UClass* StaticClass<UVmdImportUI>()
	{
		return UVmdImportUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVmdImportUI);
	UVmdImportUI::~UVmdImportUI() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_VmdImportUI_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_VmdImportUI_h_Statics::EnumInfo[] = {
		{ EVMDImportType_StaticEnum, TEXT("EVMDImportType"), &Z_Registration_Info_UEnum_EVMDImportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 971759718U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_VmdImportUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVmdImportUI, UVmdImportUI::StaticClass, TEXT("UVmdImportUI"), &Z_Registration_Info_UClass_UVmdImportUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVmdImportUI), 3433544241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_VmdImportUI_h_500271562(TEXT("/Script/IM4U"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_VmdImportUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_VmdImportUI_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_VmdImportUI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_VmdImportUI_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
