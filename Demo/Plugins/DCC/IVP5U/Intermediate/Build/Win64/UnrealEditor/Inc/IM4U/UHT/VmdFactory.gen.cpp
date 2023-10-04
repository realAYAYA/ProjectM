// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IM4U/Classes/Factory/VmdFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVmdFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	IM4U_API UClass* Z_Construct_UClass_UVmdFactory();
	IM4U_API UClass* Z_Construct_UClass_UVmdFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_IM4U();
// End Cross Module References
	DEFINE_FUNCTION(UVmdFactory::execImportVmdFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVmdFactory::ImportVmdFromFile(Z_Param_file,Z_Param_SkeletalMesh);
		P_NATIVE_END;
	}
	void UVmdFactory::StaticRegisterNativesUVmdFactory()
	{
		UClass* Class = UVmdFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ImportVmdFromFile", &UVmdFactory::execImportVmdFromFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics
	{
		struct VmdFactory_eventImportVmdFromFile_Parms
		{
			FString file;
			USkeletalMesh* SkeletalMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_file;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VmdFactory_eventImportVmdFromFile_Parms, file), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VmdFactory_eventImportVmdFromFile_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VmdFactory_eventImportVmdFromFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VmdFactory_eventImportVmdFromFile_Parms), &Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::NewProp_file,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "im4u" },
		{ "ModuleRelativePath", "Classes/Factory/VmdFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVmdFactory, nullptr, "ImportVmdFromFile", nullptr, nullptr, Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::VmdFactory_eventImportVmdFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::VmdFactory_eventImportVmdFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVmdFactory);
	UClass* Z_Construct_UClass_UVmdFactory_NoRegister()
	{
		return UVmdFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVmdFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVmdFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_IM4U,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVmdFactory_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVmdFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVmdFactory_ImportVmdFromFile, "ImportVmdFromFile" }, // 2071550077
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVmdFactory_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVmdFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factory/VmdFactory.h" },
		{ "ModuleRelativePath", "Classes/Factory/VmdFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVmdFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVmdFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVmdFactory_Statics::ClassParams = {
		&UVmdFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVmdFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVmdFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVmdFactory()
	{
		if (!Z_Registration_Info_UClass_UVmdFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVmdFactory.OuterSingleton, Z_Construct_UClass_UVmdFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVmdFactory.OuterSingleton;
	}
	template<> IM4U_API UClass* StaticClass<UVmdFactory>()
	{
		return UVmdFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVmdFactory);
	UVmdFactory::~UVmdFactory() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_Factory_VmdFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_Factory_VmdFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVmdFactory, UVmdFactory::StaticClass, TEXT("UVmdFactory"), &Z_Registration_Info_UClass_UVmdFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVmdFactory), 151561845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_Factory_VmdFactory_h_622157422(TEXT("/Script/IM4U"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_Factory_VmdFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_Factory_VmdFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
