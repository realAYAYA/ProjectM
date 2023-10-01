// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MGameTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMGameTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EBirth();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ECamp();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EGender();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ERace();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ERoleClass();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ERpcErrorCode();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FCreateRoleParams();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FMBuffSnapShoot();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FMInventoryData();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FMItemData();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FMUserData();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FRoleData();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnRpcResult_Parms
		{
			ERpcErrorCode bOk;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bOk_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOk_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_bOk;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::NewProp_bOk_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::NewProp_bOk_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::NewProp_bOk = { "bOk", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnRpcResult_Parms, bOk), Z_Construct_UEnum_Demo_ERpcErrorCode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::NewProp_bOk_MetaData), Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::NewProp_bOk_MetaData) }; // 1833949777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::NewProp_bOk_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::NewProp_bOk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnRpcResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::_Script_Demo_eventOnRpcResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::_Script_Demo_eventOnRpcResult_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRpcResult_DelegateWrapper(const FScriptDelegate& OnRpcResult, const ERpcErrorCode bOk)
{
	struct _Script_Demo_eventOnRpcResult_Parms
	{
		ERpcErrorCode bOk;
	};
	_Script_Demo_eventOnRpcResult_Parms Parms;
	Parms.bOk=bOk;
	OnRpcResult.ProcessDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MBuffSnapShoot;
class UScriptStruct* FMBuffSnapShoot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MBuffSnapShoot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MBuffSnapShoot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMBuffSnapShoot, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("MBuffSnapShoot"));
	}
	return Z_Registration_Info_UScriptStruct_MBuffSnapShoot.OuterSingleton;
}
template<> DEMO_API UScriptStruct* StaticStruct<FMBuffSnapShoot>()
{
	return FMBuffSnapShoot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainingTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stack_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Stack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x8e\xa9\xe5\xae\xb6\xe7\xa6\xbb\xe7\xba\xbf\xe5\x90\x8e\xef\xbc\x8c\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe8\xa7\x92\xe8\x89\xb2\xe8\xba\xab\xe4\xb8\x8a""Buff\xe5\xbf\xab\xe7\x85\xa7\xe6\x95\xb0\xe6\x8d\xae */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6\xe7\xa6\xbb\xe7\xba\xbf\xe5\x90\x8e\xef\xbc\x8c\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe8\xa7\x92\xe8\x89\xb2\xe8\xba\xab\xe4\xb8\x8a""Buff\xe5\xbf\xab\xe7\x85\xa7\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMBuffSnapShoot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMBuffSnapShoot, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_RemainingTime_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_RemainingTime = { "RemainingTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMBuffSnapShoot, RemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_RemainingTime_MetaData), Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_RemainingTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_Stack_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMBuffSnapShoot, Stack), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_Stack_MetaData), Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_Stack_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_RemainingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewProp_Stack,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		&NewStructOps,
		"MBuffSnapShoot",
		Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::PropPointers),
		sizeof(FMBuffSnapShoot),
		alignof(FMBuffSnapShoot),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMBuffSnapShoot()
	{
		if (!Z_Registration_Info_UScriptStruct_MBuffSnapShoot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MBuffSnapShoot.InnerSingleton, Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MBuffSnapShoot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MItemData;
class UScriptStruct* FMItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMItemData, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("MItemData"));
	}
	return Z_Registration_Info_UScriptStruct_MItemData.OuterSingleton;
}
template<> DEMO_API UScriptStruct* StaticStruct<FMItemData>()
{
	return FMItemData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMItemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PositionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PositionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enchanting_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Enchanting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x81\x93\xe5\x85\xb7\xe6\x95\xb0\xe6\x8d\xae*/" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x93\xe5\x85\xb7\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FMItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMItemData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMItemData, UID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_UID_MetaData), Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_UID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMItemData, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Num_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMItemData, Num), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Num_MetaData), Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Num_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_PositionX_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x9c\xa8\xe8\x83\x8c\xe5\x8c\x85\xe4\xb8\xad\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe8\x83\x8c\xe5\x8c\x85\xe4\xb8\xad\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_PositionX = { "PositionX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMItemData, PositionX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_PositionX_MetaData), Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_PositionX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_PositionY_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_PositionY = { "PositionY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMItemData, PositionY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_PositionY_MetaData), Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_PositionY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Slot_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa3\x85\xe5\xa4\x87\xe4\xbd\x8d\xe7\xbd\xae\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe6\x98\xaf\xe8\xa3\x85\xe5\xa4\x87\xe7\x9a\x84\xe8\xaf\x9d\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa3\x85\xe5\xa4\x87\xe4\xbd\x8d\xe7\xbd\xae\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe6\x98\xaf\xe8\xa3\x85\xe5\xa4\x87\xe7\x9a\x84\xe8\xaf\x9d" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMItemData, Slot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Slot_MetaData), Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Slot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Enchanting_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xad\xa6\xe5\x99\xa8\xe5\xb1\x9e\xe6\x80\xa7\xe5\xad\x97\xe6\xae\xb5\xef\xbc\x8c\xe9\x99\x84\xe9\xad\x94\xef\xbc\x8c\xe8\xb4\xa8\xe5\x8f\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa6\xe5\x99\xa8\xe5\xb1\x9e\xe6\x80\xa7\xe5\xad\x97\xe6\xae\xb5\xef\xbc\x8c\xe9\x99\x84\xe9\xad\x94\xef\xbc\x8c\xe8\xb4\xa8\xe5\x8f\x98" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Enchanting = { "Enchanting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMItemData, Enchanting), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Enchanting_MetaData), Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Enchanting_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_UID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_PositionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_PositionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMItemData_Statics::NewProp_Enchanting,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		&NewStructOps,
		"MItemData",
		Z_Construct_UScriptStruct_FMItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMItemData_Statics::PropPointers),
		sizeof(FMItemData),
		alignof(FMItemData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMItemData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMItemData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMItemData()
	{
		if (!Z_Registration_Info_UScriptStruct_MItemData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MItemData.InnerSingleton, Z_Construct_UScriptStruct_FMItemData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MItemData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MInventoryData;
class UScriptStruct* FMInventoryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MInventoryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MInventoryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMInventoryData, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("MInventoryData"));
	}
	return Z_Registration_Info_UScriptStruct_MInventoryData.OuterSingleton;
}
template<> DEMO_API UScriptStruct* StaticStruct<FMInventoryData>()
{
	return FMInventoryData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMInventoryData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Equipments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Equipments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Equipments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMInventoryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb0\xe6\x8d\xae*/" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FMInventoryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMInventoryData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMInventoryData_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMItemData, METADATA_PARAMS(0, nullptr) }; // 3103251345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMInventoryData_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x83\x8c\xe5\x8c\x85\xe9\x87\x8c\xe9\x81\x93\xe5\x85\xb7\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe9\x87\x8c\xe9\x81\x93\xe5\x85\xb7" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMInventoryData_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMInventoryData, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMInventoryData_Statics::NewProp_Items_MetaData), Z_Construct_UScriptStruct_FMInventoryData_Statics::NewProp_Items_MetaData) }; // 3103251345
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMInventoryData_Statics::NewProp_Equipments_Inner = { "Equipments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMItemData, METADATA_PARAMS(0, nullptr) }; // 3103251345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMInventoryData_Statics::NewProp_Equipments_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa9\xbf\xe6\x88\xb4\xe8\xa3\x85\xe5\xa4\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa9\xbf\xe6\x88\xb4\xe8\xa3\x85\xe5\xa4\x87" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMInventoryData_Statics::NewProp_Equipments = { "Equipments", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMInventoryData, Equipments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMInventoryData_Statics::NewProp_Equipments_MetaData), Z_Construct_UScriptStruct_FMInventoryData_Statics::NewProp_Equipments_MetaData) }; // 3103251345
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMInventoryData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMInventoryData_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMInventoryData_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMInventoryData_Statics::NewProp_Equipments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMInventoryData_Statics::NewProp_Equipments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMInventoryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		&NewStructOps,
		"MInventoryData",
		Z_Construct_UScriptStruct_FMInventoryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMInventoryData_Statics::PropPointers),
		sizeof(FMInventoryData),
		alignof(FMInventoryData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMInventoryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMInventoryData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMInventoryData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMInventoryData()
	{
		if (!Z_Registration_Info_UScriptStruct_MInventoryData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MInventoryData.InnerSingleton, Z_Construct_UScriptStruct_FMInventoryData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MInventoryData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RoleData;
class UScriptStruct* FRoleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RoleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RoleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoleData, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("RoleData"));
	}
	return Z_Registration_Info_UScriptStruct_RoleData.OuterSingleton;
}
template<> DEMO_API UScriptStruct* StaticStruct<FRoleData>()
{
	return FRoleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRoleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Camp_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camp_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Camp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Race_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Race_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Race;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RaceBranch_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RaceBranch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Birth_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Birth_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Birth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Class_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateDate_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_CreateDate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x8e\xa9\xe5\xae\xb6\xe5\xb1\x9e\xe6\x80\xa7\xe6\x95\xb0\xe6\x8d\xae*/" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6\xe5\xb1\x9e\xe6\x80\xa7\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FRoleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_RoleName_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\xa8\xe6\x88\xb7\xe5\x90\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe6\x88\xb7\xe5\x90\x8d" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_RoleName = { "RoleName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoleData, RoleName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_RoleName_MetaData), Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_RoleName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x80\xa7\xe5\x88\xab\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x80\xa7\xe5\x88\xab" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoleData, Gender), Z_Construct_UEnum_Demo_EGender, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Gender_MetaData), Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Gender_MetaData) }; // 2220833329
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Camp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Camp_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x98\xb5\xe8\x90\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x98\xb5\xe8\x90\xa5" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Camp = { "Camp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoleData, Camp), Z_Construct_UEnum_Demo_ECamp, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Camp_MetaData), Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Camp_MetaData) }; // 3258973009
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Race_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Race_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\x8d\xe6\x97\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x8d\xe6\x97\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Race = { "Race", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoleData, Race), Z_Construct_UEnum_Demo_ERace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Race_MetaData), Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Race_MetaData) }; // 3957792283
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_RaceBranch_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\x8d\xe6\x97\x8f\xe5\x88\x86\xe6\x94\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x8d\xe6\x97\x8f\xe5\x88\x86\xe6\x94\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_RaceBranch = { "RaceBranch", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoleData, RaceBranch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_RaceBranch_MetaData), Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_RaceBranch_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Birth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Birth_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x87\xba\xe8\xba\xab\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x87\xba\xe8\xba\xab" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Birth = { "Birth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoleData, Birth), Z_Construct_UEnum_Demo_EBirth, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Birth_MetaData), Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Birth_MetaData) }; // 3026299245
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Class_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\x92\xe8\x89\xb2\xe8\x81\x8c\xe4\xb8\x9a\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe8\x81\x8c\xe4\xb8\x9a" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoleData, Class), Z_Construct_UEnum_Demo_ERoleClass, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Class_MetaData), Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Class_MetaData) }; // 3260658597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\x87\xe7\xba\xa7 \xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7\xe5\x80\xbc = \xe8\x81\x8c\xe4\xb8\x9a\xe7\xad\x89\xe7\xba\xa7\xe6\x88\x90\xe9\x95\xbf + \xe5\xa4\xa9\xe8\xb5\x8b + \xe8\xa3\x85\xe5\xa4\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x87\xe7\xba\xa7 \xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7\xe5\x80\xbc = \xe8\x81\x8c\xe4\xb8\x9a\xe7\xad\x89\xe7\xba\xa7\xe6\x88\x90\xe9\x95\xbf + \xe5\xa4\xa9\xe8\xb5\x8b + \xe8\xa3\x85\xe5\xa4\x87" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoleData, Level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Level_MetaData), Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_InventoryData_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb0\xe6\x8d\xae, \xe8\xa3\x85\xe5\xa4\x87\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb0\xe6\x8d\xae, \xe8\xa3\x85\xe5\xa4\x87\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_InventoryData = { "InventoryData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoleData, InventoryData), Z_Construct_UScriptStruct_FMInventoryData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_InventoryData_MetaData), Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_InventoryData_MetaData) }; // 825608403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_CreateDate_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\x92\xe8\x89\xb2\xe5\x88\x9b\xe5\xbb\xba\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe5\x88\x9b\xe5\xbb\xba\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_CreateDate = { "CreateDate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoleData, CreateDate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_CreateDate_MetaData), Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_CreateDate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_RoleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Gender_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Gender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Camp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Camp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Race_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Race,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_RaceBranch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Birth_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Birth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Class_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_InventoryData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleData_Statics::NewProp_CreateDate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		&NewStructOps,
		"RoleData",
		Z_Construct_UScriptStruct_FRoleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleData_Statics::PropPointers),
		sizeof(FRoleData),
		alignof(FRoleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRoleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRoleData()
	{
		if (!Z_Registration_Info_UScriptStruct_RoleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RoleData.InnerSingleton, Z_Construct_UScriptStruct_FRoleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RoleData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MUserData;
class UScriptStruct* FMUserData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MUserData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MUserData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMUserData, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("MUserData"));
	}
	return Z_Registration_Info_UScriptStruct_MUserData.OuterSingleton;
}
template<> DEMO_API UScriptStruct* StaticStruct<FMUserData>()
{
	return FMUserData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMUserData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoleData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoleData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateDate_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_CreateDate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMUserData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x94\xa8\xe6\x88\xb7\xe6\x95\xb4\xe4\xbd\x93\xe6\x95\xb0\xe6\x8d\xae*/" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe6\x88\xb7\xe6\x95\xb4\xe4\xbd\x93\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FMUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMUserData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_UserID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\xa8\xe6\x88\xb7ID\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe6\x88\xb7ID" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMUserData, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_UserID_MetaData), Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_UserID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\xa8\xe6\x88\xb7\xe5\x90\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe6\x88\xb7\xe5\x90\x8d" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMUserData, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_UserName_MetaData), Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_UserName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_RoleData_Inner = { "RoleData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoleData, METADATA_PARAMS(0, nullptr) }; // 2242512744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_RoleData_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\xa8\xe6\x88\xb7\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe6\x88\xb7\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_RoleData = { "RoleData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMUserData, RoleData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_RoleData_MetaData), Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_RoleData_MetaData) }; // 2242512744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_CreateDate_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb4\xa6\xe6\x88\xb7\xe5\x88\x9b\xe5\xbb\xba\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb4\xa6\xe6\x88\xb7\xe5\x88\x9b\xe5\xbb\xba\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_CreateDate = { "CreateDate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMUserData, CreateDate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_CreateDate_MetaData), Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_CreateDate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_UserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_RoleData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_RoleData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMUserData_Statics::NewProp_CreateDate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		&NewStructOps,
		"MUserData",
		Z_Construct_UScriptStruct_FMUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMUserData_Statics::PropPointers),
		sizeof(FMUserData),
		alignof(FMUserData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMUserData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMUserData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMUserData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMUserData()
	{
		if (!Z_Registration_Info_UScriptStruct_MUserData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MUserData.InnerSingleton, Z_Construct_UScriptStruct_FMUserData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MUserData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateRoleParams;
class UScriptStruct* FCreateRoleParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateRoleParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateRoleParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateRoleParams, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("CreateRoleParams"));
	}
	return Z_Registration_Info_UScriptStruct_CreateRoleParams.OuterSingleton;
}
template<> DEMO_API UScriptStruct* StaticStruct<FCreateRoleParams>()
{
	return FCreateRoleParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateRoleParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Race_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Race_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Race;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RaceBranch_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RaceBranch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Birth_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Birth_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Birth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Class_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateRoleParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x88\x9b\xe5\xbb\xba\xe8\xa7\x92\xe8\x89\xb2\xe5\x8f\x82\xe6\x95\xb0*/" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe8\xa7\x92\xe8\x89\xb2\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateRoleParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_RoleName_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x8d" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_RoleName = { "RoleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateRoleParams, RoleName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_RoleName_MetaData), Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_RoleName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x80\xa7\xe5\x88\xab\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x80\xa7\xe5\x88\xab" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateRoleParams, Gender), Z_Construct_UEnum_Demo_EGender, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Gender_MetaData), Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Gender_MetaData) }; // 2220833329
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Race_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Race_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\x8d\xe6\x97\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x8d\xe6\x97\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Race = { "Race", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateRoleParams, Race), Z_Construct_UEnum_Demo_ERace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Race_MetaData), Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Race_MetaData) }; // 3957792283
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_RaceBranch_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\x8d\xe6\x97\x8f\xe5\x88\x86\xe6\x94\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x8d\xe6\x97\x8f\xe5\x88\x86\xe6\x94\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_RaceBranch = { "RaceBranch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateRoleParams, RaceBranch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_RaceBranch_MetaData), Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_RaceBranch_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Birth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Birth_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x87\xba\xe8\xba\xab\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x87\xba\xe8\xba\xab" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Birth = { "Birth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateRoleParams, Birth), Z_Construct_UEnum_Demo_EBirth, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Birth_MetaData), Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Birth_MetaData) }; // 3026299245
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Class_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x81\x8c\xe4\xb8\x9a\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x81\x8c\xe4\xb8\x9a" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateRoleParams, Class), Z_Construct_UEnum_Demo_ERoleClass, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Class_MetaData), Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Class_MetaData) }; // 3260658597
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateRoleParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_RoleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Gender_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Gender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Race_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Race,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_RaceBranch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Birth_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Birth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Class_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewProp_Class,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateRoleParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		&NewStructOps,
		"CreateRoleParams",
		Z_Construct_UScriptStruct_FCreateRoleParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateRoleParams_Statics::PropPointers),
		sizeof(FCreateRoleParams),
		alignof(FCreateRoleParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateRoleParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateRoleParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateRoleParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCreateRoleParams()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateRoleParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateRoleParams.InnerSingleton, Z_Construct_UScriptStruct_FCreateRoleParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateRoleParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterData;
class UScriptStruct* FCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterData, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("CharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton;
}
template<> DEMO_API UScriptStruct* StaticStruct<FCharacterData>()
{
	return FCharacterData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Todo Delete\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Todo Delete" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterData>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_MetaData), Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "Public/MGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_MetaData), Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		&NewStructOps,
		"CharacterData",
		Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers),
		sizeof(FCharacterData),
		alignof(FCharacterData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterData()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton, Z_Construct_UScriptStruct_FCharacterData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTypes_h_Statics::ScriptStructInfo[] = {
		{ FMBuffSnapShoot::StaticStruct, Z_Construct_UScriptStruct_FMBuffSnapShoot_Statics::NewStructOps, TEXT("MBuffSnapShoot"), &Z_Registration_Info_UScriptStruct_MBuffSnapShoot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMBuffSnapShoot), 3707411260U) },
		{ FMItemData::StaticStruct, Z_Construct_UScriptStruct_FMItemData_Statics::NewStructOps, TEXT("MItemData"), &Z_Registration_Info_UScriptStruct_MItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMItemData), 3103251345U) },
		{ FMInventoryData::StaticStruct, Z_Construct_UScriptStruct_FMInventoryData_Statics::NewStructOps, TEXT("MInventoryData"), &Z_Registration_Info_UScriptStruct_MInventoryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMInventoryData), 825608403U) },
		{ FRoleData::StaticStruct, Z_Construct_UScriptStruct_FRoleData_Statics::NewStructOps, TEXT("RoleData"), &Z_Registration_Info_UScriptStruct_RoleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoleData), 2242512744U) },
		{ FMUserData::StaticStruct, Z_Construct_UScriptStruct_FMUserData_Statics::NewStructOps, TEXT("MUserData"), &Z_Registration_Info_UScriptStruct_MUserData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMUserData), 2979799603U) },
		{ FCreateRoleParams::StaticStruct, Z_Construct_UScriptStruct_FCreateRoleParams_Statics::NewStructOps, TEXT("CreateRoleParams"), &Z_Registration_Info_UScriptStruct_CreateRoleParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateRoleParams), 864550243U) },
		{ FCharacterData::StaticStruct, Z_Construct_UScriptStruct_FCharacterData_Statics::NewStructOps, TEXT("CharacterData"), &Z_Registration_Info_UScriptStruct_CharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterData), 3385385191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTypes_h_1351391388(TEXT("/Script/Demo"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
