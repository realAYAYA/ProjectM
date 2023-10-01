// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MPlayerController.h"
#include "Public/MGameTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPlayerController() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_AMPlayerController();
	DEMO_API UClass* Z_Construct_UClass_AMPlayerController_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_AMPlayerState_NoRegister();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ELoginCode();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FCreateRoleParams();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FMUserData();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FRoleData();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnFinishedLogin_Parms
		{
			ELoginCode Code;
		};
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::NewProp_Code_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnFinishedLogin_Parms, Code), Z_Construct_UEnum_Demo_ELoginCode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::NewProp_Code_MetaData), Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::NewProp_Code_MetaData) }; // 722538935
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::NewProp_Code_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::NewProp_Code,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnFinishedLogin__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::_Script_Demo_eventOnFinishedLogin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::_Script_Demo_eventOnFinishedLogin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFinishedLogin_DelegateWrapper(const FMulticastScriptDelegate& OnFinishedLogin, const ELoginCode Code)
{
	struct _Script_Demo_eventOnFinishedLogin_Parms
	{
		ELoginCode Code;
	};
	_Script_Demo_eventOnFinishedLogin_Parms Parms;
	Parms.Code=Code;
	OnFinishedLogin.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AMPlayerController::execChooseRoleAck)
	{
		P_GET_UBOOL(Z_Param_bOk);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChooseRoleAck_Implementation(Z_Param_bOk);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPlayerController::execChooseRoleReq)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InID);
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChooseRoleReq_Implementation(Z_Param_InID,Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPlayerController::execCreateRoleAck)
	{
		P_GET_STRUCT(FRoleData,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateRoleAck_Implementation(Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPlayerController::execCreateRoleReq)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InID);
		P_GET_STRUCT(FCreateRoleParams,Z_Param_InParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateRoleReq_Implementation(Z_Param_InID,Z_Param_InParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPlayerController::execLoginAck)
	{
		P_GET_ENUM(ELoginCode,Z_Param_Code);
		P_GET_STRUCT(FMUserData,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginAck_Implementation(ELoginCode(Z_Param_Code),Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPlayerController::execLoginReq)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginReq_Implementation(Z_Param_InID,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPlayerController::execK2_ChooseRole)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ChooseRole(Z_Param_InName,FOnRpcResult(Z_Param_Out_InCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPlayerController::execK2_CreateRole)
	{
		P_GET_STRUCT_REF(FCreateRoleParams,Z_Param_Out_InParam);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_CreateRole(Z_Param_Out_InParam,FOnRpcResult(Z_Param_Out_InCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPlayerController::execK2_Login)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_Login();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPlayerController::execGetMPlayerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMPlayerState**)Z_Param__Result=P_THIS->GetMPlayerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPlayerController::execK2_GetUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->K2_GetUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPlayerController::execIsOnline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOnline();
		P_NATIVE_END;
	}
	struct MPlayerController_eventChooseRoleAck_Parms
	{
		bool bOk;
	};
	struct MPlayerController_eventChooseRoleReq_Parms
	{
		FString InID;
		FString InName;
	};
	struct MPlayerController_eventCreateRoleAck_Parms
	{
		FRoleData InData;
	};
	struct MPlayerController_eventCreateRoleReq_Parms
	{
		FString InID;
		FCreateRoleParams InParam;
	};
	struct MPlayerController_eventLoginAck_Parms
	{
		ELoginCode Code;
		FMUserData InData;
	};
	struct MPlayerController_eventLoginReq_Parms
	{
		FString InID;
		FString Name;
	};
	static FName NAME_AMPlayerController_ChooseRoleAck = FName(TEXT("ChooseRoleAck"));
	void AMPlayerController::ChooseRoleAck(bool bOk)
	{
		MPlayerController_eventChooseRoleAck_Parms Parms;
		Parms.bOk=bOk ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMPlayerController_ChooseRoleAck),&Parms);
	}
	static FName NAME_AMPlayerController_ChooseRoleReq = FName(TEXT("ChooseRoleReq"));
	void AMPlayerController::ChooseRoleReq(const FString& InID, const FString& InName)
	{
		MPlayerController_eventChooseRoleReq_Parms Parms;
		Parms.InID=InID;
		Parms.InName=InName;
		ProcessEvent(FindFunctionChecked(NAME_AMPlayerController_ChooseRoleReq),&Parms);
	}
	static FName NAME_AMPlayerController_CreateRoleAck = FName(TEXT("CreateRoleAck"));
	void AMPlayerController::CreateRoleAck(FRoleData const& InData)
	{
		MPlayerController_eventCreateRoleAck_Parms Parms;
		Parms.InData=InData;
		ProcessEvent(FindFunctionChecked(NAME_AMPlayerController_CreateRoleAck),&Parms);
	}
	static FName NAME_AMPlayerController_CreateRoleReq = FName(TEXT("CreateRoleReq"));
	void AMPlayerController::CreateRoleReq(const FString& InID, FCreateRoleParams const& InParam)
	{
		MPlayerController_eventCreateRoleReq_Parms Parms;
		Parms.InID=InID;
		Parms.InParam=InParam;
		ProcessEvent(FindFunctionChecked(NAME_AMPlayerController_CreateRoleReq),&Parms);
	}
	static FName NAME_AMPlayerController_LoginAck = FName(TEXT("LoginAck"));
	void AMPlayerController::LoginAck(const ELoginCode Code, FMUserData const& InData)
	{
		MPlayerController_eventLoginAck_Parms Parms;
		Parms.Code=Code;
		Parms.InData=InData;
		ProcessEvent(FindFunctionChecked(NAME_AMPlayerController_LoginAck),&Parms);
	}
	static FName NAME_AMPlayerController_LoginReq = FName(TEXT("LoginReq"));
	void AMPlayerController::LoginReq(const FString& InID, const FString& Name)
	{
		MPlayerController_eventLoginReq_Parms Parms;
		Parms.InID=InID;
		Parms.Name=Name;
		ProcessEvent(FindFunctionChecked(NAME_AMPlayerController_LoginReq),&Parms);
	}
	void AMPlayerController::StaticRegisterNativesAMPlayerController()
	{
		UClass* Class = AMPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChooseRoleAck", &AMPlayerController::execChooseRoleAck },
			{ "ChooseRoleReq", &AMPlayerController::execChooseRoleReq },
			{ "CreateRoleAck", &AMPlayerController::execCreateRoleAck },
			{ "CreateRoleReq", &AMPlayerController::execCreateRoleReq },
			{ "GetMPlayerState", &AMPlayerController::execGetMPlayerState },
			{ "IsOnline", &AMPlayerController::execIsOnline },
			{ "K2_ChooseRole", &AMPlayerController::execK2_ChooseRole },
			{ "K2_CreateRole", &AMPlayerController::execK2_CreateRole },
			{ "K2_GetUserID", &AMPlayerController::execK2_GetUserID },
			{ "K2_Login", &AMPlayerController::execK2_Login },
			{ "LoginAck", &AMPlayerController::execLoginAck },
			{ "LoginReq", &AMPlayerController::execLoginReq },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOk_MetaData[];
#endif
		static void NewProp_bOk_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOk;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::NewProp_bOk_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::NewProp_bOk_SetBit(void* Obj)
	{
		((MPlayerController_eventChooseRoleAck_Parms*)Obj)->bOk = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::NewProp_bOk = { "bOk", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MPlayerController_eventChooseRoleAck_Parms), &Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::NewProp_bOk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::NewProp_bOk_MetaData), Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::NewProp_bOk_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::NewProp_bOk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPlayerController, nullptr, "ChooseRoleAck", nullptr, nullptr, Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::PropPointers), sizeof(MPlayerController_eventChooseRoleAck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::PropPointers) < 2048);
	static_assert(sizeof(MPlayerController_eventChooseRoleAck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMPlayerController_ChooseRoleAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPlayerController_ChooseRoleAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::NewProp_InID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventChooseRoleReq_Parms, InID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::NewProp_InID_MetaData), Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::NewProp_InID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventChooseRoleReq_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::NewProp_InName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::NewProp_InID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPlayerController, nullptr, "ChooseRoleReq", nullptr, nullptr, Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::PropPointers), sizeof(MPlayerController_eventChooseRoleReq_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::PropPointers) < 2048);
	static_assert(sizeof(MPlayerController_eventChooseRoleReq_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMPlayerController_ChooseRoleReq()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPlayerController_ChooseRoleReq_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventCreateRoleAck_Parms, InData), Z_Construct_UScriptStruct_FRoleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics::NewProp_InData_MetaData), Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics::NewProp_InData_MetaData) }; // 2242512744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPlayerController, nullptr, "CreateRoleAck", nullptr, nullptr, Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics::PropPointers), sizeof(MPlayerController_eventCreateRoleAck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics::PropPointers) < 2048);
	static_assert(sizeof(MPlayerController_eventCreateRoleAck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMPlayerController_CreateRoleAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPlayerController_CreateRoleAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParam_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::NewProp_InID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventCreateRoleReq_Parms, InID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::NewProp_InID_MetaData), Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::NewProp_InID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::NewProp_InParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::NewProp_InParam = { "InParam", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventCreateRoleReq_Parms, InParam), Z_Construct_UScriptStruct_FCreateRoleParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::NewProp_InParam_MetaData), Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::NewProp_InParam_MetaData) }; // 864550243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::NewProp_InID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::NewProp_InParam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPlayerController, nullptr, "CreateRoleReq", nullptr, nullptr, Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::PropPointers), sizeof(MPlayerController_eventCreateRoleReq_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::PropPointers) < 2048);
	static_assert(sizeof(MPlayerController_eventCreateRoleReq_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMPlayerController_CreateRoleReq()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPlayerController_CreateRoleReq_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPlayerController_GetMPlayerState_Statics
	{
		struct MPlayerController_eventGetMPlayerState_Parms
		{
			AMPlayerState* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPlayerController_GetMPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventGetMPlayerState_Parms, ReturnValue), Z_Construct_UClass_AMPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPlayerController_GetMPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_GetMPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_GetMPlayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjecetM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xb8\x8d\xe4\xbf\x9d\xe8\xaf\x81\xe5\x9c\xa8\xe6\xb8\xb8\xe6\x88\x8f\xe5\xbc\x80\xe5\xa7\x8b\xef\xbc\x88\xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\xe5\xae\x8c\xe6\x88\x90\xe5\x89\x8d\xef\xbc\x89\xe6\x97\xb6\xef\xbc\x8c\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x8b\xbf\xe5\x88\xb0\xe9\x9d\x9e\xe7\xa9\xba\xe7\x9a\x84PlayerState*/" },
#endif
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x8d\xe4\xbf\x9d\xe8\xaf\x81\xe5\x9c\xa8\xe6\xb8\xb8\xe6\x88\x8f\xe5\xbc\x80\xe5\xa7\x8b\xef\xbc\x88\xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\xe5\xae\x8c\xe6\x88\x90\xe5\x89\x8d\xef\xbc\x89\xe6\x97\xb6\xef\xbc\x8c\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x8b\xbf\xe5\x88\xb0\xe9\x9d\x9e\xe7\xa9\xba\xe7\x9a\x84PlayerState" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPlayerController_GetMPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPlayerController, nullptr, "GetMPlayerState", nullptr, nullptr, Z_Construct_UFunction_AMPlayerController_GetMPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_GetMPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMPlayerController_GetMPlayerState_Statics::MPlayerController_eventGetMPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_GetMPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPlayerController_GetMPlayerState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_GetMPlayerState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMPlayerController_GetMPlayerState_Statics::MPlayerController_eventGetMPlayerState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMPlayerController_GetMPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPlayerController_GetMPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPlayerController_IsOnline_Statics
	{
		struct MPlayerController_eventIsOnline_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MPlayerController_eventIsOnline_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MPlayerController_eventIsOnline_Parms), &Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjecetM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** */" },
#endif
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPlayerController, nullptr, "IsOnline", nullptr, nullptr, Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::MPlayerController_eventIsOnline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::MPlayerController_eventIsOnline_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMPlayerController_IsOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPlayerController_IsOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics
	{
		struct MPlayerController_eventK2_ChooseRole_Parms
		{
			FString InName;
			FScriptDelegate InCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventK2_ChooseRole_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::NewProp_InName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::NewProp_InCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::NewProp_InCallback = { "InCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventK2_ChooseRole_Parms, InCallback), Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::NewProp_InCallback_MetaData), Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::NewProp_InCallback_MetaData) }; // 3264376367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::NewProp_InCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Choose Role*/" },
#endif
		{ "DisplayName", "ChooseRole" },
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Choose Role" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPlayerController, nullptr, "K2_ChooseRole", nullptr, nullptr, Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::MPlayerController_eventK2_ChooseRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::MPlayerController_eventK2_ChooseRole_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMPlayerController_K2_ChooseRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPlayerController_K2_ChooseRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics
	{
		struct MPlayerController_eventK2_CreateRole_Parms
		{
			FCreateRoleParams InParam;
			FScriptDelegate InCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParam_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParam;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::NewProp_InParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::NewProp_InParam = { "InParam", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventK2_CreateRole_Parms, InParam), Z_Construct_UScriptStruct_FCreateRoleParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::NewProp_InParam_MetaData), Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::NewProp_InParam_MetaData) }; // 864550243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::NewProp_InCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::NewProp_InCallback = { "InCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventK2_CreateRole_Parms, InCallback), Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::NewProp_InCallback_MetaData), Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::NewProp_InCallback_MetaData) }; // 3264376367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::NewProp_InParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::NewProp_InCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create Role*/" },
#endif
		{ "DisplayName", "CreateRole" },
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create Role" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPlayerController, nullptr, "K2_CreateRole", nullptr, nullptr, Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::MPlayerController_eventK2_CreateRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::MPlayerController_eventK2_CreateRole_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMPlayerController_K2_CreateRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPlayerController_K2_CreateRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPlayerController_K2_GetUserID_Statics
	{
		struct MPlayerController_eventK2_GetUserID_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMPlayerController_K2_GetUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventK2_GetUserID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPlayerController_K2_GetUserID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_K2_GetUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_K2_GetUserID_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Steam, Epic, PS4 ID*/" },
#endif
		{ "DisplayName", "GetUserID" },
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steam, Epic, PS4 ID" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPlayerController_K2_GetUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPlayerController, nullptr, "K2_GetUserID", nullptr, nullptr, Z_Construct_UFunction_AMPlayerController_K2_GetUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_K2_GetUserID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMPlayerController_K2_GetUserID_Statics::MPlayerController_eventK2_GetUserID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_K2_GetUserID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPlayerController_K2_GetUserID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_K2_GetUserID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMPlayerController_K2_GetUserID_Statics::MPlayerController_eventK2_GetUserID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMPlayerController_K2_GetUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPlayerController_K2_GetUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPlayerController_K2_Login_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_K2_Login_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Todo \xe6\x89\x8b\xe5\x8a\xa8\xe8\xa7\xa6\xe5\x8f\x91\xe7\x99\xbb\xe5\xbd\x95\xef\xbc\x8c\xe4\xbb\x85\xe4\xbe\x9b\xe8\x93\x9d\xe5\x9b\xbe\xe6\xb5\x8b\xe8\xaf\x95*/" },
#endif
		{ "DisplayName", "Login" },
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Todo \xe6\x89\x8b\xe5\x8a\xa8\xe8\xa7\xa6\xe5\x8f\x91\xe7\x99\xbb\xe5\xbd\x95\xef\xbc\x8c\xe4\xbb\x85\xe4\xbe\x9b\xe8\x93\x9d\xe5\x9b\xbe\xe6\xb5\x8b\xe8\xaf\x95" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPlayerController_K2_Login_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPlayerController, nullptr, "K2_Login", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_K2_Login_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPlayerController_K2_Login_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMPlayerController_K2_Login()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPlayerController_K2_Login_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPlayerController_LoginAck_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Code_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::NewProp_Code_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventLoginAck_Parms, Code), Z_Construct_UEnum_Demo_ELoginCode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::NewProp_Code_MetaData), Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::NewProp_Code_MetaData) }; // 722538935
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventLoginAck_Parms, InData), Z_Construct_UScriptStruct_FMUserData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::NewProp_InData_MetaData), Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::NewProp_InData_MetaData) }; // 2979799603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::NewProp_Code_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPlayerController, nullptr, "LoginAck", nullptr, nullptr, Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::PropPointers), sizeof(MPlayerController_eventLoginAck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::PropPointers) < 2048);
	static_assert(sizeof(MPlayerController_eventLoginAck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMPlayerController_LoginAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPlayerController_LoginAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPlayerController_LoginReq_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::NewProp_InID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventLoginReq_Parms, InID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::NewProp_InID_MetaData), Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::NewProp_InID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerController_eventLoginReq_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::NewProp_InID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPlayerController, nullptr, "LoginReq", nullptr, nullptr, Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::PropPointers), sizeof(MPlayerController_eventLoginReq_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::PropPointers) < 2048);
	static_assert(sizeof(MPlayerController_eventLoginReq_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMPlayerController_LoginReq()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPlayerController_LoginReq_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMPlayerController);
	UClass* Z_Construct_UClass_AMPlayerController_NoRegister()
	{
		return AMPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinishedLogin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishedLogin;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_RpcManager_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RpcManager_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RpcManager_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RpcManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMPlayerController_ChooseRoleAck, "ChooseRoleAck" }, // 1700366846
		{ &Z_Construct_UFunction_AMPlayerController_ChooseRoleReq, "ChooseRoleReq" }, // 1473926420
		{ &Z_Construct_UFunction_AMPlayerController_CreateRoleAck, "CreateRoleAck" }, // 1978770295
		{ &Z_Construct_UFunction_AMPlayerController_CreateRoleReq, "CreateRoleReq" }, // 1312635276
		{ &Z_Construct_UFunction_AMPlayerController_GetMPlayerState, "GetMPlayerState" }, // 1505188505
		{ &Z_Construct_UFunction_AMPlayerController_IsOnline, "IsOnline" }, // 2987595051
		{ &Z_Construct_UFunction_AMPlayerController_K2_ChooseRole, "K2_ChooseRole" }, // 4186964220
		{ &Z_Construct_UFunction_AMPlayerController_K2_CreateRole, "K2_CreateRole" }, // 1829834772
		{ &Z_Construct_UFunction_AMPlayerController_K2_GetUserID, "K2_GetUserID" }, // 3115927095
		{ &Z_Construct_UFunction_AMPlayerController_K2_Login, "K2_Login" }, // 2259777116
		{ &Z_Construct_UFunction_AMPlayerController_LoginAck, "LoginAck" }, // 1732335246
		{ &Z_Construct_UFunction_AMPlayerController_LoginReq, "LoginReq" }, // 598773589
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MPlayerController.h" },
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPlayerController_Statics::NewProp_OnFinishedLogin_MetaData[] = {
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMPlayerController_Statics::NewProp_OnFinishedLogin = { "OnFinishedLogin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMPlayerController, OnFinishedLogin), Z_Construct_UDelegateFunction_Demo_OnFinishedLogin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerController_Statics::NewProp_OnFinishedLogin_MetaData), Z_Construct_UClass_AMPlayerController_Statics::NewProp_OnFinishedLogin_MetaData) }; // 687754145
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AMPlayerController_Statics::NewProp_RpcManager_ValueProp = { "RpcManager", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3264376367
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMPlayerController_Statics::NewProp_RpcManager_Key_KeyProp = { "RpcManager_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPlayerController_Statics::NewProp_RpcManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/MPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMPlayerController_Statics::NewProp_RpcManager = { "RpcManager", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMPlayerController, RpcManager), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerController_Statics::NewProp_RpcManager_MetaData), Z_Construct_UClass_AMPlayerController_Statics::NewProp_RpcManager_MetaData) }; // 3264376367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPlayerController_Statics::NewProp_OnFinishedLogin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPlayerController_Statics::NewProp_RpcManager_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPlayerController_Statics::NewProp_RpcManager_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPlayerController_Statics::NewProp_RpcManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPlayerController_Statics::ClassParams = {
		&AMPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPlayerController.OuterSingleton, Z_Construct_UClass_AMPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMPlayerController.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<AMPlayerController>()
	{
		return AMPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMPlayerController);
	AMPlayerController::~AMPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMPlayerController, AMPlayerController::StaticClass, TEXT("AMPlayerController"), &Z_Registration_Info_UClass_AMPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPlayerController), 2670984558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MPlayerController_h_3092215414(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
