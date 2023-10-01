// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/Net/RpcObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpcObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DEMO_API UClass* Z_Construct_UClass_URpcObject();
	DEMO_API UClass* Z_Construct_UClass_URpcObject_NoRegister();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void URpcObject::StaticRegisterNativesURpcObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpcObject);
	UClass* Z_Construct_UClass_URpcObject_NoRegister()
	{
		return URpcObject::StaticClass();
	}
	struct Z_Construct_UClass_URpcObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_RpcManager_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RpcManager_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RpcManager_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RpcManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URpcObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpcObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpcObject_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Net/RpcObject.h" },
		{ "ModuleRelativePath", "Private/Net/RpcObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URpcObject_Statics::NewProp_RpcManager_ValueProp = { "RpcManager", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UDelegateFunction_Demo_OnRpcResult__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3264376367
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URpcObject_Statics::NewProp_RpcManager_Key_KeyProp = { "RpcManager_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpcObject_Statics::NewProp_RpcManager_MetaData[] = {
		{ "ModuleRelativePath", "Private/Net/RpcObject.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URpcObject_Statics::NewProp_RpcManager = { "RpcManager", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpcObject, RpcManager), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpcObject_Statics::NewProp_RpcManager_MetaData), Z_Construct_UClass_URpcObject_Statics::NewProp_RpcManager_MetaData) }; // 3264376367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URpcObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpcObject_Statics::NewProp_RpcManager_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpcObject_Statics::NewProp_RpcManager_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpcObject_Statics::NewProp_RpcManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URpcObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpcObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URpcObject_Statics::ClassParams = {
		&URpcObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URpcObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URpcObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpcObject_Statics::Class_MetaDataParams), Z_Construct_UClass_URpcObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpcObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URpcObject()
	{
		if (!Z_Registration_Info_UClass_URpcObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpcObject.OuterSingleton, Z_Construct_UClass_URpcObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URpcObject.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<URpcObject>()
	{
		return URpcObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URpcObject);
	URpcObject::~URpcObject() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Net_RpcObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Net_RpcObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URpcObject, URpcObject::StaticClass, TEXT("URpcObject"), &Z_Registration_Info_UClass_URpcObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpcObject), 3925759955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Net_RpcObject_h_490065082(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Net_RpcObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Net_RpcObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
