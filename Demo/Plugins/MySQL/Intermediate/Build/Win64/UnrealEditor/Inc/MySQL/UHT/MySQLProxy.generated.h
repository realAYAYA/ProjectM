// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MySQLProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FMySQLDataRow;
#ifdef MYSQL_MySQLProxy_generated_h
#error "MySQLProxy.generated.h already included, missing '#pragma once' in MySQLProxy.h"
#endif
#define MYSQL_MySQLProxy_generated_h

#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLDataTable_Statics; \
	MYSQL_API static class UScriptStruct* StaticStruct();


template<> MYSQL_API UScriptStruct* StaticStruct<struct FMySQLDataTable>();

#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLDataRow_Statics; \
	MYSQL_API static class UScriptStruct* StaticStruct();


template<> MYSQL_API UScriptStruct* StaticStruct<struct FMySQLDataRow>();

#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_SPARSE_DATA
#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectImage); \
	DECLARE_FUNCTION(execUpdateBinaryFile); \
	DECLARE_FUNCTION(execUpdateTable); \
	DECLARE_FUNCTION(execDeleteRow); \
	DECLARE_FUNCTION(execInsertRow); \
	DECLARE_FUNCTION(execSelectDataTableRows); \
	DECLARE_FUNCTION(execDisConnect); \
	DECLARE_FUNCTION(execConnect);


#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_ACCESSORS
#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMySQLProxy(); \
	friend struct Z_Construct_UClass_UMySQLProxy_Statics; \
public: \
	DECLARE_CLASS(UMySQLProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MySQL"), NO_API) \
	DECLARE_SERIALIZER(UMySQLProxy)


#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySQLProxy(UMySQLProxy&&); \
	NO_API UMySQLProxy(const UMySQLProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySQLProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySQLProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMySQLProxy) \
	NO_API virtual ~UMySQLProxy();


#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_35_PROLOG
#define FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_SPARSE_DATA \
	FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_ACCESSORS \
	FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_INCLASS_NO_PURE_DECLS \
	FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSQL_API UClass* StaticClass<class UMySQLProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
