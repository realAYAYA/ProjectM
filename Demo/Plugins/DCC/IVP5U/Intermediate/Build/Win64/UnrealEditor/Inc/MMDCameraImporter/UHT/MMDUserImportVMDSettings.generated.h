// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MMDUserImportVMDSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMDCAMERAIMPORTER_MMDUserImportVMDSettings_generated_h
#error "MMDUserImportVMDSettings.generated.h already included, missing '#pragma once' in MMDUserImportVMDSettings.h"
#endif
#define MMDCAMERAIMPORTER_MMDUserImportVMDSettings_generated_h

#define FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics; \
	MMDCAMERAIMPORTER_API static class UScriptStruct* StaticStruct();


template<> MMDCAMERAIMPORTER_API UScriptStruct* StaticStruct<struct FFilmbackImportSettings>();

#define FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_SPARSE_DATA
#define FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_ACCESSORS
#define FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMmdUserImportVmdSettings(); \
	friend struct Z_Construct_UClass_UMmdUserImportVmdSettings_Statics; \
public: \
	DECLARE_CLASS(UMmdUserImportVmdSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MMDCameraImporter"), NO_API) \
	DECLARE_SERIALIZER(UMmdUserImportVmdSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMmdUserImportVmdSettings(UMmdUserImportVmdSettings&&); \
	NO_API UMmdUserImportVmdSettings(const UMmdUserImportVmdSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMmdUserImportVmdSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMmdUserImportVmdSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMmdUserImportVmdSettings) \
	NO_API virtual ~UMmdUserImportVmdSettings();


#define FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_35_PROLOG
#define FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_SPARSE_DATA \
	FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_ACCESSORS \
	FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_INCLASS_NO_PURE_DECLS \
	FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_41_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMDCAMERAIMPORTER_API UClass* StaticClass<class UMmdUserImportVmdSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h


#define FOREACH_ENUM_ECAMERACUTIMPORTTYPE(op) \
	op(ECameraCutImportType::OneFrameInterval) \
	op(ECameraCutImportType::ConstantKey) \
	op(ECameraCutImportType::OneFrameIntervalWithConstantKey) \
	op(ECameraCutImportType::ImportAsIs) 

enum class ECameraCutImportType;
template<> struct TIsUEnumClass<ECameraCutImportType> { enum { Value = true }; };
template<> MMDCAMERAIMPORTER_API UEnum* StaticEnum<ECameraCutImportType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
