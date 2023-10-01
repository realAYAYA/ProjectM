// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MGameTables/ItemTable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemConfig;
#ifdef DEMO_ItemTable_generated_h
#error "ItemTable.generated.h already included, missing '#pragma once' in ItemTable.h"
#endif
#define DEMO_ItemTable_generated_h

#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemRow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DEMO_API UScriptStruct* StaticStruct<struct FItemRow>();

#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_SPARSE_DATA
#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_ACCESSORS
#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemConfig(); \
	friend struct Z_Construct_UClass_UItemConfig_Statics; \
public: \
	DECLARE_CLASS(UItemConfig, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(UItemConfig)


#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemConfig(UItemConfig&&); \
	NO_API UItemConfig(const UItemConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemConfig) \
	NO_API virtual ~UItemConfig();


#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_60_PROLOG
#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_SPARSE_DATA \
	FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_ACCESSORS \
	FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UItemConfig>();

#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_107_DELEGATE \
DEMO_API void FOnForeachItemConfig_DelegateWrapper(const FScriptDelegate& OnForeachItemConfig, const UItemConfig* Entry);


#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_SPARSE_DATA
#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetConfigFileName); \
	DECLARE_FUNCTION(execK2_Foreach); \
	DECLARE_FUNCTION(execGet);


#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_ACCESSORS
#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemConfigManager(); \
	friend struct Z_Construct_UClass_UItemConfigManager_Statics; \
public: \
	DECLARE_CLASS(UItemConfigManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(UItemConfigManager)


#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemConfigManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemConfigManager(UItemConfigManager&&); \
	NO_API UItemConfigManager(const UItemConfigManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemConfigManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemConfigManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemConfigManager) \
	NO_API virtual ~UItemConfigManager();


#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_110_PROLOG
#define FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_SPARSE_DATA \
	FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_ACCESSORS \
	FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UItemConfigManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
