// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/Inventory/Actors/MGearActor.h"
#include "GameplayAbilitySpecHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMGearActor() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_AItemActor();
	DEMO_API UClass* Z_Construct_UClass_AMGearActor();
	DEMO_API UClass* Z_Construct_UClass_AMGearActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(AMGearActor::execOnUnEquipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnEquipped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMGearActor::execOnEquipped)
	{
		P_GET_OBJECT(AActor,Z_Param_InOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquipped(Z_Param_InOwner);
		P_NATIVE_END;
	}
	void AMGearActor::StaticRegisterNativesAMGearActor()
	{
		UClass* Class = AMGearActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEquipped", &AMGearActor::execOnEquipped },
			{ "OnUnEquipped", &AMGearActor::execOnUnEquipped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMGearActor_OnEquipped_Statics
	{
		struct MGearActor_eventOnEquipped_Parms
		{
			AActor* InOwner;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMGearActor_OnEquipped_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGearActor_eventOnEquipped_Parms, InOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMGearActor_OnEquipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMGearActor_OnEquipped_Statics::NewProp_InOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMGearActor_OnEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Inventory/Actors/MGearActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMGearActor_OnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMGearActor, nullptr, "OnEquipped", nullptr, nullptr, Z_Construct_UFunction_AMGearActor_OnEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMGearActor_OnEquipped_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMGearActor_OnEquipped_Statics::MGearActor_eventOnEquipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMGearActor_OnEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMGearActor_OnEquipped_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMGearActor_OnEquipped_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMGearActor_OnEquipped_Statics::MGearActor_eventOnEquipped_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMGearActor_OnEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMGearActor_OnEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMGearActor_OnUnEquipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMGearActor_OnUnEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Inventory/Actors/MGearActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMGearActor_OnUnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMGearActor, nullptr, "OnUnEquipped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMGearActor_OnUnEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMGearActor_OnUnEquipped_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMGearActor_OnUnEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMGearActor_OnUnEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMGearActor);
	UClass* Z_Construct_UClass_AMGearActor_NoRegister()
	{
		return AMGearActor::StaticClass();
	}
	struct Z_Construct_UClass_AMGearActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilitySpecHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilitySpecHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilitySpecHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMGearActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItemActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMGearActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMGearActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMGearActor_OnEquipped, "OnEquipped" }, // 1292914965
		{ &Z_Construct_UFunction_AMGearActor_OnUnEquipped, "OnUnEquipped" }, // 242855863
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMGearActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMGearActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Inventory/Actors/MGearActor.h" },
		{ "ModuleRelativePath", "Private/Inventory/Actors/MGearActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMGearActor_Statics::NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "ATest" },
		{ "ModuleRelativePath", "Private/Inventory/Actors/MGearActor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMGearActor_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMGearActor, AttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMGearActor_Statics::NewProp_AttachSocketName_MetaData), Z_Construct_UClass_AMGearActor_Statics::NewProp_AttachSocketName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMGearActor_Statics::NewProp_GrantedAbilitySpecHandles_Inner = { "GrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMGearActor_Statics::NewProp_GrantedAbilitySpecHandles_MetaData[] = {
		{ "ModuleRelativePath", "Private/Inventory/Actors/MGearActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMGearActor_Statics::NewProp_GrantedAbilitySpecHandles = { "GrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMGearActor, GrantedAbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMGearActor_Statics::NewProp_GrantedAbilitySpecHandles_MetaData), Z_Construct_UClass_AMGearActor_Statics::NewProp_GrantedAbilitySpecHandles_MetaData) }; // 839298412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMGearActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMGearActor_Statics::NewProp_AttachSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMGearActor_Statics::NewProp_GrantedAbilitySpecHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMGearActor_Statics::NewProp_GrantedAbilitySpecHandles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMGearActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMGearActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMGearActor_Statics::ClassParams = {
		&AMGearActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMGearActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMGearActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMGearActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMGearActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMGearActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMGearActor()
	{
		if (!Z_Registration_Info_UClass_AMGearActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMGearActor.OuterSingleton, Z_Construct_UClass_AMGearActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMGearActor.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<AMGearActor>()
	{
		return AMGearActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMGearActor);
	AMGearActor::~AMGearActor() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMGearActor, AMGearActor::StaticClass, TEXT("AMGearActor"), &Z_Registration_Info_UClass_AMGearActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMGearActor), 1020412551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_1277640807(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
