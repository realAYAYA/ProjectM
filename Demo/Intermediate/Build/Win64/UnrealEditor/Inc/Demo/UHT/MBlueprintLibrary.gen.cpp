// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMBlueprintLibrary();
	DEMO_API UClass* Z_Construct_UClass_UMBlueprintLibrary_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMGameInstance_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMGameTables_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(UMBlueprintLibrary::execGetMGameTables)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMGameTables**)Z_Param__Result=UMBlueprintLibrary::GetMGameTables(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMBlueprintLibrary::execGetMGameInstance)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMGameInstance**)Z_Param__Result=UMBlueprintLibrary::GetMGameInstance(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UMBlueprintLibrary::StaticRegisterNativesUMBlueprintLibrary()
	{
		UClass* Class = UMBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMGameInstance", &UMBlueprintLibrary::execGetMGameInstance },
			{ "GetMGameTables", &UMBlueprintLibrary::execGetMGameTables },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics
	{
		struct MBlueprintLibrary_eventGetMGameInstance_Parms
		{
			const UObject* WorldContextObject;
			UMGameInstance* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBlueprintLibrary_eventGetMGameInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBlueprintLibrary_eventGetMGameInstance_Parms, ReturnValue), Z_Construct_UClass_UMGameInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\xb8\xb8\xe6\x88\x8f\xe5\xae\x9e\xe4\xbe\x8b */" },
#endif
		{ "ModuleRelativePath", "Public/MBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8f\xe5\xae\x9e\xe4\xbe\x8b" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBlueprintLibrary, nullptr, "GetMGameInstance", nullptr, nullptr, Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::MBlueprintLibrary_eventGetMGameInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::MBlueprintLibrary_eventGetMGameInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics
	{
		struct MBlueprintLibrary_eventGetMGameTables_Parms
		{
			const UObject* WorldContextObject;
			UMGameTables* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBlueprintLibrary_eventGetMGameTables_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBlueprintLibrary_eventGetMGameTables_Parms, ReturnValue), Z_Construct_UClass_UMGameTables_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Excel\xe9\x85\x8d\xe7\xbd\xae */" },
#endif
		{ "ModuleRelativePath", "Public/MBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Excel\xe9\x85\x8d\xe7\xbd\xae" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBlueprintLibrary, nullptr, "GetMGameTables", nullptr, nullptr, Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::MBlueprintLibrary_eventGetMGameTables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::MBlueprintLibrary_eventGetMGameTables_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBlueprintLibrary);
	UClass* Z_Construct_UClass_UMBlueprintLibrary_NoRegister()
	{
		return UMBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBlueprintLibrary_GetMGameInstance, "GetMGameInstance" }, // 2817356701
		{ &Z_Construct_UFunction_UMBlueprintLibrary_GetMGameTables, "GetMGameTables" }, // 325494120
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMBlueprintLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/MBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBlueprintLibrary_Statics::ClassParams = {
		&UMBlueprintLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UMBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UMBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMBlueprintLibrary.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UMBlueprintLibrary>()
	{
		return UMBlueprintLibrary::StaticClass();
	}
	UMBlueprintLibrary::UMBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMBlueprintLibrary);
	UMBlueprintLibrary::~UMBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMBlueprintLibrary, UMBlueprintLibrary::StaticClass, TEXT("UMBlueprintLibrary"), &Z_Registration_Info_UClass_UMBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBlueprintLibrary), 554957948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_1990723025(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
