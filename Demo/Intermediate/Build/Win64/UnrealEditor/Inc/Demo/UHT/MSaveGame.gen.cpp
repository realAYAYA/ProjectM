// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/Developer/MSaveGame.h"
#include "Public/MGameTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSaveGame() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UMSaveGame();
	DEMO_API UClass* Z_Construct_UClass_UMSaveGame_NoRegister();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FCreateRoleParams();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FMUserData();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FRoleData();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(UMSaveGame::execRemoveRole)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InID);
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveRole(Z_Param_InID,Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMSaveGame::execUpdateRole)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InID);
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_GET_STRUCT_REF(FRoleData,Z_Param_Out_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateRole(Z_Param_InID,Z_Param_InName,Z_Param_Out_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMSaveGame::execCreateRole)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InID);
		P_GET_STRUCT_REF(FCreateRoleParams,Z_Param_Out_InParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateRole(Z_Param_InID,Z_Param_Out_InParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMSaveGame::execUpdateRoleName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InID);
		P_GET_PROPERTY(FStrProperty,Z_Param_OldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateRoleName(Z_Param_InID,Z_Param_OldName,Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMSaveGame::execGetRoleData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InID);
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRoleData*)Z_Param__Result=P_THIS->GetRoleData(Z_Param_InID,Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMSaveGame::execFindUserData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMUserData*)Z_Param__Result=P_THIS->FindUserData(Z_Param_InID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMSaveGame::execRemoveUser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveUser(Z_Param_InID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMSaveGame::execCreateUser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InID);
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateUser(Z_Param_InID,Z_Param_InName);
		P_NATIVE_END;
	}
	void UMSaveGame::StaticRegisterNativesUMSaveGame()
	{
		UClass* Class = UMSaveGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateRole", &UMSaveGame::execCreateRole },
			{ "CreateUser", &UMSaveGame::execCreateUser },
			{ "FindUserData", &UMSaveGame::execFindUserData },
			{ "GetRoleData", &UMSaveGame::execGetRoleData },
			{ "RemoveRole", &UMSaveGame::execRemoveRole },
			{ "RemoveUser", &UMSaveGame::execRemoveUser },
			{ "UpdateRole", &UMSaveGame::execUpdateRole },
			{ "UpdateRoleName", &UMSaveGame::execUpdateRoleName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMSaveGame_CreateRole_Statics
	{
		struct MSaveGame_eventCreateRole_Parms
		{
			FString InID;
			FCreateRoleParams InParams;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParams;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::NewProp_InID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventCreateRole_Parms, InID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::NewProp_InID_MetaData), Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::NewProp_InID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::NewProp_InParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventCreateRole_Parms, InParams), Z_Construct_UScriptStruct_FCreateRoleParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::NewProp_InParams_MetaData), Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::NewProp_InParams_MetaData) }; // 864550243
	void Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MSaveGame_eventCreateRole_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MSaveGame_eventCreateRole_Parms), &Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::NewProp_InID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::NewProp_InParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Developer/MSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSaveGame, nullptr, "CreateRole", nullptr, nullptr, Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::MSaveGame_eventCreateRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::MSaveGame_eventCreateRole_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMSaveGame_CreateRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSaveGame_CreateRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSaveGame_CreateUser_Statics
	{
		struct MSaveGame_eventCreateUser_Parms
		{
			FString InID;
			FString InName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::NewProp_InID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventCreateUser_Parms, InID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::NewProp_InID_MetaData), Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::NewProp_InID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventCreateUser_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::NewProp_InName_MetaData) };
	void Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MSaveGame_eventCreateUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MSaveGame_eventCreateUser_Parms), &Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::NewProp_InID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09@see UGameplayStatics::CreateSaveGameObject\n\x09 *\x09@see UGameplayStatics::SaveGameToSlot\n\x09 *\x09@see UGameplayStatics::DoesSaveGameExist\n\x09 *\x09@see UGameplayStatics::LoadGameFromSlot\n\x09 *\x09@see UGameplayStatics::DeleteGameInSlot\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Private/Developer/MSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@see UGameplayStatics::CreateSaveGameObject\n@see UGameplayStatics::SaveGameToSlot\n@see UGameplayStatics::DoesSaveGameExist\n@see UGameplayStatics::LoadGameFromSlot\n@see UGameplayStatics::DeleteGameInSlot" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSaveGame, nullptr, "CreateUser", nullptr, nullptr, Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::MSaveGame_eventCreateUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::MSaveGame_eventCreateUser_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMSaveGame_CreateUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSaveGame_CreateUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSaveGame_FindUserData_Statics
	{
		struct MSaveGame_eventFindUserData_Parms
		{
			FString InID;
			FMUserData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::NewProp_InID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventFindUserData_Parms, InID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::NewProp_InID_MetaData), Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::NewProp_InID_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventFindUserData_Parms, ReturnValue), Z_Construct_UScriptStruct_FMUserData, METADATA_PARAMS(0, nullptr) }; // 2979799603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::NewProp_InID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Developer/MSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSaveGame, nullptr, "FindUserData", nullptr, nullptr, Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::MSaveGame_eventFindUserData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::MSaveGame_eventFindUserData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMSaveGame_FindUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSaveGame_FindUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics
	{
		struct MSaveGame_eventGetRoleData_Parms
		{
			FString InID;
			FString InName;
			FRoleData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::NewProp_InID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventGetRoleData_Parms, InID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::NewProp_InID_MetaData), Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::NewProp_InID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventGetRoleData_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::NewProp_InName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventGetRoleData_Parms, ReturnValue), Z_Construct_UScriptStruct_FRoleData, METADATA_PARAMS(0, nullptr) }; // 2242512744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::NewProp_InID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Developer/MSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSaveGame, nullptr, "GetRoleData", nullptr, nullptr, Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::MSaveGame_eventGetRoleData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::MSaveGame_eventGetRoleData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMSaveGame_GetRoleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSaveGame_GetRoleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics
	{
		struct MSaveGame_eventRemoveRole_Parms
		{
			FString InID;
			FString InName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::NewProp_InID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventRemoveRole_Parms, InID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::NewProp_InID_MetaData), Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::NewProp_InID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventRemoveRole_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::NewProp_InName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::NewProp_InID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Developer/MSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSaveGame, nullptr, "RemoveRole", nullptr, nullptr, Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::MSaveGame_eventRemoveRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::MSaveGame_eventRemoveRole_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMSaveGame_RemoveRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSaveGame_RemoveRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics
	{
		struct MSaveGame_eventRemoveUser_Parms
		{
			FString InID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::NewProp_InID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventRemoveUser_Parms, InID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::NewProp_InID_MetaData), Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::NewProp_InID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::NewProp_InID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Developer/MSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSaveGame, nullptr, "RemoveUser", nullptr, nullptr, Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::MSaveGame_eventRemoveUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::MSaveGame_eventRemoveUser_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMSaveGame_RemoveUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSaveGame_RemoveUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics
	{
		struct MSaveGame_eventUpdateRole_Parms
		{
			FString InID;
			FString InName;
			FRoleData InData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventUpdateRole_Parms, InID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InID_MetaData), Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventUpdateRole_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventUpdateRole_Parms, InData), Z_Construct_UScriptStruct_FRoleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InData_MetaData), Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InData_MetaData) }; // 2242512744
	void Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MSaveGame_eventUpdateRole_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MSaveGame_eventUpdateRole_Parms), &Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_InData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Developer/MSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSaveGame, nullptr, "UpdateRole", nullptr, nullptr, Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::MSaveGame_eventUpdateRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::MSaveGame_eventUpdateRole_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMSaveGame_UpdateRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSaveGame_UpdateRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics
	{
		struct MSaveGame_eventUpdateRoleName_Parms
		{
			FString InID;
			FString OldName;
			FString NewName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_InID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventUpdateRoleName_Parms, InID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_InID_MetaData), Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_InID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_OldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_OldName = { "OldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventUpdateRoleName_Parms, OldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_OldName_MetaData), Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_OldName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSaveGame_eventUpdateRoleName_Parms, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_NewName_MetaData), Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_NewName_MetaData) };
	void Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MSaveGame_eventUpdateRoleName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MSaveGame_eventUpdateRoleName_Parms), &Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_InID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_OldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_NewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Developer/MSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSaveGame, nullptr, "UpdateRoleName", nullptr, nullptr, Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::MSaveGame_eventUpdateRoleName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::MSaveGame_eventUpdateRoleName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMSaveGame_UpdateRoleName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSaveGame_UpdateRoleName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSaveGame);
	UClass* Z_Construct_UClass_UMSaveGame_NoRegister()
	{
		return UMSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UMSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSaveGame_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMSaveGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMSaveGame_CreateRole, "CreateRole" }, // 436681906
		{ &Z_Construct_UFunction_UMSaveGame_CreateUser, "CreateUser" }, // 1719986698
		{ &Z_Construct_UFunction_UMSaveGame_FindUserData, "FindUserData" }, // 1024283480
		{ &Z_Construct_UFunction_UMSaveGame_GetRoleData, "GetRoleData" }, // 1085638538
		{ &Z_Construct_UFunction_UMSaveGame_RemoveRole, "RemoveRole" }, // 2692369754
		{ &Z_Construct_UFunction_UMSaveGame_RemoveUser, "RemoveUser" }, // 3083565069
		{ &Z_Construct_UFunction_UMSaveGame_UpdateRole, "UpdateRole" }, // 1200502231
		{ &Z_Construct_UFunction_UMSaveGame_UpdateRoleName, "UpdateRoleName" }, // 2613676661
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSaveGame_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSaveGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Developer/MSaveGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Developer/MSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSaveGame_Statics::NewProp_UserData_Inner = { "UserData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMUserData, METADATA_PARAMS(0, nullptr) }; // 2979799603
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSaveGame_Statics::NewProp_UserData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Developer/MSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSaveGame_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSaveGame, UserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSaveGame_Statics::NewProp_UserData_MetaData), Z_Construct_UClass_UMSaveGame_Statics::NewProp_UserData_MetaData) }; // 2979799603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSaveGame_Statics::NewProp_UserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSaveGame_Statics::NewProp_UserData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSaveGame_Statics::ClassParams = {
		&UMSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSaveGame()
	{
		if (!Z_Registration_Info_UClass_UMSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSaveGame.OuterSingleton, Z_Construct_UClass_UMSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSaveGame.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UMSaveGame>()
	{
		return UMSaveGame::StaticClass();
	}
	UMSaveGame::UMSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSaveGame);
	UMSaveGame::~UMSaveGame() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSaveGame, UMSaveGame::StaticClass, TEXT("UMSaveGame"), &Z_Registration_Info_UClass_UMSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSaveGame), 491812058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_503168895(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
