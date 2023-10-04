// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MMDMeshImportData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IM4U_MMDMeshImportData_generated_h
#error "MMDMeshImportData.generated.h already included, missing '#pragma once' in MMDMeshImportData.h"
#endif
#define IM4U_MMDMeshImportData_generated_h

#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_SPARSE_DATA
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_RPC_WRAPPERS
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_ACCESSORS
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMMDMeshImportData(); \
	friend struct Z_Construct_UClass_UMMDMeshImportData_Statics; \
public: \
	DECLARE_CLASS(UMMDMeshImportData, UFbxAssetImportData, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/IM4U"), NO_API) \
	DECLARE_SERIALIZER(UMMDMeshImportData) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorUserSettings");} \



#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMDMeshImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMDMeshImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMDMeshImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMDMeshImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMDMeshImportData(UMMDMeshImportData&&); \
	NO_API UMMDMeshImportData(const UMMDMeshImportData&); \
public: \
	NO_API virtual ~UMMDMeshImportData();


#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_18_PROLOG
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_SPARSE_DATA \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_RPC_WRAPPERS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_ACCESSORS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_INCLASS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IM4U_API UClass* StaticClass<class UMMDMeshImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDMeshImportData_h


#define FOREACH_ENUM_EMMDNORMALIMPORTMETHOD(op) \
	op(MMDNIM_ComputeNormals) \
	op(MMDNIM_ImportNormals) \
	op(MMDNIM_ImportNormalsAndTangents) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
