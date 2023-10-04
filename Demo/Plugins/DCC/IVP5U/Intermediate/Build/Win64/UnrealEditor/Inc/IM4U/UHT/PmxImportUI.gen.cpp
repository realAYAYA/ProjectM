// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IM4U/Classes/PmxImportUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePmxImportUI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IM4U_API UClass* Z_Construct_UClass_UPmxImportUI();
	IM4U_API UClass* Z_Construct_UClass_UPmxImportUI_NoRegister();
	IM4U_API UEnum* Z_Construct_UEnum_IM4U_EPMXImportType();
	UPackage* Z_Construct_UPackage__Script_IM4U();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPMXImportType;
	static UEnum* EPMXImportType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPMXImportType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPMXImportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IM4U_EPMXImportType, (UObject*)Z_Construct_UPackage__Script_IM4U(), TEXT("EPMXImportType"));
		}
		return Z_Registration_Info_UEnum_EPMXImportType.OuterSingleton;
	}
	template<> IM4U_API UEnum* StaticEnum<EPMXImportType>()
	{
		return EPMXImportType_StaticEnum();
	}
	struct Z_Construct_UEnum_IM4U_EPMXImportType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IM4U_EPMXImportType_Statics::Enumerators[] = {
		{ "PMXIT_StaticMesh", (int64)PMXIT_StaticMesh },
		{ "PMXIT_SkeletalMesh", (int64)PMXIT_SkeletalMesh },
		{ "PMXIT_Animation", (int64)PMXIT_Animation },
		{ "PMXIT_MAX", (int64)PMXIT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IM4U_EPMXImportType_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Import mesh type */" },
#endif
		{ "ModuleRelativePath", "Classes/PmxImportUI.h" },
		{ "PMXIT_Animation.Comment", "/** Select Animation if you'd like to import only animation. */" },
		{ "PMXIT_Animation.DisplayName", "Animation" },
		{ "PMXIT_Animation.Name", "PMXIT_Animation" },
		{ "PMXIT_Animation.ToolTip", "Select Animation if you'd like to import only animation." },
		{ "PMXIT_MAX.Name", "PMXIT_MAX" },
		{ "PMXIT_SkeletalMesh.Comment", "/** Select Skeletal Mesh if you'd like to import skeletal mesh. */" },
		{ "PMXIT_SkeletalMesh.DisplayName", "Skeletal Mesh" },
		{ "PMXIT_SkeletalMesh.Name", "PMXIT_SkeletalMesh" },
		{ "PMXIT_SkeletalMesh.ToolTip", "Select Skeletal Mesh if you'd like to import skeletal mesh." },
		{ "PMXIT_StaticMesh.Comment", "/** Select Static Mesh if you'd like to import static mesh. */" },
		{ "PMXIT_StaticMesh.DisplayName", "Static Mesh" },
		{ "PMXIT_StaticMesh.Name", "PMXIT_StaticMesh" },
		{ "PMXIT_StaticMesh.ToolTip", "Select Static Mesh if you'd like to import static mesh." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Import mesh type" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IM4U_EPMXImportType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IM4U,
		nullptr,
		"EPMXImportType",
		"EPMXImportType",
		Z_Construct_UEnum_IM4U_EPMXImportType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IM4U_EPMXImportType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IM4U_EPMXImportType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IM4U_EPMXImportType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_IM4U_EPMXImportType()
	{
		if (!Z_Registration_Info_UEnum_EPMXImportType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPMXImportType.InnerSingleton, Z_Construct_UEnum_IM4U_EPMXImportType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPMXImportType.InnerSingleton;
	}
	void UPmxImportUI::StaticRegisterNativesUPmxImportUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPmxImportUI);
	UClass* Z_Construct_UClass_UPmxImportUI_NoRegister()
	{
		return UPmxImportUI::StaticClass();
	}
	struct Z_Construct_UClass_UPmxImportUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreatePhysicsAsset_MetaData[];
#endif
		static void NewProp_bCreatePhysicsAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatePhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMaterialInstMode_MetaData[];
#endif
		static void NewProp_bCreateMaterialInstMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMaterialInstMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUnlitMaterials_MetaData[];
#endif
		static void NewProp_bUnlitMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnlitMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPmxImportUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IM4U,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPmxImportUI_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPmxImportUI_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "FTransform" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PmxImportUI.h" },
		{ "ModuleRelativePath", "Classes/PmxImportUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bCreatePhysicsAsset_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If checked, create new PhysicsAsset if it doesn't have it */" },
#endif
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/PmxImportUI.h" },
		{ "OBJRestrict", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If checked, create new PhysicsAsset if it doesn't have it" },
#endif
	};
#endif
	void Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bCreatePhysicsAsset_SetBit(void* Obj)
	{
		((UPmxImportUI*)Obj)->bCreatePhysicsAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bCreatePhysicsAsset = { "bCreatePhysicsAsset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPmxImportUI), &Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bCreatePhysicsAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bCreatePhysicsAsset_MetaData), Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bCreatePhysicsAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bCreateMaterialInstMode_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/PmxImportUI.h" },
		{ "OBJRestrict", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, Create Material Inst and Duplicate Mat-Assets from IM4U Base Mat." },
#endif
	};
#endif
	void Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bCreateMaterialInstMode_SetBit(void* Obj)
	{
		((UPmxImportUI*)Obj)->bCreateMaterialInstMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bCreateMaterialInstMode = { "bCreateMaterialInstMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPmxImportUI), &Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bCreateMaterialInstMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bCreateMaterialInstMode_MetaData), Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bCreateMaterialInstMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bUnlitMaterials_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/PmxImportUI.h" },
		{ "OBJRestrict", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If CreateMaterialInstMode enabled, effective. Create Mat Shading Model is Unlit." },
#endif
	};
#endif
	void Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bUnlitMaterials_SetBit(void* Obj)
	{
		((UPmxImportUI*)Obj)->bUnlitMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bUnlitMaterials = { "bUnlitMaterials", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPmxImportUI), &Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bUnlitMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bUnlitMaterials_MetaData), Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bUnlitMaterials_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPmxImportUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bCreatePhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bCreateMaterialInstMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPmxImportUI_Statics::NewProp_bUnlitMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPmxImportUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPmxImportUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPmxImportUI_Statics::ClassParams = {
		&UPmxImportUI::StaticClass,
		"EditorUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPmxImportUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPmxImportUI_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPmxImportUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UPmxImportUI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPmxImportUI_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPmxImportUI()
	{
		if (!Z_Registration_Info_UClass_UPmxImportUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPmxImportUI.OuterSingleton, Z_Construct_UClass_UPmxImportUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPmxImportUI.OuterSingleton;
	}
	template<> IM4U_API UClass* StaticClass<UPmxImportUI>()
	{
		return UPmxImportUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPmxImportUI);
	UPmxImportUI::~UPmxImportUI() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_Statics::EnumInfo[] = {
		{ EPMXImportType_StaticEnum, TEXT("EPMXImportType"), &Z_Registration_Info_UEnum_EPMXImportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1862775883U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPmxImportUI, UPmxImportUI::StaticClass, TEXT("UPmxImportUI"), &Z_Registration_Info_UClass_UPmxImportUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPmxImportUI), 1567703763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_2108692696(TEXT("/Script/IM4U"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
