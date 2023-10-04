// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IM4U/Classes/MMDStaticMeshImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMDStaticMeshImportData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	IM4U_API UClass* Z_Construct_UClass_UMMDMeshImportData();
	IM4U_API UClass* Z_Construct_UClass_UMMDStaticMeshImportData();
	IM4U_API UClass* Z_Construct_UClass_UMMDStaticMeshImportData_NoRegister();
	IM4U_API UEnum* Z_Construct_UEnum_IM4U_EVertexColorImportOptionMMD();
	UPackage* Z_Construct_UPackage__Script_IM4U();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVertexColorImportOptionMMD;
	static UEnum* EVertexColorImportOptionMMD_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVertexColorImportOptionMMD.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVertexColorImportOptionMMD.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IM4U_EVertexColorImportOptionMMD, (UObject*)Z_Construct_UPackage__Script_IM4U(), TEXT("EVertexColorImportOptionMMD"));
		}
		return Z_Registration_Info_UEnum_EVertexColorImportOptionMMD.OuterSingleton;
	}
	template<> IM4U_API UEnum* StaticEnum<EVertexColorImportOptionMMD::Type>()
	{
		return EVertexColorImportOptionMMD_StaticEnum();
	}
	struct Z_Construct_UEnum_IM4U_EVertexColorImportOptionMMD_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IM4U_EVertexColorImportOptionMMD_Statics::Enumerators[] = {
		{ "EVertexColorImportOptionMMD::Replace", (int64)EVertexColorImportOptionMMD::Replace },
		{ "EVertexColorImportOptionMMD::Ignore", (int64)EVertexColorImportOptionMMD::Ignore },
		{ "EVertexColorImportOptionMMD::Override", (int64)EVertexColorImportOptionMMD::Override },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IM4U_EVertexColorImportOptionMMD_Statics::Enum_MetaDataParams[] = {
		{ "Ignore.Comment", "/** Ignore vertex colors from the MMD file, and keep the existing mesh vertex colors */" },
		{ "Ignore.Name", "EVertexColorImportOptionMMD::Ignore" },
		{ "Ignore.ToolTip", "Ignore vertex colors from the MMD file, and keep the existing mesh vertex colors" },
		{ "ModuleRelativePath", "Classes/MMDStaticMeshImportData.h" },
		{ "Override.Comment", "/** Override all vertex colors with the specified color */" },
		{ "Override.Name", "EVertexColorImportOptionMMD::Override" },
		{ "Override.ToolTip", "Override all vertex colors with the specified color" },
		{ "Replace.Comment", "/** Import the static mesh using the vertex colors from the MMD file */" },
		{ "Replace.Name", "EVertexColorImportOptionMMD::Replace" },
		{ "Replace.ToolTip", "Import the static mesh using the vertex colors from the MMD file" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IM4U_EVertexColorImportOptionMMD_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IM4U,
		nullptr,
		"EVertexColorImportOptionMMD",
		"EVertexColorImportOptionMMD::Type",
		Z_Construct_UEnum_IM4U_EVertexColorImportOptionMMD_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IM4U_EVertexColorImportOptionMMD_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IM4U_EVertexColorImportOptionMMD_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IM4U_EVertexColorImportOptionMMD_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_IM4U_EVertexColorImportOptionMMD()
	{
		if (!Z_Registration_Info_UEnum_EVertexColorImportOptionMMD.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVertexColorImportOptionMMD.InnerSingleton, Z_Construct_UEnum_IM4U_EVertexColorImportOptionMMD_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVertexColorImportOptionMMD.InnerSingleton;
	}
	void UMMDStaticMeshImportData::StaticRegisterNativesUMMDStaticMeshImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMDStaticMeshImportData);
	UClass* Z_Construct_UClass_UMMDStaticMeshImportData_NoRegister()
	{
		return UMMDStaticMeshImportData::StaticClass();
	}
	struct Z_Construct_UClass_UMMDStaticMeshImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshLODGroup_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StaticMeshLODGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorImportOption_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VertexColorImportOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexOverrideColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexOverrideColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[];
#endif
		static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOneConvexHullPerUCX_MetaData[];
#endif
		static void NewProp_bOneConvexHullPerUCX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneConvexHullPerUCX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoGenerateCollision_MetaData[];
#endif
		static void NewProp_bAutoGenerateCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMDStaticMeshImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMMDMeshImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_IM4U,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDStaticMeshImportData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDStaticMeshImportData_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Options" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MMDStaticMeshImportData.h" },
		{ "ModuleRelativePath", "Classes/MMDStaticMeshImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** For static meshes, enabling this option will combine all meshes in the MMD into a single monolithic mesh in Unreal */" },
#endif
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/MMDStaticMeshImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For static meshes, enabling this option will combine all meshes in the MMD into a single monolithic mesh in Unreal" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup = { "StaticMeshLODGroup", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMMDStaticMeshImportData, StaticMeshLODGroup), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup_MetaData), Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specify how vertex colors should be imported */" },
#endif
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/MMDStaticMeshImportData.h" },
		{ "OBJRestrict", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specify how vertex colors should be imported" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_VertexColorImportOption = { "VertexColorImportOption", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMMDStaticMeshImportData, VertexColorImportOption), Z_Construct_UEnum_IM4U_EVertexColorImportOptionMMD, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData), Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData) }; // 2596860469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specify override color in the case that VertexColorImportOption is set to Override */" },
#endif
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/MMDStaticMeshImportData.h" },
		{ "OBJRestrict", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specify override color in the case that VertexColorImportOption is set to Override" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_VertexOverrideColor = { "VertexOverrideColor", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMMDStaticMeshImportData, VertexOverrideColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData), Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Disabling this option will keep degenerate triangles found.  In general you should leave this option on. */" },
#endif
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/MMDStaticMeshImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disabling this option will keep degenerate triangles found.  In general you should leave this option on." },
#endif
	};
