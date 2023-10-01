// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/MySQL/Public/MySQLProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySQLProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MYSQL_API UClass* Z_Construct_UClass_UMySQLProxy();
	MYSQL_API UClass* Z_Construct_UClass_UMySQLProxy_NoRegister();
	MYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataRow();
	MYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataTable();
	UPackage* Z_Construct_UPackage__Script_MySQL();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MySQLDataTable;
class UScriptStruct* FMySQLDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MySQLDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MySQLDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLDataTable, (UObject*)Z_Construct_UPackage__Script_MySQL(), TEXT("MySQLDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_MySQLDataTable.OuterSingleton;
}
template<> MYSQL_API UScriptStruct* StaticStruct<FMySQLDataTable>()
{
	return FMySQLDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMySQLDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ColumnName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ColumnData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColumnData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MySQL" },
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLDataTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Category", "SQLDataTable" },
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMySQLDataTable, ColumnName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName_MetaData), Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_Inner = { "ColumnData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_MetaData[] = {
		{ "Category", "SQLDataTable" },
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData = { "ColumnData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMySQLDataTable, ColumnData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_MetaData), Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
		nullptr,
		&NewStructOps,
		"MySQLDataTable",
		Z_Construct_UScriptStruct_FMySQLDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::PropPointers),
		sizeof(FMySQLDataTable),
		alignof(FMySQLDataTable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMySQLDataTable_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_MySQLDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MySQLDataTable.InnerSingleton, Z_Construct_UScriptStruct_FMySQLDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MySQLDataTable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MySQLDataRow;
class UScriptStruct* FMySQLDataRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MySQLDataRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MySQLDataRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLDataRow, (UObject*)Z_Construct_UPackage__Script_MySQL(), TEXT("MySQLDataRow"));
	}
	return Z_Registration_Info_UScriptStruct_MySQLDataRow.OuterSingleton;
}
template<> MYSQL_API UScriptStruct* StaticStruct<FMySQLDataRow>()
{
	return FMySQLDataRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMySQLDataRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_RowData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MySQL" },
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLDataRow>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_Inner = { "RowData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_MetaData[] = {
		{ "Category", "SQLDataRow" },
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData = { "RowData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMySQLDataRow, RowData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_MetaData), Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLDataRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLDataRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
		nullptr,
		&NewStructOps,
		"MySQLDataRow",
		Z_Construct_UScriptStruct_FMySQLDataRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataRow_Statics::PropPointers),
		sizeof(FMySQLDataRow),
		alignof(FMySQLDataRow),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMySQLDataRow_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataRow_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataRow()
	{
		if (!Z_Registration_Info_UScriptStruct_MySQLDataRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MySQLDataRow.InnerSingleton, Z_Construct_UScriptStruct_FMySQLDataRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MySQLDataRow.InnerSingleton;
	}
	DEFINE_FUNCTION(UMySQLProxy::execSelectImage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ImageIndex);
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMassage);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectImage(Z_Param_TableName,Z_Param_ID,Z_Param_ImageIndex,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMassage,Z_Param_Out_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLProxy::execUpdateBinaryFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ID);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFilePath);
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMassage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBinaryFile(Z_Param_TableName,Z_Param_FieldName,Z_Param_ID,Z_Param_InFilePath,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMassage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLProxy::execUpdateTable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_FormerField);
		P_GET_PROPERTY(FStrProperty,Z_Param_FormerValue);
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMassage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTable(Z_Param_TableName,Z_Param_Field,Z_Param_NewValue,Z_Param_FormerField,Z_Param_FormerValue,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMassage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLProxy::execDeleteRow)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMassage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteRow(Z_Param_TableName,Z_Param_Field,Z_Param_Value,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMassage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLProxy::execInsertRow)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Values);
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMassage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InsertRow(Z_Param_TableName,Z_Param_Values,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMassage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLProxy::execSelectDataTableRows)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMassage);
		P_GET_TARRAY_REF(FString,Z_Param_Out_TableHead);
		P_GET_TARRAY_REF(FMySQLDataRow,Z_Param_Out_Rows);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectDataTableRows(Z_Param_FieldName,Z_Param_TableName,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMassage,Z_Param_Out_TableHead,Z_Param_Out_Rows);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLProxy::execDisConnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisConnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLProxy::execConnect)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Server);
		P_GET_PROPERTY(FStrProperty,Z_Param_DBName);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMassage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connect(Z_Param_Server,Z_Param_DBName,Z_Param_UserID,Z_Param_Password,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMassage);
		P_NATIVE_END;
	}
	void UMySQLProxy::StaticRegisterNativesUMySQLProxy()
	{
		UClass* Class = UMySQLProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UMySQLProxy::execConnect },
			{ "DeleteRow", &UMySQLProxy::execDeleteRow },
			{ "DisConnect", &UMySQLProxy::execDisConnect },
			{ "InsertRow", &UMySQLProxy::execInsertRow },
			{ "SelectDataTableRows", &UMySQLProxy::execSelectDataTableRows },
			{ "SelectImage", &UMySQLProxy::execSelectImage },
			{ "UpdateBinaryFile", &UMySQLProxy::execUpdateBinaryFile },
			{ "UpdateTable", &UMySQLProxy::execUpdateTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMySQLProxy_Connect_Statics
	{
		struct MySQLProxy_eventConnect_Parms
		{
			FString Server;
			FString DBName;
			FString UserID;
			FString Password;
			bool IsSuccess;
			FString ErrorMassage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Server_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Server;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DBName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DBName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMassage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_Server_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_Server = { "Server", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventConnect_Parms, Server), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_Server_MetaData), Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_Server_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_DBName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_DBName = { "DBName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventConnect_Parms, DBName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_DBName_MetaData), Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_DBName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_UserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventConnect_Parms, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_UserID_MetaData), Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_UserID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventConnect_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_Password_MetaData), Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_Password_MetaData) };
	void Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((MySQLProxy_eventConnect_Parms*)Obj)->IsSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MySQLProxy_eventConnect_Parms), &Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_ErrorMassage = { "ErrorMassage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventConnect_Parms, ErrorMassage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLProxy_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_Server,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_DBName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_UserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_IsSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_Connect_Statics::NewProp_ErrorMassage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MYSQL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x87\xaa\xe5\x8a\xa8\xe9\x87\x8d\xe8\xbf\x9e\n" },
#endif
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe9\x87\x8d\xe8\xbf\x9e" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLProxy_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLProxy, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_UMySQLProxy_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMySQLProxy_Connect_Statics::MySQLProxy_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMySQLProxy_Connect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_Connect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMySQLProxy_Connect_Statics::MySQLProxy_eventConnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMySQLProxy_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLProxy_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics
	{
		struct MySQLProxy_eventDeleteRow_Parms
		{
			FString TableName;
			FString Field;
			FString Value;
			bool IsSuccess;
			FString ErrorMassage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMassage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventDeleteRow_Parms, TableName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_TableName_MetaData), Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_TableName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventDeleteRow_Parms, Field), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_Field_MetaData), Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_Field_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventDeleteRow_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_Value_MetaData) };
	void Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((MySQLProxy_eventDeleteRow_Parms*)Obj)->IsSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MySQLProxy_eventDeleteRow_Parms), &Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_ErrorMassage = { "ErrorMassage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventDeleteRow_Parms, ErrorMassage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_TableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_IsSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::NewProp_ErrorMassage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL" },
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLProxy, nullptr, "DeleteRow", nullptr, nullptr, Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::MySQLProxy_eventDeleteRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::MySQLProxy_eventDeleteRow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMySQLProxy_DeleteRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLProxy_DeleteRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLProxy_DisConnect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_DisConnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL" },
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLProxy_DisConnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLProxy, nullptr, "DisConnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_DisConnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMySQLProxy_DisConnect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMySQLProxy_DisConnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLProxy_DisConnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics
	{
		struct MySQLProxy_eventInsertRow_Parms
		{
			FString TableName;
			FString Values;
			bool IsSuccess;
			FString ErrorMassage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Values;
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMassage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventInsertRow_Parms, TableName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_TableName_MetaData), Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_TableName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventInsertRow_Parms, Values), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_Values_MetaData), Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_Values_MetaData) };
	void Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((MySQLProxy_eventInsertRow_Parms*)Obj)->IsSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MySQLProxy_eventInsertRow_Parms), &Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_ErrorMassage = { "ErrorMassage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventInsertRow_Parms, ErrorMassage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_TableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_IsSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::NewProp_ErrorMassage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL" },
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLProxy, nullptr, "InsertRow", nullptr, nullptr, Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::MySQLProxy_eventInsertRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::MySQLProxy_eventInsertRow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMySQLProxy_InsertRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLProxy_InsertRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics
	{
		struct MySQLProxy_eventSelectDataTableRows_Parms
		{
			FString FieldName;
			FString TableName;
			bool IsSuccess;
			FString ErrorMassage;
			TArray<FString> TableHead;
			TArray<FMySQLDataRow> Rows;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TableName;
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMassage;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TableHead_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TableHead;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rows_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rows;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventSelectDataTableRows_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_FieldName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventSelectDataTableRows_Parms, TableName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_TableName_MetaData), Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_TableName_MetaData) };
	void Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((MySQLProxy_eventSelectDataTableRows_Parms*)Obj)->IsSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MySQLProxy_eventSelectDataTableRows_Parms), &Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_ErrorMassage = { "ErrorMassage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventSelectDataTableRows_Parms, ErrorMassage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_TableHead_Inner = { "TableHead", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_TableHead = { "TableHead", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventSelectDataTableRows_Parms, TableHead), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_Rows_Inner = { "Rows", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMySQLDataRow, METADATA_PARAMS(0, nullptr) }; // 4189469515
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventSelectDataTableRows_Parms, Rows), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4189469515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_TableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_IsSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_ErrorMassage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_TableHead_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_TableHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_Rows_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::NewProp_Rows,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL" },
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLProxy, nullptr, "SelectDataTableRows", nullptr, nullptr, Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::MySQLProxy_eventSelectDataTableRows_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::MySQLProxy_eventSelectDataTableRows_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics
	{
		struct MySQLProxy_eventSelectImage_Parms
		{
			FString TableName;
			FString ID;
			int32 ImageIndex;
			bool IsSuccess;
			FString ErrorMassage;
			UTexture2D* Texture;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImageIndex;
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMassage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventSelectImage_Parms, TableName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_TableName_MetaData), Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_TableName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventSelectImage_Parms, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_ID_MetaData), Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_ImageIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_ImageIndex = { "ImageIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventSelectImage_Parms, ImageIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_ImageIndex_MetaData), Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_ImageIndex_MetaData) };
	void Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((MySQLProxy_eventSelectImage_Parms*)Obj)->IsSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MySQLProxy_eventSelectImage_Parms), &Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_ErrorMassage = { "ErrorMassage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventSelectImage_Parms, ErrorMassage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventSelectImage_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_TableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_ImageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_IsSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_ErrorMassage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL" },
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLProxy, nullptr, "SelectImage", nullptr, nullptr, Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::MySQLProxy_eventSelectImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::MySQLProxy_eventSelectImage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMySQLProxy_SelectImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLProxy_SelectImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics
	{
		struct MySQLProxy_eventUpdateBinaryFile_Parms
		{
			FString TableName;
			FString FieldName;
			FString ID;
			FString InFilePath;
			bool IsSuccess;
			FString ErrorMassage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFilePath;
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMassage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventUpdateBinaryFile_Parms, TableName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_TableName_MetaData), Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_TableName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventUpdateBinaryFile_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_FieldName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventUpdateBinaryFile_Parms, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_ID_MetaData), Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_InFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_InFilePath = { "InFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventUpdateBinaryFile_Parms, InFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_InFilePath_MetaData), Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_InFilePath_MetaData) };
	void Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((MySQLProxy_eventUpdateBinaryFile_Parms*)Obj)->IsSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MySQLProxy_eventUpdateBinaryFile_Parms), &Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_ErrorMassage = { "ErrorMassage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventUpdateBinaryFile_Parms, ErrorMassage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_TableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_InFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_IsSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::NewProp_ErrorMassage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL" },
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLProxy, nullptr, "UpdateBinaryFile", nullptr, nullptr, Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::MySQLProxy_eventUpdateBinaryFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::MySQLProxy_eventUpdateBinaryFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics
	{
		struct MySQLProxy_eventUpdateTable_Parms
		{
			FString TableName;
			FString Field;
			FString NewValue;
			FString FormerField;
			FString FormerValue;
			bool IsSuccess;
			FString ErrorMassage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormerField_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FormerField;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormerValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FormerValue;
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMassage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventUpdateTable_Parms, TableName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_TableName_MetaData), Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_TableName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventUpdateTable_Parms, Field), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_Field_MetaData), Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_Field_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventUpdateTable_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_NewValue_MetaData), Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_NewValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_FormerField_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_FormerField = { "FormerField", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventUpdateTable_Parms, FormerField), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_FormerField_MetaData), Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_FormerField_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_FormerValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_FormerValue = { "FormerValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventUpdateTable_Parms, FormerValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_FormerValue_MetaData), Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_FormerValue_MetaData) };
	void Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((MySQLProxy_eventUpdateTable_Parms*)Obj)->IsSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MySQLProxy_eventUpdateTable_Parms), &Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_ErrorMassage = { "ErrorMassage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLProxy_eventUpdateTable_Parms, ErrorMassage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_TableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_FormerField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_FormerValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_IsSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::NewProp_ErrorMassage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL" },
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLProxy, nullptr, "UpdateTable", nullptr, nullptr, Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::MySQLProxy_eventUpdateTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::MySQLProxy_eventUpdateTable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMySQLProxy_UpdateTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLProxy_UpdateTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMySQLProxy);
	UClass* Z_Construct_UClass_UMySQLProxy_NoRegister()
	{
		return UMySQLProxy::StaticClass();
	}
	struct Z_Construct_UClass_UMySQLProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReConnection_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReConnection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySQLProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMySQLProxy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMySQLProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMySQLProxy_Connect, "Connect" }, // 1263018761
		{ &Z_Construct_UFunction_UMySQLProxy_DeleteRow, "DeleteRow" }, // 715900515
		{ &Z_Construct_UFunction_UMySQLProxy_DisConnect, "DisConnect" }, // 1425967963
		{ &Z_Construct_UFunction_UMySQLProxy_InsertRow, "InsertRow" }, // 3361925846
		{ &Z_Construct_UFunction_UMySQLProxy_SelectDataTableRows, "SelectDataTableRows" }, // 965565229
		{ &Z_Construct_UFunction_UMySQLProxy_SelectImage, "SelectImage" }, // 2535407810
		{ &Z_Construct_UFunction_UMySQLProxy_UpdateBinaryFile, "UpdateBinaryFile" }, // 950060449
		{ &Z_Construct_UFunction_UMySQLProxy_UpdateTable, "UpdateTable" }, // 4293953176
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMySQLProxy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySQLProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MySQLProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySQLProxy_Statics::NewProp_OutTime_MetaData[] = {
		{ "Category", "MySQL" },
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMySQLProxy_Statics::NewProp_OutTime = { "OutTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMySQLProxy, OutTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySQLProxy_Statics::NewProp_OutTime_MetaData), Z_Construct_UClass_UMySQLProxy_Statics::NewProp_OutTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySQLProxy_Statics::NewProp_ReConnection_MetaData[] = {
		{ "Category", "MySQL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbf\x9e\xe6\x8e\xa5\xe8\xb6\x85\xe6\x97\xb6\xe8\xae\xbe\xe5\xae\x9a\n" },
#endif
		{ "ModuleRelativePath", "Public/MySQLProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9e\xe6\x8e\xa5\xe8\xb6\x85\xe6\x97\xb6\xe8\xae\xbe\xe5\xae\x9a" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMySQLProxy_Statics::NewProp_ReConnection = { "ReConnection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMySQLProxy, ReConnection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySQLProxy_Statics::NewProp_ReConnection_MetaData), Z_Construct_UClass_UMySQLProxy_Statics::NewProp_ReConnection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMySQLProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySQLProxy_Statics::NewProp_OutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySQLProxy_Statics::NewProp_ReConnection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySQLProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySQLProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySQLProxy_Statics::ClassParams = {
		&UMySQLProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMySQLProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMySQLProxy_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySQLProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UMySQLProxy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMySQLProxy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMySQLProxy()
	{
		if (!Z_Registration_Info_UClass_UMySQLProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySQLProxy.OuterSingleton, Z_Construct_UClass_UMySQLProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMySQLProxy.OuterSingleton;
	}
	template<> MYSQL_API UClass* StaticClass<UMySQLProxy>()
	{
		return UMySQLProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySQLProxy);
	UMySQLProxy::~UMySQLProxy() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_Statics::ScriptStructInfo[] = {
		{ FMySQLDataTable::StaticStruct, Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewStructOps, TEXT("MySQLDataTable"), &Z_Registration_Info_UScriptStruct_MySQLDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMySQLDataTable), 3166852713U) },
		{ FMySQLDataRow::StaticStruct, Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewStructOps, TEXT("MySQLDataRow"), &Z_Registration_Info_UScriptStruct_MySQLDataRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMySQLDataRow), 4189469515U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMySQLProxy, UMySQLProxy::StaticClass, TEXT("UMySQLProxy"), &Z_Registration_Info_UClass_UMySQLProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySQLProxy), 227162610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_693908928(TEXT("/Script/MySQL"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_MySQL_Source_MySQL_Public_MySQLProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
