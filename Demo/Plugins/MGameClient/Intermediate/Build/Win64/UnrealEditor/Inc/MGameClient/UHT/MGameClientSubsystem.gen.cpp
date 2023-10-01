// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MGameClient/Private/MGameClientSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMGameClientSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	MGAMECLIENT_API UClass* Z_Construct_UClass_UMWebSocketClientSubsystem();
	MGAMECLIENT_API UClass* Z_Construct_UClass_UMWebSocketClientSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MGameClient();
// End Cross Module References
	DEFINE_FUNCTION(UMWebSocketClientSubsystem::execSendMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMessage(Z_Param_InMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMWebSocketClientSubsystem::execCloseSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseSocket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMWebSocketClientSubsystem::execCreateSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSocket();
		P_NATIVE_END;
	}
	void UMWebSocketClientSubsystem::StaticRegisterNativesUMWebSocketClientSubsystem()
	{
		UClass* Class = UMWebSocketClientSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseSocket", &UMWebSocketClientSubsystem::execCloseSocket },
			{ "CreateSocket", &UMWebSocketClientSubsystem::execCreateSocket },
			{ "SendMessage", &UMWebSocketClientSubsystem::execSendMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMWebSocketClientSubsystem_CloseSocket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMWebSocketClientSubsystem_CloseSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "MWebSocketServer" },
		{ "ModuleRelativePath", "Private/MGameClientSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMWebSocketClientSubsystem_CloseSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMWebSocketClientSubsystem, nullptr, "CloseSocket", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMWebSocketClientSubsystem_CloseSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMWebSocketClientSubsystem_CloseSocket_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMWebSocketClientSubsystem_CloseSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMWebSocketClientSubsystem_CloseSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMWebSocketClientSubsystem_CreateSocket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMWebSocketClientSubsystem_CreateSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "MWebSocketServer" },
		{ "ModuleRelativePath", "Private/MGameClientSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMWebSocketClientSubsystem_CreateSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMWebSocketClientSubsystem, nullptr, "CreateSocket", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMWebSocketClientSubsystem_CreateSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMWebSocketClientSubsystem_CreateSocket_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMWebSocketClientSubsystem_CreateSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMWebSocketClientSubsystem_CreateSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics
	{
		struct MWebSocketClientSubsystem_eventSendMessage_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MWebSocketClientSubsystem_eventSendMessage_Parms, InMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::NewProp_InMessage_MetaData), Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::NewProp_InMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::NewProp_InMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "MWebSocketServer" },
		{ "ModuleRelativePath", "Private/MGameClientSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMWebSocketClientSubsystem, nullptr, "SendMessage", nullptr, nullptr, Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::MWebSocketClientSubsystem_eventSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::MWebSocketClientSubsystem_eventSendMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMWebSocketClientSubsystem);
	UClass* Z_Construct_UClass_UMWebSocketClientSubsystem_NoRegister()
	{
		return UMWebSocketClientSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMWebSocketClientSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMWebSocketClientSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MGameClient,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMWebSocketClientSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMWebSocketClientSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMWebSocketClientSubsystem_CloseSocket, "CloseSocket" }, // 2695491504
		{ &Z_Construct_UFunction_UMWebSocketClientSubsystem_CreateSocket, "CreateSocket" }, // 100822647
		{ &Z_Construct_UFunction_UMWebSocketClientSubsystem_SendMessage, "SendMessage" }, // 319740555
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMWebSocketClientSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMWebSocketClientSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MGameClientSubsystem.h" },
		{ "ModuleRelativePath", "Private/MGameClientSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMWebSocketClientSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMWebSocketClientSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMWebSocketClientSubsystem_Statics::ClassParams = {
		&UMWebSocketClientSubsystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMWebSocketClientSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMWebSocketClientSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMWebSocketClientSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMWebSocketClientSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMWebSocketClientSubsystem.OuterSingleton, Z_Construct_UClass_UMWebSocketClientSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMWebSocketClientSubsystem.OuterSingleton;
	}
	template<> MGAMECLIENT_API UClass* StaticClass<UMWebSocketClientSubsystem>()
	{
		return UMWebSocketClientSubsystem::StaticClass();
	}
	UMWebSocketClientSubsystem::UMWebSocketClientSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMWebSocketClientSubsystem);
	UMWebSocketClientSubsystem::~UMWebSocketClientSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_MGameClient_Source_MGameClient_Private_MGameClientSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_MGameClient_Source_MGameClient_Private_MGameClientSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMWebSocketClientSubsystem, UMWebSocketClientSubsystem::StaticClass, TEXT("UMWebSocketClientSubsystem"), &Z_Registration_Info_UClass_UMWebSocketClientSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMWebSocketClientSubsystem), 4067024923U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_MGameClient_Source_MGameClient_Private_MGameClientSubsystem_h_3831772359(TEXT("/Script/MGameClient"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_MGameClient_Source_MGameClient_Private_MGameClientSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_MGameClient_Source_MGameClient_Private_MGameClientSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
