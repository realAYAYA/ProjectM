// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IM4U/Classes/MMDSkeletalMeshImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMDSkeletalMeshImportData() {}
// Cross Module References
	IM4U_API UClass* Z_Construct_UClass_UMMDMeshImportData();
	IM4U_API UClass* Z_Construct_UClass_UMMDSkeletalMeshImportData();
	IM4U_API UClass* Z_Construct_UClass_UMMDSkeletalMeshImportData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IM4U();
// End Cross Module References
	void UMMDSkeletalMeshImportData::StaticRegisterNativesUMMDSkeletalMeshImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMDSkeletalMeshImportData);
	UClass* Z_Construct_UClass_UMMDSkeletalMeshImportData_NoRegister()
	{
		return UMMDSkeletalMeshImportData::StaticClass();
	}
	struct Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateSkeletonReferencePose_MetaData[];
#endif
		static void NewProp_bUpdateSkeletonReferencePose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSkeletonReferencePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseT0AsRefPose_MetaData[];
#endif
		static void NewProp_bUseT0AsRefPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseT0AsRefPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveSmoothingGroups_MetaData[];
#endif
		static void NewProp_bPreserveSmoothingGroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveSmoothingGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMeshesInBoneHierarchy_MetaData[];
#endif
		static void NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMeshesInBoneHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMorphTargets_MetaData[];
#endif
		static void NewProp_bImportMorphTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMorphTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepOverlappingVertices_MetaData[];
#endif
		static void NewProp_bKeepOverlappingVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepOverlappingVertices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMMDMeshImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_IM4U,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Import data and options used when importing a static mesh from MMD\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "MMDSkeletalMeshImportData.h" },
		{ "ModuleRelativePath", "Classes/MMDSkeletalMeshImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Import data and options used when importing a static mesh from MMD" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/MMDSkeletalMeshImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, update the Skeleton (of the mesh being imported)'s reference pose." },
#endif
	};
#endif
	void Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_SetBit(void* Obj)
	{
		((UMMDSkeletalMeshImportData*)Obj)->bUpdateSkeletonReferencePose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose = { "bUpdateSkeletonReferencePose", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMMDSkeletalMeshImportData), &Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData), Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable this option to use frame 0 as reference pose */" },
#endif
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/MMDSkeletalMeshImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable this option to use frame 0 as reference pose" },
#endif
	};
#endif
	void Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_SetBit(void* Obj)
	{
		((UMMDSkeletalMeshImportData*)Obj)->bUseT0AsRefPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose = { "bUseT0AsRefPose", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMMDSkeletalMeshImportData), &Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_MetaData), Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If checked, triangles with non-matching smoothing groups will be physically split. */" },
#endif
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/MMDSkeletalMeshImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If checked, triangles with non-matching smoothing groups will be physically split." },
#endif
	};
#endif
	void Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_SetBit(void* Obj)
	{
		((UMMDSkeletalMeshImportData*)Obj)->bPreserveSmoothingGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups = { "bPreserveSmoothingGroups", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMMDSkeletalMeshImportData), &Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_MetaData), Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If checked, meshes nested in bone hierarchies will be imported instead of being converted to bones. */" },
#endif
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/MMDSkeletalMeshImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If checked, meshes nested in bone hierarchies will be imported instead of being converted to bones." },
#endif
	};
#endif
	void Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj)
	{
		((UMMDSkeletalMeshImportData*)Obj)->bImportMeshesInBoneHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy = { "bImportMeshesInBoneHierarchy", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMMDSkeletalMeshImportData), &Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData), Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/MMDSkeletalMeshImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, creates Unreal morph objects for the imported meshes" },
#endif
	};
#endif
	void Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_SetBit(void* Obj)
	{
		((UMMDSkeletalMeshImportData*)Obj)->bImportMorphTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets = { "bImportMorphTargets", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMMDSkeletalMeshImportData), &Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_MetaData), Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bKeepOverlappingVertices_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If checked, do not filter same vertices. Keep all vertices even if they have exact same properties*/" },
#endif
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/MMDSkeletalMeshImportData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If checked, do not filter same vertices. Keep all vertices even if they have exact same properties" },
#endif
	};
#endif
	void Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bKeepOverlappingVertices_SetBit(void* Obj)
	{
		((UMMDSkeletalMeshImportData*)Obj)->bKeepOverlappingVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bKeepOverlappingVertices = { "bKeepOverlappingVertices", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMMDSkeletalMeshImportData), &Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bKeepOverlappingVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bKeepOverlappingVertices_MetaData), Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bKeepOverlappingVertices_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::NewProp_bKeepOverlappingVertices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMDSkeletalMeshImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::ClassParams = {
		&UMMDSkeletalMeshImportData::StaticClass,
		"EditorUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::PropPointers),
		0,
		0x400010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMMDSkeletalMeshImportData()
	{
		if (!Z_Registration_Info_UClass_UMMDSkeletalMeshImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMDSkeletalMeshImportData.OuterSingleton, Z_Construct_UClass_UMMDSkeletalMeshImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMMDSkeletalMeshImportData.OuterSingleton;
	}
	template<> IM4U_API UClass* StaticClass<UMMDSkeletalMeshImportData>()
	{
		return UMMDSkeletalMeshImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMDSkeletalMeshImportData);
	UMMDSkeletalMeshImportData::~UMMDSkeletalMeshImportData() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDSkeletalMeshImportData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDSkeletalMeshImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMMDSkeletalMeshImportData, UMMDSkeletalMeshImportData::StaticClass, TEXT("UMMDSkeletalMeshImportData"), &Z_Registration_Info_UClass_UMMDSkeletalMeshImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMDSkeletalMeshImportData), 4183838925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDSkeletalMeshImportData_h_1938848339(TEXT("/Script/IM4U"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDSkeletalMeshImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDSkeletalMeshImportData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
