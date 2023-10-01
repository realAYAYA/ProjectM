// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/UI/HyperlinkRichTextBlockDecorator.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHyperlinkRichTextBlockDecorator() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UMRichTextBlockDecorator();
	DEMO_API UClass* Z_Construct_UClass_UMRichTextBlockDecorator_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FHyperlinkStyle();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(UMRichTextBlockDecorator::execPreStyle)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_MetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreStyle_Implementation(Z_Param_Out_MetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRichTextBlockDecorator::execOnClick)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_MetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClick_Implementation(Z_Param_Out_MetaData);
		P_NATIVE_END;
	}
	struct MRichTextBlockDecorator_eventOnClick_Parms
	{
		TMap<FString,FString> MetaData;
	};
	struct MRichTextBlockDecorator_eventPreStyle_Parms
	{
		TMap<FString,FString> MetaData;
	};
	static FName NAME_UMRichTextBlockDecorator_OnClick = FName(TEXT("OnClick"));
	void UMRichTextBlockDecorator::OnClick(TMap<FString,FString> const& MetaData)
	{
		MRichTextBlockDecorator_eventOnClick_Parms Parms;
		Parms.MetaData=MetaData;
		ProcessEvent(FindFunctionChecked(NAME_UMRichTextBlockDecorator_OnClick),&Parms);
	}
	static FName NAME_UMRichTextBlockDecorator_PreStyle = FName(TEXT("PreStyle"));
	void UMRichTextBlockDecorator::PreStyle(TMap<FString,FString> const& MetaData)
	{
		MRichTextBlockDecorator_eventPreStyle_Parms Parms;
		Parms.MetaData=MetaData;
		ProcessEvent(FindFunctionChecked(NAME_UMRichTextBlockDecorator_PreStyle),&Parms);
	}
	void UMRichTextBlockDecorator::StaticRegisterNativesUMRichTextBlockDecorator()
	{
		UClass* Class = UMRichTextBlockDecorator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClick", &UMRichTextBlockDecorator::execOnClick },
			{ "PreStyle", &UMRichTextBlockDecorator::execPreStyle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::NewProp_MetaData_ValueProp = { "MetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::NewProp_MetaData_Key_KeyProp = { "MetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::NewProp_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRichTextBlockDecorator_eventOnClick_Parms, MetaData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::NewProp_MetaData_MetaData), Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::NewProp_MetaData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::NewProp_MetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::NewProp_MetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::NewProp_MetaData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/UI/HyperlinkRichTextBlockDecorator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRichTextBlockDecorator, nullptr, "OnClick", nullptr, nullptr, Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::PropPointers), sizeof(MRichTextBlockDecorator_eventOnClick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::PropPointers) < 2048);
	static_assert(sizeof(MRichTextBlockDecorator_eventOnClick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::NewProp_MetaData_ValueProp = { "MetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::NewProp_MetaData_Key_KeyProp = { "MetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::NewProp_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRichTextBlockDecorator_eventPreStyle_Parms, MetaData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::NewProp_MetaData_MetaData), Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::NewProp_MetaData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::NewProp_MetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::NewProp_MetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::NewProp_MetaData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/UI/HyperlinkRichTextBlockDecorator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRichTextBlockDecorator, nullptr, "PreStyle", nullptr, nullptr, Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::PropPointers), sizeof(MRichTextBlockDecorator_eventPreStyle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::PropPointers) < 2048);
	static_assert(sizeof(MRichTextBlockDecorator_eventPreStyle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMRichTextBlockDecorator);
	UClass* Z_Construct_UClass_UMRichTextBlockDecorator_NoRegister()
	{
		return UMRichTextBlockDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UMRichTextBlockDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Style;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRichTextBlockDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRichTextBlockDecorator_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMRichTextBlockDecorator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRichTextBlockDecorator_OnClick, "OnClick" }, // 3775614002
		{ &Z_Construct_UFunction_UMRichTextBlockDecorator_PreStyle, "PreStyle" }, // 924515112
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRichTextBlockDecorator_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRichTextBlockDecorator_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/HyperlinkRichTextBlockDecorator.h" },
		{ "ModuleRelativePath", "Public/UI/HyperlinkRichTextBlockDecorator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRichTextBlockDecorator_Statics::NewProp_Style_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/UI/HyperlinkRichTextBlockDecorator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMRichTextBlockDecorator_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRichTextBlockDecorator, Style), Z_Construct_UScriptStruct_FHyperlinkStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRichTextBlockDecorator_Statics::NewProp_Style_MetaData), Z_Construct_UClass_UMRichTextBlockDecorator_Statics::NewProp_Style_MetaData) }; // 4058886374
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRichTextBlockDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRichTextBlockDecorator_Statics::NewProp_Style,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRichTextBlockDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRichTextBlockDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRichTextBlockDecorator_Statics::ClassParams = {
		&UMRichTextBlockDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMRichTextBlockDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMRichTextBlockDecorator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRichTextBlockDecorator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRichTextBlockDecorator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRichTextBlockDecorator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMRichTextBlockDecorator()
	{
		if (!Z_Registration_Info_UClass_UMRichTextBlockDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRichTextBlockDecorator.OuterSingleton, Z_Construct_UClass_UMRichTextBlockDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMRichTextBlockDecorator.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UMRichTextBlockDecorator>()
	{
		return UMRichTextBlockDecorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRichTextBlockDecorator);
	UMRichTextBlockDecorator::~UMRichTextBlockDecorator() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_UI_HyperlinkRichTextBlockDecorator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_UI_HyperlinkRichTextBlockDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMRichTextBlockDecorator, UMRichTextBlockDecorator::StaticClass, TEXT("UMRichTextBlockDecorator"), &Z_Registration_Info_UClass_UMRichTextBlockDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRichTextBlockDecorator), 2872875677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_UI_HyperlinkRichTextBlockDecorator_h_1561526107(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_UI_HyperlinkRichTextBlockDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_UI_HyperlinkRichTextBlockDecorator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
