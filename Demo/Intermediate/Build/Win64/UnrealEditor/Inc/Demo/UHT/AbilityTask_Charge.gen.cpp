// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/GameplayAbilitySystem/Abilities/Tasks/AbilityTask_Charge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_Charge() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEMO_API UClass* Z_Construct_UClass_AMCharacter_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UAbilityTask_Charge();
	DEMO_API UClass* Z_Construct_UClass_UAbilityTask_Charge_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(UAbilityTask_Charge::execCreateChargeTask)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_OBJECT(AMCharacter,Z_Param_InCharacterOwner);
		P_GET_STRUCT(FVector,Z_Param_InDestination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_Charge**)Z_Param__Result=UAbilityTask_Charge::CreateChargeTask(Z_Param_OwningAbility,Z_Param_InCharacterOwner,Z_Param_InDestination);
		P_NATIVE_END;
	}
	void UAbilityTask_Charge::StaticRegisterNativesUAbilityTask_Charge()
	{
		UClass* Class = UAbilityTask_Charge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateChargeTask", &UAbilityTask_Charge::execCreateChargeTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics
	{
		struct AbilityTask_Charge_eventCreateChargeTask_Parms
		{
			UGameplayAbility* OwningAbility;
			AMCharacter* InCharacterOwner;
			FVector InDestination;
			UAbilityTask_Charge* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacterOwner;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDestination;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_Charge_eventCreateChargeTask_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::NewProp_InCharacterOwner = { "InCharacterOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_Charge_eventCreateChargeTask_Parms, InCharacterOwner), Z_Construct_UClass_AMCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::NewProp_InDestination = { "InDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_Charge_eventCreateChargeTask_Parms, InDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_Charge_eventCreateChargeTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_Charge_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::NewProp_InCharacterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::NewProp_InDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/Tasks/AbilityTask_Charge.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_Charge, nullptr, "CreateChargeTask", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::AbilityTask_Charge_eventCreateChargeTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::AbilityTask_Charge_eventCreateChargeTask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_Charge);
	UClass* Z_Construct_UClass_UAbilityTask_Charge_NoRegister()
	{
		return UAbilityTask_Charge::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_Charge_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Caster_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Caster;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_Charge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Charge_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_Charge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_Charge_CreateChargeTask, "CreateChargeTask" }, // 456124414
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Charge_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_Charge_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/Abilities/Tasks/AbilityTask_Charge.h" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/Tasks/AbilityTask_Charge.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_Charge_Statics::NewProp_Caster_MetaData[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/Tasks/AbilityTask_Charge.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_Charge_Statics::NewProp_Caster = { "Caster", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_Charge, Caster), Z_Construct_UClass_AMCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Charge_Statics::NewProp_Caster_MetaData), Z_Construct_UClass_UAbilityTask_Charge_Statics::NewProp_Caster_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_Charge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_Charge_Statics::NewProp_Caster,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_Charge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_Charge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_Charge_Statics::ClassParams = {
		&UAbilityTask_Charge::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_Charge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Charge_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Charge_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_Charge_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Charge_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAbilityTask_Charge()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_Charge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_Charge.OuterSingleton, Z_Construct_UClass_UAbilityTask_Charge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_Charge.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UAbilityTask_Charge>()
	{
		return UAbilityTask_Charge::StaticClass();
	}
	UAbilityTask_Charge::UAbilityTask_Charge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_Charge);
	UAbilityTask_Charge::~UAbilityTask_Charge() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_AbilityTask_Charge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_AbilityTask_Charge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_Charge, UAbilityTask_Charge::StaticClass, TEXT("UAbilityTask_Charge"), &Z_Registration_Info_UClass_UAbilityTask_Charge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_Charge), 3529067465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_AbilityTask_Charge_h_2042136442(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_AbilityTask_Charge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_AbilityTask_Charge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
