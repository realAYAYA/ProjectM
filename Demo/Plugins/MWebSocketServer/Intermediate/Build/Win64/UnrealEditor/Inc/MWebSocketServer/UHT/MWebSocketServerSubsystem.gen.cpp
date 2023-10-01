// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MWebSocketServer/Private/Server/MWebSocketServerSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMWebSocketServerSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	MWEBSOCKETSERVER_API UClass* Z_Construct_UClass_UMWebSocketServerSubsystem();
	MWEBSOCKETSERVER_API UClass* Z_Construct_UClass_UMWebSocketServerSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MWebSocketServer();
// End Cross Module References
	DEFINE_FUNCTION(UMWebSocketServerSubsystem::execSendToAll)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendToAll(Z_Param_InMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMWebSocketServerSubsystem::execStopWebSocketServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopWebSocketServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMWebSocketServerSubsystem::execStartWebSocketServer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ServerPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartWebSocketServer(Z_Param_ServerPort);
		P_NATIVE_END;
	}
	void UMWebSocketServerSubsystem::StaticRegisterNativesUMWebSocketServerSubsystem()
	{
		UClass* Class = UMWebSocketServerSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendToAll", &UMWebSocketServerSubsystem::execSendToAll },
			{ "StartWebSocketServer", &UMWebSocketServerSubsystem::execStartWebSocketServer },
			{ "StopWebSocketServer", &UMWebSocketServerSubsystem::execStopWebSocketServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics
	{
		struct MWebSocketServerSubsystem_eventSendToAll_Parms
		{
			FString InMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics::NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MWebSocketServerSubsystem_eventSendToAll_Parms, InMessage), METADATA_PARAMS(Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics::NewProp_InMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics::NewProp_InMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics::NewProp_InMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "MWebSocketServer" },
		{ "ModuleRelativePath", "Private/Server/MWebSocketServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMWebSocketServerSubsystem, nullptr, "SendToAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics::MWebSocketServerSubsystem_eventSendToAll_Parms), Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics
	{
		struct MWebSocketServerSubsystem_eventStartWebSocketServer_Parms
		{
			int32 ServerPort;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPort;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::NewProp_ServerPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MWebSocketServerSubsystem_eventStartWebSocketServer_Parms, ServerPort), METADATA_PARAMS(Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::NewProp_ServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::NewProp_ServerPort_MetaData)) };
	void Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MWebSocketServerSubsystem_eventStartWebSocketServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MWebSocketServerSubsystem_eventStartWebSocketServer_Parms), &Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::NewProp_ServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "MWebSocketServer" },
		{ "ModuleRelativePath", "Private/Server/MWebSocketServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMWebSocketServerSubsystem, nullptr, "StartWebSocketServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::MWebSocketServerSubsystem_eventStartWebSocketServer_Parms), Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMWebSocketServerSubsystem_StopWebSocketServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMWebSocketServerSubsystem_StopWebSocketServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "MWebSocketServer" },
		{ "ModuleRelativePath", "Private/Server/MWebSocketServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMWebSocketServerSubsystem_StopWebSocketServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMWebSocketServerSubsystem, nullptr, "StopWebSocketServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMWebSocketServerSubsystem_StopWebSocketServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMWebSocketServerSubsystem_StopWebSocketServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMWebSocketServerSubsystem_StopWebSocketServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMWebSocketServerSubsystem_StopWebSocketServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMWebSocketServerSubsystem);
	UClass* Z_Construct_UClass_UMWebSocketServerSubsystem_NoRegister()
	{
		return UMWebSocketServerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMWebSocketServerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMWebSocketServerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MWebSocketServer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMWebSocketServerSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMWebSocketServerSubsystem_SendToAll, "SendToAll" }, // 2282781255
		{ &Z_Construct_UFunction_UMWebSocketServerSubsystem_StartWebSocketServer, "StartWebSocketServer" }, // 2524285751
		{ &Z_Construct_UFunction_UMWebSocketServerSubsystem_StopWebSocketServer, "StopWebSocketServer" }, // 2636335820
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMWebSocketServerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Server/MWebSocketServerSubsystem.h" },
		{ "ModuleRelativePath", "Private/Server/MWebSocketServerSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMWebSocketServerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMWebSocketServerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMWebSocketServerSubsystem_Statics::ClassParams = {
		&UMWebSocketServerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMWebSocketServerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMWebSocketServerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMWebSocketServerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMWebSocketServerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMWebSocketServerSubsystem.OuterSingleton, Z_Construct_UClass_UMWebSocketServerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMWebSocketServerSubsystem.OuterSingleton;
	}
	template<> MWEBSOCKETSERVER_API UClass* StaticClass<UMWebSocketServerSubsystem>()
	{
		return UMWebSocketServerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMWebSocketServerSubsystem);
	UMWebSocketServerSubsystem::~UMWebSocketServerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMWebSocketServerSubsystem, UMWebSocketServerSubsystem::StaticClass, TEXT("UMWebSocketServerSubsystem"), &Z_Registration_Info_UClass_UMWebSocketServerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMWebSocketServerSubsystem), 3974486838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_3723348647(TEXT("/Script/MWebSocketServer"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
