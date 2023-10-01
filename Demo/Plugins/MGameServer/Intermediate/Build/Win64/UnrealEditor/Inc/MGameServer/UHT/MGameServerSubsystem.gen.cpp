// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MGameServer/Private/MGameServerSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMGameServerSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	MGAMESERVER_API UClass* Z_Construct_UClass_UMGameServerSubsystem();
	MGAMESERVER_API UClass* Z_Construct_UClass_UMGameServerSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MGameServer();
// End Cross Module References
	DEFINE_FUNCTION(UMGameServerSubsystem::execSendToAll)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendToAll(Z_Param_InMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMGameServerSubsystem::execStopWebSocketServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopWebSocketServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMGameServerSubsystem::execStartWebSocketServer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ServerPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartWebSocketServer(Z_Param_ServerPort);
		P_NATIVE_END;
	}
	void UMGameServerSubsystem::StaticRegisterNativesUMGameServerSubsystem()
	{
		UClass* Class = UMGameServerSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendToAll", &UMGameServerSubsystem::execSendToAll },
			{ "StartWebSocketServer", &UMGameServerSubsystem::execStartWebSocketServer },
			{ "StopWebSocketServer", &UMGameServerSubsystem::execStopWebSocketServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics
	{
		struct MGameServerSubsystem_eventSendToAll_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameServerSubsystem_eventSendToAll_Parms, InMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::NewProp_InMessage_MetaData), Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::NewProp_InMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::NewProp_InMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "MWebSocketServer" },
		{ "ModuleRelativePath", "Private/MGameServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMGameServerSubsystem, nullptr, "SendToAll", nullptr, nullptr, Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::MGameServerSubsystem_eventSendToAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::MGameServerSubsystem_eventSendToAll_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMGameServerSubsystem_SendToAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMGameServerSubsystem_SendToAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics
	{
		struct MGameServerSubsystem_eventStartWebSocketServer_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::NewProp_ServerPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameServerSubsystem_eventStartWebSocketServer_Parms, ServerPort), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::NewProp_ServerPort_MetaData), Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::NewProp_ServerPort_MetaData) };
	void Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MGameServerSubsystem_eventStartWebSocketServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MGameServerSubsystem_eventStartWebSocketServer_Parms), &Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::NewProp_ServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "MWebSocketServer" },
		{ "ModuleRelativePath", "Private/MGameServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMGameServerSubsystem, nullptr, "StartWebSocketServer", nullptr, nullptr, Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::MGameServerSubsystem_eventStartWebSocketServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::MGameServerSubsystem_eventStartWebSocketServer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMGameServerSubsystem_StopWebSocketServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameServerSubsystem_StopWebSocketServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "MWebSocketServer" },
		{ "ModuleRelativePath", "Private/MGameServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMGameServerSubsystem_StopWebSocketServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMGameServerSubsystem, nullptr, "StopWebSocketServer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameServerSubsystem_StopWebSocketServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMGameServerSubsystem_StopWebSocketServer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMGameServerSubsystem_StopWebSocketServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMGameServerSubsystem_StopWebSocketServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGameServerSubsystem);
	UClass* Z_Construct_UClass_UMGameServerSubsystem_NoRegister()
	{
		return UMGameServerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMGameServerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGameServerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MGameServer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameServerSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMGameServerSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMGameServerSubsystem_SendToAll, "SendToAll" }, // 1233260436
		{ &Z_Construct_UFunction_UMGameServerSubsystem_StartWebSocketServer, "StartWebSocketServer" }, // 112851759
		{ &Z_Construct_UFunction_UMGameServerSubsystem_StopWebSocketServer, "StopWebSocketServer" }, // 1490680668
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameServerSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameServerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MGameServerSubsystem.h" },
		{ "ModuleRelativePath", "Private/MGameServerSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGameServerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGameServerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGameServerSubsystem_Statics::ClassParams = {
		&UMGameServerSubsystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameServerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGameServerSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMGameServerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMGameServerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGameServerSubsystem.OuterSingleton, Z_Construct_UClass_UMGameServerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGameServerSubsystem.OuterSingleton;
	}
	template<> MGAMESERVER_API UClass* StaticClass<UMGameServerSubsystem>()
	{
		return UMGameServerSubsystem::StaticClass();
	}
	UMGameServerSubsystem::UMGameServerSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGameServerSubsystem);
	UMGameServerSubsystem::~UMGameServerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMGameServerSubsystem, UMGameServerSubsystem::StaticClass, TEXT("UMGameServerSubsystem"), &Z_Registration_Info_UClass_UMGameServerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGameServerSubsystem), 1222126484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_1965036600(TEXT("/Script/MGameServer"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
