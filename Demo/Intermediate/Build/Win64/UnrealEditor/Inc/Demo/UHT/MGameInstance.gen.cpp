// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMGameInstance() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UMGameInstance();
	DEMO_API UClass* Z_Construct_UClass_UMGameInstance_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMGameTables_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMSaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(UMGameInstance::execGetMGameTables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMGameTables**)Z_Param__Result=P_THIS->GetMGameTables();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMGameInstance::execSetLoginInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InUserID);
		P_GET_PROPERTY(FStrProperty,Z_Param_InUserName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoginInfo(Z_Param_InUserID,Z_Param_InUserName);
		P_NATIVE_END;
	}
	void UMGameInstance::StaticRegisterNativesUMGameInstance()
	{
		UClass* Class = UMGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMGameTables", &UMGameInstance::execGetMGameTables },
			{ "SetLoginInfo", &UMGameInstance::execSetLoginInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMGameInstance_GetMGameTables_Statics
	{
		struct MGameInstance_eventGetMGameTables_Parms
		{
			UMGameTables* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMGameInstance_GetMGameTables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameInstance_eventGetMGameTables_Parms, ReturnValue), Z_Construct_UClass_UMGameTables_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMGameInstance_GetMGameTables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMGameInstance_GetMGameTables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameInstance_GetMGameTables_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMGameInstance_GetMGameTables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMGameInstance, nullptr, "GetMGameTables", nullptr, nullptr, Z_Construct_UFunction_UMGameInstance_GetMGameTables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameInstance_GetMGameTables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMGameInstance_GetMGameTables_Statics::MGameInstance_eventGetMGameTables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameInstance_GetMGameTables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMGameInstance_GetMGameTables_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameInstance_GetMGameTables_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMGameInstance_GetMGameTables_Statics::MGameInstance_eventGetMGameTables_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMGameInstance_GetMGameTables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMGameInstance_GetMGameTables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics
	{
		struct MGameInstance_eventSetLoginInfo_Parms
		{
			FString InUserID;
			FString InUserName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InUserID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InUserName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::NewProp_InUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::NewProp_InUserID = { "InUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameInstance_eventSetLoginInfo_Parms, InUserID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::NewProp_InUserID_MetaData), Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::NewProp_InUserID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::NewProp_InUserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::NewProp_InUserName = { "InUserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameInstance_eventSetLoginInfo_Parms, InUserName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::NewProp_InUserName_MetaData), Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::NewProp_InUserName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::NewProp_InUserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::NewProp_InUserName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/MGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMGameInstance, nullptr, "SetLoginInfo", nullptr, nullptr, Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::MGameInstance_eventSetLoginInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::MGameInstance_eventSetLoginInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMGameInstance_SetLoginInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMGameInstance_SetLoginInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGameInstance);
	UClass* Z_Construct_UClass_UMGameInstance_NoRegister()
	{
		return UMGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameTables_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameTables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMGameInstance_GetMGameTables, "GetMGameTables" }, // 3516209042
		{ &Z_Construct_UFunction_UMGameInstance_SetLoginInfo, "SetLoginInfo" }, // 147110661
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MGameInstance.h" },
		{ "ModuleRelativePath", "Public/MGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameInstance_Statics::NewProp_UserID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Steam, Epic, PS4 : ID\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steam, Epic, PS4 : ID" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGameInstance_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGameInstance, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameInstance_Statics::NewProp_UserID_MetaData), Z_Construct_UClass_UMGameInstance_Statics::NewProp_UserID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameInstance_Statics::NewProp_UserName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Steam, Epic, PS4 : USerName\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steam, Epic, PS4 : USerName" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGameInstance_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGameInstance, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameInstance_Statics::NewProp_UserName_MetaData), Z_Construct_UClass_UMGameInstance_Statics::NewProp_UserName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameInstance_Statics::NewProp_SaveGame_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/MGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMGameInstance_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGameInstance, SaveGame), Z_Construct_UClass_UMSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameInstance_Statics::NewProp_SaveGame_MetaData), Z_Construct_UClass_UMGameInstance_Statics::NewProp_SaveGame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameInstance_Statics::NewProp_GameTables_MetaData[] = {
		{ "ModuleRelativePath", "Public/MGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMGameInstance_Statics::NewProp_GameTables = { "GameTables", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGameInstance, GameTables), Z_Construct_UClass_UMGameTables_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameInstance_Statics::NewProp_GameTables_MetaData), Z_Construct_UClass_UMGameInstance_Statics::NewProp_GameTables_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameInstance_Statics::NewProp_UserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameInstance_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameInstance_Statics::NewProp_SaveGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameInstance_Statics::NewProp_GameTables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGameInstance_Statics::ClassParams = {
		&UMGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGameInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMGameInstance()
	{
		if (!Z_Registration_Info_UClass_UMGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGameInstance.OuterSingleton, Z_Construct_UClass_UMGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGameInstance.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UMGameInstance>()
	{
		return UMGameInstance::StaticClass();
	}
	UMGameInstance::UMGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGameInstance);
	UMGameInstance::~UMGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMGameInstance, UMGameInstance::StaticClass, TEXT("UMGameInstance"), &Z_Registration_Info_UClass_UMGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGameInstance), 3440734110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameInstance_h_623570971(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
