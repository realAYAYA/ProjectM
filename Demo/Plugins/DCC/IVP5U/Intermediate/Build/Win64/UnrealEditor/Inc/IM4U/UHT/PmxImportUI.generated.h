// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PmxImportUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IM4U_PmxImportUI_generated_h
#error "PmxImportUI.generated.h already included, missing '#pragma once' in PmxImportUI.h"
#endif
#define IM4U_PmxImportUI_generated_h

#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_SPARSE_DATA
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_RPC_WRAPPERS
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_ACCESSORS
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPmxImportUI(); \
	friend struct Z_Construct_UClass_UPmxImportUI_Statics; \
public: \
	DECLARE_CLASS(UPmxImportUI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IM4U"), IM4U_API) \
	DECLARE_SERIALIZER(UPmxImportUI) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorUserSettings");} \



#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IM4U_API UPmxImportUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPmxImportUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IM4U_API, UPmxImportUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPmxImportUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IM4U_API UPmxImportUI(UPmxImportUI&&); \
	IM4U_API UPmxImportUI(const UPmxImportUI&); \
public: \
	IM4U_API virtual ~UPmxImportUI();


#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_20_PROLOG
#define FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_SPARSE_DATA \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_RPC_WRAPPERS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_ACCESSORS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_INCLASS \
	FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IM4U_API UClass* StaticClass<class UPmxImportUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_PmxImportUI_h


#define FOREACH_ENUM_EPMXIMPORTTYPE(op) \
	op(PMXIT_StaticMesh) \
	op(PMXIT_SkeletalMesh) \
	op(PMXIT_Animation) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
