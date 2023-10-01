// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/Inventory/Inventory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UInventory();
	DEMO_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UItem_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_URpcObject();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ERpcErrorCode();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(UInventory::execUseItemAck)
	{
		P_GET_ENUM(ERpcErrorCode,Z_Param_Code);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseItemAck_Implementation(ERpcErrorCode(Z_Param_Code));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execUseItemReq)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseItemReq_Implementation(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execK2_SplitItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SplitItem(Z_Param_ID,FOnRpcResult(Z_Param_Out_InCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execK2_MoveItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_MoveItem(Z_Param_ID,FOnRpcResult(Z_Param_Out_InCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execK2_DeleteItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DeleteItem(Z_Param_ID,FOnRpcResult(Z_Param_Out_InCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execK2_AddItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddItem(Z_Param_ID,FOnRpcResult(Z_Param_Out_InCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execK2_UseItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_UseItem(Z_Param_ID,FOnRpcResult(Z_Param_Out_InCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetItemNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InConfigID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetItemNum(Z_Param_InConfigID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetItemByUID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_UID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UItem**)Z_Param__Result=P_THIS->GetItemByUID(Z_Param_UID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetItemByConfigID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InConfigID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UItem**)Z_Param__Result=P_THIS->GetItemByConfigID(Z_Param_InConfigID);
		P_NATIVE_END;
	}
	struct Inventory_eventUseItemAck_Parms
	{
		ERpcErrorCode Code;
	};
	struct Inventory_eventUseItemReq_Parms
	{
		int32 ID;
	};
	static FName NAME_UInventory_UseItemAck = FName(TEXT("UseItemAck"));
	void UInventory::UseItemAck(const ERpcErrorCode Code)
	{
		Inventory_eventUseItemAck_Parms Parms;
		Parms.Code=Code;
		ProcessEvent(FindFunctionChecked(NAME_UInventory_UseItemAck),&Parms);
	}
	static FName NAME_UInventory_UseItemReq = FName(TEXT("UseItemReq"));
	void UInventory::UseItemReq(const int32 ID)
	{
		Inventory_eventUseItemReq_Parms Parms;
		Parms.ID=ID;
		ProcessEvent(FindFunctionChecked(NAME_UInventory_UseItemReq),&Parms);
	}
	void UInventory::StaticRegisterNativesUInventory()
	{
		UClass* Class = UInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemByConfigID", &UInventory::execGetItemByConfigID },
			{ "GetItemByUID", &UInventory::execGetItemByUID },
			{ "GetItemNum", &UInventory::execGetItemNum },
			{ "K2_AddItem", &UInventory::execK2_AddItem },
			{ "K2_DeleteItem", &UInventory::execK2_DeleteItem },
			{ "K2_MoveItem", &UInventory::execK2_MoveItem },
			{ "K2_SplitItem", &UInventory::execK2_SplitItem },
			{ "K2_UseItem", &UInventory::execK2_UseItem },
			{ "UseItemAck", &UInventory::execUseItemAck },
			{ "UseItemReq", &UInventory::execUseItemReq },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics
	{
		struct Inventory_eventGetItemByConfigID_Parms
		{
			int32 InConfigID;
			const UItem* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InConfigID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InConfigID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::NewProp_InConfigID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::NewProp_InConfigID = { "InConfigID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemByConfigID_Parms, InConfigID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::NewProp_InConfigID_MetaData), Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::NewProp_InConfigID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemByConfigID_Parms, ReturnValue), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::NewProp_InConfigID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Inventory/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemByConfigID", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::Inventory_eventGetItemByConfigID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::Inventory_eventGetItemByConfigID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventory_GetItemByConfigID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetItemByConfigID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetItemByUID_Statics
	{
		struct Inventory_eventGetItemByUID_Parms
		{
			int32 UID;
			const UItem* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemByUID_Statics::NewProp_UID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemByUID_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemByUID_Parms, UID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemByUID_Statics::NewProp_UID_MetaData), Z_Construct_UFunction_UInventory_GetItemByUID_Statics::NewProp_UID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemByUID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_GetItemByUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemByUID_Parms, ReturnValue), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemByUID_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UInventory_GetItemByUID_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemByUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemByUID_Statics::NewProp_UID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemByUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemByUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Inventory/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemByUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemByUID", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetItemByUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemByUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetItemByUID_Statics::Inventory_eventGetItemByUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemByUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetItemByUID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemByUID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventory_GetItemByUID_Statics::Inventory_eventGetItemByUID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventory_GetItemByUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetItemByUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetItemNum_Statics
	{
		struct Inventory_eventGetItemNum_Parms
		{
			int32 InConfigID;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InConfigID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InConfigID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemNum_Statics::NewProp_InConfigID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemNum_Statics::NewProp_InConfigID = { "InConfigID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemNum_Parms, InConfigID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemNum_Statics::NewProp_InConfigID_MetaData), Z_Construct_UFunction_UInventory_GetItemNum_Statics::NewProp_InConfigID_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemNum_Statics::NewProp_InConfigID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Inventory/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemNum", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetItemNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetItemNum_Statics::Inventory_eventGetItemNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetItemNum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemNum_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventory_GetItemNum_Statics::Inventory_eventGetItemNum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventory_GetItemNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetItemNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_K2_AddItem_Statics
	{
		struct Inventory_eventK2_AddItem_Parms
		{
			int32 ID;
			FScriptDelegate InCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_AddItem_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_K2_AddItem_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventK2_AddItem_Parms, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_AddItem_Statics::NewProp_ID_MetaData), Z_Construct_UFunction_UInventory_K2_AddItem_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_AddItem_Statics::NewProp_InCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventory_K2_AddItem_Statics::NewProp_InCallback = { "InCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventK2_AddItem_Parms, InCallback), Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_AddItem_Statics::NewProp_InCallback_MetaData), Z_Construct_UFunction_UInventory_K2_AddItem_Statics::NewProp_InCallback_MetaData) }; // 3264376367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_K2_AddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_K2_AddItem_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_K2_AddItem_Statics::NewProp_InCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "DisplayName", "AddItem" },
		{ "ModuleRelativePath", "Private/Inventory/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_K2_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "K2_AddItem", nullptr, nullptr, Z_Construct_UFunction_UInventory_K2_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_K2_AddItem_Statics::Inventory_eventK2_AddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_K2_AddItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_AddItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventory_K2_AddItem_Statics::Inventory_eventK2_AddItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventory_K2_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_K2_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics
	{
		struct Inventory_eventK2_DeleteItem_Parms
		{
			int32 ID;
			FScriptDelegate InCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventK2_DeleteItem_Parms, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::NewProp_ID_MetaData), Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::NewProp_InCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::NewProp_InCallback = { "InCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventK2_DeleteItem_Parms, InCallback), Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::NewProp_InCallback_MetaData), Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::NewProp_InCallback_MetaData) }; // 3264376367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::NewProp_InCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "DisplayName", "DeleteItem" },
		{ "ModuleRelativePath", "Private/Inventory/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "K2_DeleteItem", nullptr, nullptr, Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::Inventory_eventK2_DeleteItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::Inventory_eventK2_DeleteItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventory_K2_DeleteItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_K2_DeleteItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_K2_MoveItem_Statics
	{
		struct Inventory_eventK2_MoveItem_Parms
		{
			int32 ID;
			FScriptDelegate InCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventK2_MoveItem_Parms, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::NewProp_ID_MetaData), Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::NewProp_InCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::NewProp_InCallback = { "InCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventK2_MoveItem_Parms, InCallback), Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::NewProp_InCallback_MetaData), Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::NewProp_InCallback_MetaData) }; // 3264376367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::NewProp_InCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "DisplayName", "MoveItem" },
		{ "ModuleRelativePath", "Private/Inventory/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "K2_MoveItem", nullptr, nullptr, Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::Inventory_eventK2_MoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::Inventory_eventK2_MoveItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventory_K2_MoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_K2_MoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_K2_SplitItem_Statics
	{
		struct Inventory_eventK2_SplitItem_Parms
		{
			int32 ID;
			FScriptDelegate InCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventK2_SplitItem_Parms, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::NewProp_ID_MetaData), Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::NewProp_InCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::NewProp_InCallback = { "InCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventK2_SplitItem_Parms, InCallback), Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::NewProp_InCallback_MetaData), Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::NewProp_InCallback_MetaData) }; // 3264376367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::NewProp_InCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "DisplayName", "SplitItem" },
		{ "ModuleRelativePath", "Private/Inventory/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "K2_SplitItem", nullptr, nullptr, Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::Inventory_eventK2_SplitItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::Inventory_eventK2_SplitItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventory_K2_SplitItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_K2_SplitItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_K2_UseItem_Statics
	{
		struct Inventory_eventK2_UseItem_Parms
		{
			int32 ID;
			FScriptDelegate InCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_UseItem_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_K2_UseItem_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventK2_UseItem_Parms, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_UseItem_Statics::NewProp_ID_MetaData), Z_Construct_UFunction_UInventory_K2_UseItem_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_UseItem_Statics::NewProp_InCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventory_K2_UseItem_Statics::NewProp_InCallback = { "InCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventK2_UseItem_Parms, InCallback), Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_UseItem_Statics::NewProp_InCallback_MetaData), Z_Construct_UFunction_UInventory_K2_UseItem_Statics::NewProp_InCallback_MetaData) }; // 3264376367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_K2_UseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_K2_UseItem_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_K2_UseItem_Statics::NewProp_InCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_K2_UseItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "DisplayName", "UseItem" },
		{ "ModuleRelativePath", "Private/Inventory/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_K2_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "K2_UseItem", nullptr, nullptr, Z_Construct_UFunction_UInventory_K2_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_UseItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_K2_UseItem_Statics::Inventory_eventK2_UseItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_UseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_K2_UseItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_K2_UseItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventory_K2_UseItem_Statics::Inventory_eventK2_UseItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventory_K2_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_K2_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_UseItemAck_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Code_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Code;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventory_UseItemAck_Statics::NewProp_Code_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_UseItemAck_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventory_UseItemAck_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventUseItemAck_Parms, Code), Z_Construct_UEnum_Demo_ERpcErrorCode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_UseItemAck_Statics::NewProp_Code_MetaData), Z_Construct_UFunction_UInventory_UseItemAck_Statics::NewProp_Code_MetaData) }; // 1833949777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_UseItemAck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_UseItemAck_Statics::NewProp_Code_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_UseItemAck_Statics::NewProp_Code,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_UseItemAck_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Inventory/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_UseItemAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "UseItemAck", nullptr, nullptr, Z_Construct_UFunction_UInventory_UseItemAck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_UseItemAck_Statics::PropPointers), sizeof(Inventory_eventUseItemAck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_UseItemAck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_UseItemAck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_UseItemAck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Inventory_eventUseItemAck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventory_UseItemAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_UseItemAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_UseItemReq_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_UseItemReq_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_UseItemReq_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventUseItemReq_Parms, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_UseItemReq_Statics::NewProp_ID_MetaData), Z_Construct_UFunction_UInventory_UseItemReq_Statics::NewProp_ID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_UseItemReq_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_UseItemReq_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_UseItemReq_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Network & Rpc*/" },
#endif
		{ "ModuleRelativePath", "Private/Inventory/Inventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Network & Rpc" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_UseItemReq_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "UseItemReq", nullptr, nullptr, Z_Construct_UFunction_UInventory_UseItemReq_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_UseItemReq_Statics::PropPointers), sizeof(Inventory_eventUseItemReq_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_UseItemReq_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_UseItemReq_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_UseItemReq_Statics::PropPointers) < 2048);
	static_assert(sizeof(Inventory_eventUseItemReq_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventory_UseItemReq()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_UseItemReq_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventory);
	UClass* Z_Construct_UClass_UInventory_NoRegister()
	{
		return UInventory::StaticClass();
	}
	struct Z_Construct_UClass_UInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllItems_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AllItems_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllItems_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AllItems;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Equipments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Equipments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URpcObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_GetItemByConfigID, "GetItemByConfigID" }, // 2916084957
		{ &Z_Construct_UFunction_UInventory_GetItemByUID, "GetItemByUID" }, // 1336894868
		{ &Z_Construct_UFunction_UInventory_GetItemNum, "GetItemNum" }, // 1864432603
		{ &Z_Construct_UFunction_UInventory_K2_AddItem, "K2_AddItem" }, // 2076228532
		{ &Z_Construct_UFunction_UInventory_K2_DeleteItem, "K2_DeleteItem" }, // 2103199732
		{ &Z_Construct_UFunction_UInventory_K2_MoveItem, "K2_MoveItem" }, // 1951013314
		{ &Z_Construct_UFunction_UInventory_K2_SplitItem, "K2_SplitItem" }, // 1813862202
		{ &Z_Construct_UFunction_UInventory_K2_UseItem, "K2_UseItem" }, // 1033686129
		{ &Z_Construct_UFunction_UInventory_UseItemAck, "UseItemAck" }, // 1362896134
		{ &Z_Construct_UFunction_UInventory_UseItemReq, "UseItemReq" }, // 1924237141
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Inventory/Inventory.h" },
		{ "ModuleRelativePath", "Private/Inventory/Inventory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_AllItems_ValueProp = { "AllItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_AllItems_Key_KeyProp = { "AllItems_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_AllItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/Inventory/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_AllItems = { "AllItems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, AllItems), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_AllItems_MetaData), Z_Construct_UClass_UInventory_Statics::NewProp_AllItems_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Equipments_Inner = { "Equipments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_Equipments_MetaData[] = {
		{ "ModuleRelativePath", "Private/Inventory/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Equipments = { "Equipments", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, Equipments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_Equipments_MetaData), Z_Construct_UClass_UInventory_Statics::NewProp_Equipments_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_AllItems_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_AllItems_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_AllItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Equipments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Equipments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
		&UInventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInventory()
	{
		if (!Z_Registration_Info_UClass_UInventory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventory.OuterSingleton, Z_Construct_UClass_UInventory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventory.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UInventory>()
	{
		return UInventory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
	UInventory::~UInventory() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Inventory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Inventory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventory, UInventory::StaticClass, TEXT("UInventory"), &Z_Registration_Info_UClass_UInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventory), 1485495302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Inventory_h_2265353138(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Inventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Inventory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
