// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/Item.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define DEMO_Item_generated_h

#define FID_Demo_Source_Demo_Private_Inventory_Item_h_14_SPARSE_DATA
#define FID_Demo_Source_Demo_Private_Inventory_Item_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Item_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Item_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetConfigName); \
	DECLARE_FUNCTION(execGetConfigID);


#define FID_Demo_Source_Demo_Private_Inventory_Item_h_14_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Item_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define FID_Demo_Source_Demo_Private_Inventory_Item_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItem(UItem&&); \
	NO_API UItem(const UItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItem) \
	NO_API virtual ~UItem();


#define FID_Demo_Source_Demo_Private_Inventory_Item_h_11_PROLOG
#define FID_Demo_Source_Demo_Private_Inventory_Item_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Private_Inventory_Item_h_14_SPARSE_DATA \
	FID_Demo_Source_Demo_Private_Inventory_Item_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Item_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Item_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Inventory_Item_h_14_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Item_h_14_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Inventory_Item_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Private_Inventory_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
