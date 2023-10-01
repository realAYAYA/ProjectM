// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../RedisClient/Public/RedisProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedisProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REDISCLIENT_API UClass* Z_Construct_UClass_URedisProxy();
	REDISCLIENT_API UClass* Z_Construct_UClass_URedisProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RedisClient();
// End Cross Module References
	DEFINE_FUNCTION(URedisProxy::execExecuteCmd)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Cmd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExecuteCmd(Z_Param_Cmd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URedisProxy::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URedisProxy::execConnect)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InIP);
		P_GET_PROPERTY(FStrProperty,Z_Param_InPassword);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Connect(Z_Param_InIP,Z_Param_InPassword,Z_Param_InPort);
		P_NATIVE_END;
	}
	void URedisProxy::StaticRegisterNativesURedisProxy()
	{
		UClass* Class = URedisProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &URedisProxy::execConnect },
			{ "Disconnect", &URedisProxy::execDisconnect },
			{ "ExecuteCmd", &URedisProxy::execExecuteCmd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URedisProxy_Connect_Statics
	{
		struct RedisProxy_eventConnect_Parms
		{
			FString InIP;
			FString InPassword;
			int32 InPort;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPassword_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPassword;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPort;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InIP = { "InIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedisProxy_eventConnect_Parms, InIP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InIP_MetaData), Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InIP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InPassword_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InPassword = { "InPassword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedisProxy_eventConnect_Parms, InPassword), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InPassword_MetaData), Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InPassword_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InPort = { "InPort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedisProxy_eventConnect_Parms, InPort), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InPort_MetaData), Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InPort_MetaData) };
	void Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RedisProxy_eventConnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RedisProxy_eventConnect_Parms), &Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URedisProxy_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InPassword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_InPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedisProxy_Connect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URedisProxy_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Redis" },
		{ "ModuleRelativePath", "Public/RedisProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URedisProxy_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URedisProxy, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_URedisProxy_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URedisProxy_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_URedisProxy_Connect_Statics::RedisProxy_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URedisProxy_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_URedisProxy_Connect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URedisProxy_Connect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URedisProxy_Connect_Statics::RedisProxy_eventConnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URedisProxy_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URedisProxy_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URedisProxy_Disconnect_Statics
	{
		struct RedisProxy_eventDisconnect_Parms
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
	void Z_Construct_UFunction_URedisProxy_Disconnect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RedisProxy_eventDisconnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URedisProxy_Disconnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RedisProxy_eventDisconnect_Parms), &Z_Construct_UFunction_URedisProxy_Disconnect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URedisProxy_Disconnect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedisProxy_Disconnect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URedisProxy_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Redis" },
		{ "ModuleRelativePath", "Public/RedisProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URedisProxy_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URedisProxy, nullptr, "Disconnect", nullptr, nullptr, Z_Construct_UFunction_URedisProxy_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URedisProxy_Disconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_URedisProxy_Disconnect_Statics::RedisProxy_eventDisconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URedisProxy_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_URedisProxy_Disconnect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URedisProxy_Disconnect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URedisProxy_Disconnect_Statics::RedisProxy_eventDisconnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URedisProxy_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URedisProxy_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics
	{
		struct RedisProxy_eventExecuteCmd_Parms
		{
			FString Cmd;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cmd_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Cmd;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::NewProp_Cmd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedisProxy_eventExecuteCmd_Parms, Cmd), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::NewProp_Cmd_MetaData), Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::NewProp_Cmd_MetaData) };
	void Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RedisProxy_eventExecuteCmd_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RedisProxy_eventExecuteCmd_Parms), &Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::NewProp_Cmd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Redis" },
		{ "ModuleRelativePath", "Public/RedisProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URedisProxy, nullptr, "ExecuteCmd", nullptr, nullptr, Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::PropPointers), sizeof(Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::RedisProxy_eventExecuteCmd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::Function_MetaDataParams), Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::RedisProxy_eventExecuteCmd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URedisProxy_ExecuteCmd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URedisProxy_ExecuteCmd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URedisProxy);
	UClass* Z_Construct_UClass_URedisProxy_NoRegister()
	{
		return URedisProxy::StaticClass();
	}
	struct Z_Construct_UClass_URedisProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URedisProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RedisClient,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URedisProxy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URedisProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URedisProxy_Connect, "Connect" }, // 4123050065
		{ &Z_Construct_UFunction_URedisProxy_Disconnect, "Disconnect" }, // 2567112955
		{ &Z_Construct_UFunction_URedisProxy_ExecuteCmd, "ExecuteCmd" }, // 4146913583
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URedisProxy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedisProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RedisProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RedisProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedisProxy_Statics::NewProp_IP_MetaData[] = {
		{ "Category", "Redis" },
		{ "ModuleRelativePath", "Public/RedisProxy.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URedisProxy_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URedisProxy, IP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URedisProxy_Statics::NewProp_IP_MetaData), Z_Construct_UClass_URedisProxy_Statics::NewProp_IP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedisProxy_Statics::NewProp_Password_MetaData[] = {
		{ "Category", "Redis" },
		{ "ModuleRelativePath", "Public/RedisProxy.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URedisProxy_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URedisProxy, Password), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URedisProxy_Statics::NewProp_Password_MetaData), Z_Construct_UClass_URedisProxy_Statics::NewProp_Password_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedisProxy_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Redis" },
		{ "ModuleRelativePath", "Public/RedisProxy.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URedisProxy_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URedisProxy, Port), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URedisProxy_Statics::NewProp_Port_MetaData), Z_Construct_UClass_URedisProxy_Statics::NewProp_Port_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URedisProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedisProxy_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedisProxy_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedisProxy_Statics::NewProp_Port,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URedisProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URedisProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URedisProxy_Statics::ClassParams = {
		&URedisProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URedisProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URedisProxy_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URedisProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_URedisProxy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URedisProxy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URedisProxy()
	{
		if (!Z_Registration_Info_UClass_URedisProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URedisProxy.OuterSingleton, Z_Construct_UClass_URedisProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URedisProxy.OuterSingleton;
	}
	template<> REDISCLIENT_API UClass* StaticClass<URedisProxy>()
	{
		return URedisProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URedisProxy);
	URedisProxy::~URedisProxy() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URedisProxy, URedisProxy::StaticClass, TEXT("URedisProxy"), &Z_Registration_Info_UClass_URedisProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URedisProxy), 3258194589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_2340521375(TEXT("/Script/RedisClient"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
