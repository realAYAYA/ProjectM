// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IM4U/Classes/MMDMeshImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMDMeshImportData() {}
// Cross Module References
	IM4U_API UClass* Z_Construct_UClass_UMMDMeshImportData();
	IM4U_API UClass* Z_Construct_UClass_UMMDMeshImportData_NoRegister();
	IM4U_API UEnum* Z_Construct_UEnum_IM4U_EMMDNormalImportMethod();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAssetImportData();
	UPackage* Z_Construct_UPackage__Script_IM4U();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMMDNormalImportMethod;
	static UEnum* EMMDNormalImportMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMMDNormalImportMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMMDNormalImportMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IM4U_EMMDNormalImportMethod, (UObject*)Z_Construct_UPackage__Script_IM4U(), TEXT("EMMDNormalImportMethod"));
		}
		return Z_Registration_Info_UEnum_EMMDNormalImportMethod.OuterSingleton;
	}
	template<> IM4U_API UEnum* StaticEnum<EMMDNormalImportMethod>()
	{
		return EMMDNormalImportMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_IM4U_EMMDNormalImportMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IM4U_EMMDNormalImportMethod_Statics::Enumerators[] = {
		{ "MMDNIM_ComputeNormals", (int64)MMDNIM_ComputeNormals },
		{ "MMDNIM_ImportNormals", (int64)MMDNIM_ImportNormals },
		{ "MMDNIM_ImportNormalsAndTangents", (int64)MMDNIM_ImportNormalsAndTangents },
		{ "MMDNIM_MAX", (int64)MMDNIM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IM4U_EMMDNormalImportMethod_Statics::Enum_MetaDataParams[] = {
		{ "MMDNIM_ComputeNormals.DisplayName", "Compute Normals" },
		{ "MMDNIM_ComputeNormals.Name", "MMDNIM_ComputeNormals" },
		{ "MMDNIM_ImportNormals.DisplayName", "Import Normals" },
		{ "MMDNIM_ImportNormals.Name", "MMDNIM_ImportNormals" },
		{ "MMDNIM_ImportNormalsAndTangents.DisplayName", "Import Normals and Tangents" },
		{ "MMDNIM_ImportNormalsAndTangents.Name", "MMDNIM_ImportNormalsAndTangents" },
		{ "MMDNIM_MAX.Name", "MMDNIM_MAX" },
		{ "ModuleRelativePath", "Classes/MMDMeshImportData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IM4U_EMMDNormalImportMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IM4U,
		nullptr,
		"EMMDNormalImportMethod",
		"EMMDNormalImportMethod",
		Z_Construct_UEnum_IM4U_EMMDNormalImportMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IM4U_EMMDNormalImportMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IM4U_EMMDNormalImportMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IM4U_EMMDNormalImportMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_IM4U_EMMDNormalImportMethod()
	{
		if (!Z_Registration_Info_UEnum_EMMDNormalImportMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMMDNormalImportMethod.InnerSingleton, Z_Construct_UEnum_IM4U_EMMDNormalImportMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMMDNormalImportMethod.InnerSingleton;
	}
	void UMMDMeshImportData::StaticRegisterNativesUMMDMeshImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMDMeshImportData);
	UClass* Z_Construct_UClass_UMMDMeshImportData_NoRegister()
	{
		return UMMDMeshImportData::StaticClass();
	}
	struct Z_Construct_UClass_UMMDMeshImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMeshLODs_MetaData[];
#endif
		static void NewProp_bImportMeshLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMeshLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalImportMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NormalImportMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMDMeshImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_IM4U,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDMeshImportData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDMeshImportData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Import data and options used when importing any mesh from MMD\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "MMDMeshImportData.h" },
		{ "ModuleRelativePath", "Classes/MMDMeshImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Import data and options used when importing any mesh from MMD" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDMeshImportData_Statics::NewProp_bImportMeshLODs_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/MMDMeshImportData.h" },
		{ "OBJRestrict", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, creates LOD models for Unreal meshes from LODs in the import file; If not enabled, only the base mesh from the LOD group is imported" },
#endif
	};
#endif
	void Z_Construct_UClass_UMMDMeshImportData_Statics::NewProp_bImportMeshLODs_SetBit(void* Obj)
	{
		((UMMDMeshImportData*)Obj)->bImportMeshLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMDMeshImportData_Statics::NewProp_bImportMeshLODs = { "bImportMeshLODs", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMMDMeshImportData), &Z_Construct_UClass_UMMDMeshImportData_Statics::NewProp_bImportMeshLODs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDMeshImportData_Statics::NewProp_bImportMeshLODs_MetaData), Z_Construct_UClass_UMMDMeshImportData_Statics::NewProp_bImportMeshLODs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDMeshImportData_Statics::NewProp_NormalImportMethod_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enabling this option will read the tangents(tangent,binormal,normal) from MMD file instead of generating them automatically. */" },
#endif
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/MMDMeshImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enabling this option will read the tangents(tangent,binormal,normal) from MMD file instead of generating them automatically." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMMDMeshImportData_Statics::NewProp_NormalImportMethod = { "NormalImportMethod", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMMDMeshImportData, NormalImportMethod), Z_Construct_UEnum_IM4U_EMMDNormalImportMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDMeshImportData_Statics::NewProp_NormalImportMethod_MetaData), Z_Construct_UClass_UMMDMeshImportData_Statics::NewProp_NormalImportMethod_MetaData) }; // 3769750521
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMDMeshImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDMeshImportData_Statics::NewProp_bImportMeshLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDMeshImportData_Statics::NewProp_NormalImportMethod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMDMeshImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMDMeshImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMDMeshImportData_Statics::ClassParams = {
		&UMMDMeshImportData::StaticClass,
		"EditorUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMMDMeshImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMDMeshImportData_Statics::PropPointers),
		0,
		0x400010A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDMeshImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMDMeshImportData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDMeshImportData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMMDMeshImportData()
	{
		if (!Z_Registration_Info_UClass_UMMDMeshImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMDMeshImportData.OuterSingleton, Z_Construct_UClass_UMMDMeshImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMMDMeshImportData.OuterSingleton;
	}
	template<> IM4U_API UClass* StaticClass<UMMDMeshImportData>()
	{
		return UMMDMeshImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMDMeshImportData);
	UMMDMeshImportData::~UMMDMeshImportData() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_Statics::EnumInfo[] = {
		{ EMMDNormalImportMethod_StaticEnum, TEXT("EMMDNormalImportMethod"), &Z_Registration_Info_UEnum_EMMDNormalImportMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3769750521U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMMDMeshImportData, UMMDMeshImportData::StaticClass, TEXT("UMMDMeshImportData"), &Z_Registration_Info_UClass_UMMDMeshImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMDMeshImportData), 798814601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_2676429108(TEXT("/Script/IM4U"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
