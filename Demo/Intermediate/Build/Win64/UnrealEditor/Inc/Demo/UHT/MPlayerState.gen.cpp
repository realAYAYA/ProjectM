// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MPlayerState.h"
#include "Public/MGameTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPlayerState() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_AMPlayerState();
	DEMO_API UClass* Z_Construct_UClass_AMPlayerState_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FMUserData();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(AMPlayerState::execGetRoleNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRoleNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPlayerState::execIsOnline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOnline();
		P_NATIVE_END;
	}
	void AMPlayerState::StaticRegisterNativesAMPlayerState()
	{
		UClass* Class = AMPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRoleNum", &AMPlayerState::execGetRoleNum },
			{ "IsOnline", &AMPlayerState::execIsOnline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMPlayerState_GetRoleNum_Statics
	{
		struct MPlayerState_eventGetRoleNum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMPlayerState_GetRoleNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPlayerState_eventGetRoleNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPlayerState_GetRoleNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerState_GetRoleNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerState_GetRoleNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/MPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPlayerState_GetRoleNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPlayerState, nullptr, "GetRoleNum", nullptr, nullptr, Z_Construct_UFunction_AMPlayerState_GetRoleNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerState_GetRoleNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMPlayerState_GetRoleNum_Statics::MPlayerState_eventGetRoleNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerState_GetRoleNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPlayerState_GetRoleNum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerState_GetRoleNum_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMPlayerState_GetRoleNum_Statics::MPlayerState_eventGetRoleNum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMPlayerState_GetRoleNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPlayerState_GetRoleNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPlayerState_IsOnline_Statics
	{
		struct MPlayerState_eventIsOnline_Parms
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
	void Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MPlayerState_eventIsOnline_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MPlayerState_eventIsOnline_Parms), &Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/MPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPlayerState, nullptr, "IsOnline", nullptr, nullptr, Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::MPlayerState_eventIsOnline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::MPlayerState_eventIsOnline_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMPlayerState_IsOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPlayerState_IsOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMPlayerState);
	UClass* Z_Construct_UClass_AMPlayerState_NoRegister()
	{
		return AMPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMPlayerState_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryModule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryModule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMPlayerState_GetRoleNum, "GetRoleNum" }, // 602303719
		{ &Z_Construct_UFunction_AMPlayerState_IsOnline, "IsOnline" }, // 392446346
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPlayerState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MPlayerState.h" },
		{ "ModuleRelativePath", "Public/MPlayerState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Steam, Epic, PS4 : ID, to show\n" },
#endif
		{ "ModuleRelativePath", "Public/MPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steam, Epic, PS4 : ID, to show" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMPlayerState, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserID_MetaData), Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Steam, Epic, PS4 : Name, to show\n" },
#endif
		{ "ModuleRelativePath", "Public/MPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steam, Epic, PS4 : Name, to show" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMPlayerState, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserName_MetaData), Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPlayerState_Statics::NewProp_InventoryModule_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/MPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPlayerState_Statics::NewProp_InventoryModule = { "InventoryModule", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMPlayerState, InventoryModule), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerState_Statics::NewProp_InventoryModule_MetaData), Z_Construct_UClass_AMPlayerState_Statics::NewProp_InventoryModule_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMPlayerState, UserData), Z_Construct_UScriptStruct_FMUserData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserData_MetaData), Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserData_MetaData) }; // 2979799603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPlayerState_Statics::NewProp_InventoryModule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPlayerState_Statics::NewProp_UserData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPlayerState_Statics::ClassParams = {
		&AMPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMPlayerState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMPlayerState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMPlayerState()
	{
		if (!Z_Registration_Info_UClass_AMPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPlayerState.OuterSingleton, Z_Construct_UClass_AMPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMPlayerState.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<AMPlayerState>()
	{
		return AMPlayerState::StaticClass();
	}

	void AMPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_UserID(TEXT("UserID"));
		static const FName Name_UserName(TEXT("UserName"));

		const bool bIsValid = true
			&& Name_UserID == ClassReps[(int32)ENetFields_Private::UserID].Property->GetFName()
			&& Name_UserName == ClassReps[(int32)ENetFields_Private::UserName].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMPlayerState);
	AMPlayerState::~AMPlayerState() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMPlayerState, AMPlayerState::StaticClass, TEXT("AMPlayerState"), &Z_Registration_Info_UClass_AMPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPlayerState), 1081122801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MPlayerState_h_3689543127(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
