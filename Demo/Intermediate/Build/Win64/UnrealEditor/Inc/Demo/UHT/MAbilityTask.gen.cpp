// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/GameplayAbilitySystem/Abilities/Tasks/MAbilityTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMAbilityTask() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UMAbilityTask();
	DEMO_API UClass* Z_Construct_UClass_UMAbilityTask_NoRegister();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnAbilityCancel__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnAbilityEnd__DelegateSignature();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Demo_OnAbilityEnd__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnAbilityEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/Tasks/MAbilityTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnAbilityEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnAbilityEnd__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnAbilityEnd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnAbilityEnd__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_Demo_OnAbilityEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnAbilityEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAbilityEnd_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityEnd)
{
	OnAbilityEnd.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_Demo_OnAbilityCancel__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnAbilityCancel__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/Tasks/MAbilityTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnAbilityCancel__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnAbilityCancel__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnAbilityCancel__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnAbilityCancel__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_Demo_OnAbilityCancel__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnAbilityCancel__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAbilityCancel_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityCancel)
{
	OnAbilityCancel.ProcessMulticastDelegate<UObject>(NULL);
}
	void UMAbilityTask::StaticRegisterNativesUMAbilityTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMAbilityTask);
	UClass* Z_Construct_UClass_UMAbilityTask_NoRegister()
	{
		return UMAbilityTask::StaticClass();
	}
	struct Z_Construct_UClass_UMAbilityTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityTaskEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityTaskEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityCancel_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityCancel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMAbilityTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAbilityTask_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAbilityTask_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/Abilities/Tasks/MAbilityTask.h" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/Tasks/MAbilityTask.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAbilityTask_Statics::NewProp_OnAbilityTaskEnd_MetaData[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/Tasks/MAbilityTask.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMAbilityTask_Statics::NewProp_OnAbilityTaskEnd = { "OnAbilityTaskEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAbilityTask, OnAbilityTaskEnd), Z_Construct_UDelegateFunction_Demo_OnAbilityEnd__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAbilityTask_Statics::NewProp_OnAbilityTaskEnd_MetaData), Z_Construct_UClass_UMAbilityTask_Statics::NewProp_OnAbilityTaskEnd_MetaData) }; // 3510770684
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAbilityTask_Statics::NewProp_OnAbilityCancel_MetaData[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/Tasks/MAbilityTask.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMAbilityTask_Statics::NewProp_OnAbilityCancel = { "OnAbilityCancel", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAbilityTask, OnAbilityCancel), Z_Construct_UDelegateFunction_Demo_OnAbilityEnd__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAbilityTask_Statics::NewProp_OnAbilityCancel_MetaData), Z_Construct_UClass_UMAbilityTask_Statics::NewProp_OnAbilityCancel_MetaData) }; // 3510770684
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMAbilityTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAbilityTask_Statics::NewProp_OnAbilityTaskEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAbilityTask_Statics::NewProp_OnAbilityCancel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMAbilityTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMAbilityTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMAbilityTask_Statics::ClassParams = {
		&UMAbilityTask::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMAbilityTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMAbilityTask_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAbilityTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UMAbilityTask_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAbilityTask_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMAbilityTask()
	{
		if (!Z_Registration_Info_UClass_UMAbilityTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMAbilityTask.OuterSingleton, Z_Construct_UClass_UMAbilityTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMAbilityTask.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UMAbilityTask>()
	{
		return UMAbilityTask::StaticClass();
	}
	UMAbilityTask::UMAbilityTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMAbilityTask);
	UMAbilityTask::~UMAbilityTask() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_MAbilityTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_MAbilityTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMAbilityTask, UMAbilityTask::StaticClass, TEXT("UMAbilityTask"), &Z_Registration_Info_UClass_UMAbilityTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMAbilityTask), 4147100566U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_MAbilityTask_h_2702688387(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_MAbilityTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_MAbilityTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
