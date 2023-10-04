// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MMDStaticMeshImportData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IM4U_MMDStaticMeshImportData_generated_h
#error "MMDStaticMeshImportData.generated.h already included, missing '#pragma once' in MMDStaticMeshImportData.h"
#endif
#define IM4U_MMDStaticMeshImportData_generated_h

#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_SPARSE_DATA
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_RPC_WRAPPERS
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_ACCESSORS
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUMMDStaticMeshImportData(); \
	friend struct Z_Construct_UClass_UMMDStaticMeshImportData_Statics; \
public: \
	DECLARE_CLASS(UMMDStaticMeshImportData, UMMDMeshImportData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IM4U"), IM4U_API) \
	DECLARE_SERIALIZER(UMMDStaticMeshImportData)


#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IM4U_API UMMDStaticMeshImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMDStaticMeshImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IM4U_API, UMMDStaticMeshImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMDStaticMeshImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IM4U_API UMMDStaticMeshImportData(UMMDStaticMeshImportData&&); \
	IM4U_API UMMDStaticMeshImportData(const UMMDStaticMeshImportData&); \
public: \
	IM4U_API virtual ~UMMDStaticMeshImportData();


#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_26_PROLOG
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_SPARSE_DATA \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_RPC_WRAPPERS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_ACCESSORS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_INCLASS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IM4U_API UClass* StaticClass<class UMMDStaticMeshImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDStaticMeshImportData_h


#define FOREACH_ENUM_EVERTEXCOLORIMPORTOPTIONMMD(op) \
	op(EVertexColorImportOptionMMD::Replace) \
	op(EVertexColorImportOptionMMD::Ignore) \
	op(EVertexColorImportOptionMMD::Override) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