#endif
	void Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
	{
		((UMMDStaticMeshImportData*)Obj)->bRemoveDegenerates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMMDStaticMeshImportData), &Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_MetaData), Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/MMDStaticMeshImportData.h" },
	};
#endif
	void Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((UMMDStaticMeshImportData*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMMDStaticMeshImportData), &Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_MetaData), Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If checked, one convex hull per UCX_ prefixed collision mesh will be generated instead of decomposing into multiple hulls */" },
#endif
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/MMDStaticMeshImportData.h" },
		{ "OBJRestrict", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If checked, one convex hull per UCX_ prefixed collision mesh will be generated instead of decomposing into multiple hulls" },
#endif
	};
#endif
	void Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_SetBit(void* Obj)
	{
		((UMMDStaticMeshImportData*)Obj)->bOneConvexHullPerUCX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX = { "bOneConvexHullPerUCX", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMMDStaticMeshImportData), &Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_MetaData), Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If checked, collision will automatically be generated (ignored if custom collision is imported or used). */" },
#endif
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/MMDStaticMeshImportData.h" },
		{ "OBJRestrict", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If checked, collision will automatically be generated (ignored if custom collision is imported or used)." },
#endif
	};
#endif
	void Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_SetBit(void* Obj)
	{
		((UMMDStaticMeshImportData*)Obj)->bAutoGenerateCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision = { "bAutoGenerateCollision", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMMDStaticMeshImportData), &Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_MetaData), Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMDStaticMeshImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_VertexColorImportOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_VertexOverrideColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bRemoveDegenerates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMDStaticMeshImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMDStaticMeshImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMDStaticMeshImportData_Statics::ClassParams = {
		&UMMDStaticMeshImportData::StaticClass,
		"EditorUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMMDStaticMeshImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMDStaticMeshImportData_Statics::PropPointers),
		0,
		0x400810A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDStaticMeshImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMDStaticMeshImportData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDStaticMeshImportData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMMDStaticMeshImportData()
	{
		if (!Z_Registration_Info_UClass_UMMDStaticMeshImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMDStaticMeshImportData.OuterSingleton, Z_Construct_UClass_UMMDStaticMeshImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMMDStaticMeshImportData.OuterSingleton;
	}
	template<> IM4U_API UClass* StaticClass<UMMDStaticMeshImportData>()
	{
		return UMMDStaticMeshImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMDStaticMeshImportData);
	UMMDStaticMeshImportData::~UMMDStaticMeshImportData() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_Statics::EnumInfo[] = {
		{ EVertexColorImportOptionMMD_StaticEnum, TEXT("EVertexColorImportOptionMMD"), &Z_Registration_Info_UEnum_EVertexColorImportOptionMMD, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2596860469U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMMDStaticMeshImportData, UMMDStaticMeshImportData::StaticClass, TEXT("UMMDStaticMeshImportData"), &Z_Registration_Info_UClass_UMMDStaticMeshImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMDStaticMeshImportData), 2541933278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_3945186098(TEXT("/Script/IM4U"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
