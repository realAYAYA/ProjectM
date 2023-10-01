// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/DemoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoGameMode() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_AMGameMode();
	DEMO_API UClass* Z_Construct_UClass_AMGameMode_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_AMPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(AMGameMode::execGetAllPlayerStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AMPlayerState*>*)Z_Param__Result=P_THIS->GetAllPlayerStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMGameMode::execFindOnlinePlayerByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const AMPlayerState**)Z_Param__Result=P_THIS->FindOnlinePlayerByName(Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMGameMode::execFindOnlinePlayerByID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const AMPlayerState**)Z_Param__Result=P_THIS->FindOnlinePlayerByID(Z_Param_InID);
		P_NATIVE_END;
	}
	void AMGameMode::StaticRegisterNativesAMGameMode()
	{
		UClass* Class = AMGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindOnlinePlayerByID", &AMGameMode::execFindOnlinePlayerByID },
			{ "FindOnlinePlayerByName", &AMGameMode::execFindOnlinePlayerByName },
			{ "GetAllPlayerStates", &AMGameMode::execGetAllPlayerStates },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics
	{
		struct MGameMode_eventFindOnlinePlayerByID_Parms
		{
			FString InID;
			const AMPlayerState* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InID;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::NewProp_InID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameMode_eventFindOnlinePlayerByID_Parms, InID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::NewProp_InID_MetaData), Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::NewProp_InID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameMode_eventFindOnlinePlayerByID_Parms, ReturnValue), Z_Construct_UClass_AMPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::NewProp_InID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjecetM" },
		{ "ModuleRelativePath", "Public/DemoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMGameMode, nullptr, "FindOnlinePlayerByID", nullptr, nullptr, Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::MGameMode_eventFindOnlinePlayerByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::MGameMode_eventFindOnlinePlayerByID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics
	{
		struct MGameMode_eventFindOnlinePlayerByName_Parms
		{
			FString InName;
			const AMPlayerState* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameMode_eventFindOnlinePlayerByName_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::NewProp_InName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameMode_eventFindOnlinePlayerByName_Parms, ReturnValue), Z_Construct_UClass_AMPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjecetM" },
		{ "ModuleRelativePath", "Public/DemoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMGameMode, nullptr, "FindOnlinePlayerByName", nullptr, nullptr, Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::MGameMode_eventFindOnlinePlayerByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::MGameMode_eventFindOnlinePlayerByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics
	{
		struct MGameMode_eventGetAllPlayerStates_Parms
		{
			TArray<AMPlayerState*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameMode_eventGetAllPlayerStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjecetM" },
		{ "ModuleRelativePath", "Public/DemoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMGameMode, nullptr, "GetAllPlayerStates", nullptr, nullptr, Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::MGameMode_eventGetAllPlayerStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::MGameMode_eventGetAllPlayerStates_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMGameMode_GetAllPlayerStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMGameMode_GetAllPlayerStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMGameMode);
	UClass* Z_Construct_UClass_AMGameMode_NoRegister()
	{
		return AMGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByID, "FindOnlinePlayerByID" }, // 3266459112
		{ &Z_Construct_UFunction_AMGameMode_FindOnlinePlayerByName, "FindOnlinePlayerByName" }, // 2382694125
		{ &Z_Construct_UFunction_AMGameMode_GetAllPlayerStates, "GetAllPlayerStates" }, // 3952899699
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DemoGameMode.h" },
		{ "ModuleRelativePath", "Public/DemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMGameMode_Statics::ClassParams = {
		&AMGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMGameMode()
	{
		if (!Z_Registration_Info_UClass_AMGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMGameMode.OuterSingleton, Z_Construct_UClass_AMGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMGameMode.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<AMGameMode>()
	{
		return AMGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMGameMode);
	AMGameMode::~AMGameMode() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_DemoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_DemoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMGameMode, AMGameMode::StaticClass, TEXT("AMGameMode"), &Z_Registration_Info_UClass_AMGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMGameMode), 542697868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_DemoGameMode_h_3979450679(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_DemoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_DemoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
