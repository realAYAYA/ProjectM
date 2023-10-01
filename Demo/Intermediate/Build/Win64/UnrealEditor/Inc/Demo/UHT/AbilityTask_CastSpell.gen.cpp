// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/GameplayAbilitySystem/Abilities/Tasks/AbilityTask_CastSpell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_CastSpell() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_AMCharacter_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UAbilityTask_CastSpell();
	DEMO_API UClass* Z_Construct_UClass_UAbilityTask_CastSpell_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(UAbilityTask_CastSpell::execCreateCastSpellTask)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_OBJECT(AMCharacter,Z_Param_InCharacterOwner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InCastTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_CastSpell**)Z_Param__Result=UAbilityTask_CastSpell::CreateCastSpellTask(Z_Param_OwningAbility,Z_Param_InCharacterOwner,Z_Param_InCastTime);
		P_NATIVE_END;
	}
	void UAbilityTask_CastSpell::StaticRegisterNativesUAbilityTask_CastSpell()
	{
		UClass* Class = UAbilityTask_CastSpell::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateCastSpellTask", &UAbilityTask_CastSpell::execCreateCastSpellTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics
	{
		struct AbilityTask_CastSpell_eventCreateCastSpellTask_Parms
		{
			UGameplayAbility* OwningAbility;
			AMCharacter* InCharacterOwner;
			float InCastTime;
			UAbilityTask_CastSpell* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacterOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCastTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InCastTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_CastSpell_eventCreateCastSpellTask_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::NewProp_InCharacterOwner = { "InCharacterOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_CastSpell_eventCreateCastSpellTask_Parms, InCharacterOwner), Z_Construct_UClass_AMCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::NewProp_InCastTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::NewProp_InCastTime = { "InCastTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_CastSpell_eventCreateCastSpellTask_Parms, InCastTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::NewProp_InCastTime_MetaData), Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::NewProp_InCastTime_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_CastSpell_eventCreateCastSpellTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_CastSpell_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::NewProp_InCharacterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::NewProp_InCastTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/Tasks/AbilityTask_CastSpell.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_CastSpell, nullptr, "CreateCastSpellTask", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::AbilityTask_CastSpell_eventCreateCastSpellTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::AbilityTask_CastSpell_eventCreateCastSpellTask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_CastSpell);
	UClass* Z_Construct_UClass_UAbilityTask_CastSpell_NoRegister()
	{
		return UAbilityTask_CastSpell::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_CastSpell_Statics
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
	UObject* (*const Z_Construct_UClass_UAbilityTask_CastSpell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_CastSpell_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_CastSpell_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_CastSpell_CreateCastSpellTask, "CreateCastSpellTask" }, // 2846654859
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_CastSpell_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_CastSpell_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/Abilities/Tasks/AbilityTask_CastSpell.h" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/Tasks/AbilityTask_CastSpell.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_CastSpell_Statics::NewProp_Caster_MetaData[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/Tasks/AbilityTask_CastSpell.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_CastSpell_Statics::NewProp_Caster = { "Caster", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_CastSpell, Caster), Z_Construct_UClass_AMCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_CastSpell_Statics::NewProp_Caster_MetaData), Z_Construct_UClass_UAbilityTask_CastSpell_Statics::NewProp_Caster_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_CastSpell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_CastSpell_Statics::NewProp_Caster,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_CastSpell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_CastSpell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_CastSpell_Statics::ClassParams = {
		&UAbilityTask_CastSpell::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_CastSpell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_CastSpell_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_CastSpell_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_CastSpell_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_CastSpell_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAbilityTask_CastSpell()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_CastSpell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_CastSpell.OuterSingleton, Z_Construct_UClass_UAbilityTask_CastSpell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_CastSpell.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UAbilityTask_CastSpell>()
	{
		return UAbilityTask_CastSpell::StaticClass();
	}
	UAbilityTask_CastSpell::UAbilityTask_CastSpell(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_CastSpell);
	UAbilityTask_CastSpell::~UAbilityTask_CastSpell() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_AbilityTask_CastSpell_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_AbilityTask_CastSpell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_CastSpell, UAbilityTask_CastSpell::StaticClass, TEXT("UAbilityTask_CastSpell"), &Z_Registration_Info_UClass_UAbilityTask_CastSpell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_CastSpell), 2181768103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_AbilityTask_CastSpell_h_3603915624(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_AbilityTask_CastSpell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_Tasks_AbilityTask_CastSpell_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
