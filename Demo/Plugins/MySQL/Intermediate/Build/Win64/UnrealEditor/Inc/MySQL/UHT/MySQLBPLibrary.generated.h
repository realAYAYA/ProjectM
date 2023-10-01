// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MySQLBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSQL_MySQLBPLibrary_generated_h
#error "MySQLBPLibrary.generated.h already included, missing '#pragma once' in MySQLBPLibrary.h"
#endif
#define MYSQL_MySQLBPLibrary_generated_h

#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_SPARSE_DATA
#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMySQLSampleFunction);


#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_ACCESSORS
#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUMySQLBPLibrary(); \
	friend struct Z_Construct_UClass_UMySQLBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UMySQLBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MySQL"), NO_API) \
	DECLARE_SERIALIZER(UMySQLBPLibrary)


#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySQLBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySQLBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySQLBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySQLBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySQLBPLibrary(UMySQLBPLibrary&&); \
	NO_API UMySQLBPLibrary(const UMySQLBPLibrary&); \
public: \
	NO_API virtual ~UMySQLBPLibrary();


#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_25_PROLOG
#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_SPARSE_DATA \
	FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_RPC_WRAPPERS \
	FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_ACCESSORS \
	FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_INCLASS \
	FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSQL_API UClass* StaticClass<class UMySQLBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
