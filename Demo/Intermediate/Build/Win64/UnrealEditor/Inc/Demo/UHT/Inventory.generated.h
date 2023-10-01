// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/Inventory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItem;
enum class ERpcErrorCode : uint8;
#ifdef DEMO_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define DEMO_Inventory_generated_h

#define FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_SPARSE_DATA
#define FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UseItemAck_Implementation(const ERpcErrorCode Code); \
	virtual void UseItemReq_Implementation(const int32 ID); \
 \
	DECLARE_FUNCTION(execUseItemAck); \
	DECLARE_FUNCTION(execUseItemReq); \
	DECLARE_FUNCTION(execK2_SplitItem); \
	DECLARE_FUNCTION(execK2_MoveItem); \
	DECLARE_FUNCTION(execK2_DeleteItem); \
	DECLARE_FUNCTION(execK2_AddItem); \
	DECLARE_FUNCTION(execK2_UseItem); \
	DECLARE_FUNCTION(execGetItemNum); \
	DECLARE_FUNCTION(execGetItemByUID); \
	DECLARE_FUNCTION(execGetItemByConfigID);


#define FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_CALLBACK_WRAPPERS
#define FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, URpcObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory) \
	NO_API virtual ~UInventory();


#define FID_Demo_Source_Demo_Private_Inventory_Inventory_h_16_PROLOG
#define FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_SPARSE_DATA \
	FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_CALLBACK_WRAPPERS \
	FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Inventory_Inventory_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Private_Inventory_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
