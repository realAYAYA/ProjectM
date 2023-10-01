// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMAttributeSet() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UMAttributeSet();
	DEMO_API UClass* Z_Construct_UClass_UMAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(UMAttributeSet::execOnRep_MaxMoveSpeed)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMoveSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMoveSpeed(Z_Param_Out_OldMaxMoveSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMAttributeSet::execOnRep_CastSpeed)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCastSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CastSpeed(Z_Param_Out_OldCastSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMAttributeSet::execOnRep_MaxRage)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxRage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxRage(Z_Param_Out_OldMaxRage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMAttributeSet::execOnRep_Rage)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldRage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Rage(Z_Param_Out_OldRage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMAttributeSet::execOnRep_MaxEnergy)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxEnergy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxEnergy(Z_Param_Out_OldMaxEnergy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMAttributeSet::execOnRep_Energy)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldEnergy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Energy(Z_Param_Out_OldEnergy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMAttributeSet::execOnRep_MaxMana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMAttributeSet::execOnRep_Mana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMAttributeSet::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHeath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHeath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHeath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHeath);
		P_NATIVE_END;
	}
	void UMAttributeSet::StaticRegisterNativesUMAttributeSet()
	{
		UClass* Class = UMAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_CastSpeed", &UMAttributeSet::execOnRep_CastSpeed },
			{ "OnRep_Energy", &UMAttributeSet::execOnRep_Energy },
			{ "OnRep_Health", &UMAttributeSet::execOnRep_Health },
			{ "OnRep_Mana", &UMAttributeSet::execOnRep_Mana },
			{ "OnRep_MaxEnergy", &UMAttributeSet::execOnRep_MaxEnergy },
			{ "OnRep_MaxHealth", &UMAttributeSet::execOnRep_MaxHealth },
			{ "OnRep_MaxMana", &UMAttributeSet::execOnRep_MaxMana },
			{ "OnRep_MaxMoveSpeed", &UMAttributeSet::execOnRep_MaxMoveSpeed },
			{ "OnRep_MaxRage", &UMAttributeSet::execOnRep_MaxRage },
			{ "OnRep_Rage", &UMAttributeSet::execOnRep_Rage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics
	{
		struct MAttributeSet_eventOnRep_CastSpeed_Parms
		{
			FGameplayAttributeData OldCastSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCastSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldCastSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::NewProp_OldCastSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::NewProp_OldCastSpeed = { "OldCastSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAttributeSet_eventOnRep_CastSpeed_Parms, OldCastSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::NewProp_OldCastSpeed_MetaData), Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::NewProp_OldCastSpeed_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::NewProp_OldCastSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAttributeSet, nullptr, "OnRep_CastSpeed", nullptr, nullptr, Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::MAttributeSet_eventOnRep_CastSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::MAttributeSet_eventOnRep_CastSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics
	{
		struct MAttributeSet_eventOnRep_Energy_Parms
		{
			FGameplayAttributeData OldEnergy;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldEnergy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldEnergy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::NewProp_OldEnergy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::NewProp_OldEnergy = { "OldEnergy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAttributeSet_eventOnRep_Energy_Parms, OldEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::NewProp_OldEnergy_MetaData), Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::NewProp_OldEnergy_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::NewProp_OldEnergy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAttributeSet, nullptr, "OnRep_Energy", nullptr, nullptr, Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::MAttributeSet_eventOnRep_Energy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::MAttributeSet_eventOnRep_Energy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMAttributeSet_OnRep_Energy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAttributeSet_OnRep_Energy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics
	{
		struct MAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHeath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHeath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHeath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::NewProp_OldHeath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::NewProp_OldHeath = { "OldHeath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAttributeSet_eventOnRep_Health_Parms, OldHeath), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::NewProp_OldHeath_MetaData), Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::NewProp_OldHeath_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::NewProp_OldHeath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::MAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::MAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics
	{
		struct MAttributeSet_eventOnRep_Mana_Parms
		{
			FGameplayAttributeData OldMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData), Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::MAttributeSet_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::MAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMAttributeSet_OnRep_Mana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAttributeSet_OnRep_Mana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics
	{
		struct MAttributeSet_eventOnRep_MaxEnergy_Parms
		{
			FGameplayAttributeData OldMaxEnergy;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxEnergy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxEnergy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::NewProp_OldMaxEnergy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::NewProp_OldMaxEnergy = { "OldMaxEnergy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAttributeSet_eventOnRep_MaxEnergy_Parms, OldMaxEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::NewProp_OldMaxEnergy_MetaData), Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::NewProp_OldMaxEnergy_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::NewProp_OldMaxEnergy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAttributeSet, nullptr, "OnRep_MaxEnergy", nullptr, nullptr, Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::MAttributeSet_eventOnRep_MaxEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::MAttributeSet_eventOnRep_MaxEnergy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics
	{
		struct MAttributeSet_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData OldMaxHeath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHeath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHeath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHeath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHeath = { "OldMaxHeath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHeath), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHeath_MetaData), Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHeath_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHeath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::MAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::MAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics
	{
		struct MAttributeSet_eventOnRep_MaxMana_Parms
		{
			FGameplayAttributeData OldMaxMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData), Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::MAttributeSet_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::MAttributeSet_eventOnRep_MaxMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics
	{
		struct MAttributeSet_eventOnRep_MaxMoveSpeed_Parms
		{
			FGameplayAttributeData OldMaxMoveSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMoveSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::NewProp_OldMaxMoveSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::NewProp_OldMaxMoveSpeed = { "OldMaxMoveSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAttributeSet_eventOnRep_MaxMoveSpeed_Parms, OldMaxMoveSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::NewProp_OldMaxMoveSpeed_MetaData), Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::NewProp_OldMaxMoveSpeed_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::NewProp_OldMaxMoveSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAttributeSet, nullptr, "OnRep_MaxMoveSpeed", nullptr, nullptr, Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::MAttributeSet_eventOnRep_MaxMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::MAttributeSet_eventOnRep_MaxMoveSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics
	{
		struct MAttributeSet_eventOnRep_MaxRage_Parms
		{
			FGameplayAttributeData OldMaxRage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxRage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxRage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::NewProp_OldMaxRage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::NewProp_OldMaxRage = { "OldMaxRage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAttributeSet_eventOnRep_MaxRage_Parms, OldMaxRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::NewProp_OldMaxRage_MetaData), Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::NewProp_OldMaxRage_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::NewProp_OldMaxRage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAttributeSet, nullptr, "OnRep_MaxRage", nullptr, nullptr, Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::MAttributeSet_eventOnRep_MaxRage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::MAttributeSet_eventOnRep_MaxRage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics
	{
		struct MAttributeSet_eventOnRep_Rage_Parms
		{
			FGameplayAttributeData OldRage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldRage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldRage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::NewProp_OldRage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::NewProp_OldRage = { "OldRage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAttributeSet_eventOnRep_Rage_Parms, OldRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::NewProp_OldRage_MetaData), Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::NewProp_OldRage_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::NewProp_OldRage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAttributeSet, nullptr, "OnRep_Rage", nullptr, nullptr, Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::MAttributeSet_eventOnRep_Rage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::MAttributeSet_eventOnRep_Rage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMAttributeSet_OnRep_Rage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAttributeSet_OnRep_Rage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMAttributeSet);
	UClass* Z_Construct_UClass_UMAttributeSet_NoRegister()
	{
		return UMAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UMAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Intelligence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Agility_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Agility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spirit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spirit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRecovery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRecovery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealRatio_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HealRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaRecovery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManaRecovery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Energy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxEnergy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnergyRecovery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnergyRecovery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeleeAttackIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangedAttackIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RangedAttackIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MagicIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HealIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CastSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhyCriticalRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhyCriticalRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicCriticalRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MagicCriticalRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArcaneDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArcaneDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrostDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrostDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlameDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlameDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaturalDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NaturalDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DivineDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DivineDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParryRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParryRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DogeRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DogeRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhyResist_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhyResist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArcaneResist_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArcaneResist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrostResist_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrostResist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlameResist_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlameResist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowResist_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowResist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaturalResist_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NaturalResist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DivineResist_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DivineResist;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMAttributeSet_OnRep_CastSpeed, "OnRep_CastSpeed" }, // 4119899097
		{ &Z_Construct_UFunction_UMAttributeSet_OnRep_Energy, "OnRep_Energy" }, // 4087887576
		{ &Z_Construct_UFunction_UMAttributeSet_OnRep_Health, "OnRep_Health" }, // 1232208081
		{ &Z_Construct_UFunction_UMAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 2440304158
		{ &Z_Construct_UFunction_UMAttributeSet_OnRep_MaxEnergy, "OnRep_MaxEnergy" }, // 3627689403
		{ &Z_Construct_UFunction_UMAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 4137297422
		{ &Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 221464939
		{ &Z_Construct_UFunction_UMAttributeSet_OnRep_MaxMoveSpeed, "OnRep_MaxMoveSpeed" }, // 248756782
		{ &Z_Construct_UFunction_UMAttributeSet_OnRep_MaxRage, "OnRep_MaxRage" }, // 2286898486
		{ &Z_Construct_UFunction_UMAttributeSet_OnRep_Rage, "OnRep_Rage" }, // 3890172572
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Strength_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Strength_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Intelligence_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Intelligence = { "Intelligence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, Intelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Intelligence_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Intelligence_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Agility_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Agility = { "Agility", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, Agility), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Agility_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Agility_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Spirit_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Spirit = { "Spirit", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, Spirit), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Spirit_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Spirit_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Stamina_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Stamina_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxMoveSpeed_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxMoveSpeed = { "MaxMoveSpeed", "OnRep_MaxMoveSpeed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, MaxMoveSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxMoveSpeed_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxMoveSpeed_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealthRecovery_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealthRecovery = { "HealthRecovery", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, HealthRecovery), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealthRecovery_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealthRecovery_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealRatio_MetaData[] = {
		{ "Category", "BaseAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb2\xbb\xe7\x96\x97\xe9\x87\x8f\xef\xbc\x8c\xe6\xaf\x94\xe5\xa6\x82\xe8\x87\xb4\xe6\xad\xbb\xe6\x89\x93\xe5\x87\xbb\xe5\x8f\xaf\xe4\xbb\xa5\xe9\x80\xa0\xe6\x88\x90\xe6\xb2\xbb\xe7\x96\x97\xe9\x87\x8f\xe7\x9a\x84\xe5\x87\x8f\xe5\xb0\x91\n" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb2\xbb\xe7\x96\x97\xe9\x87\x8f\xef\xbc\x8c\xe6\xaf\x94\xe5\xa6\x82\xe8\x87\xb4\xe6\xad\xbb\xe6\x89\x93\xe5\x87\xbb\xe5\x8f\xaf\xe4\xbb\xa5\xe9\x80\xa0\xe6\x88\x90\xe6\xb2\xbb\xe7\x96\x97\xe9\x87\x8f\xe7\x9a\x84\xe5\x87\x8f\xe5\xb0\x91" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealRatio = { "HealRatio", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, HealRatio), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealRatio_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealRatio_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Mana_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Mana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxMana_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxMana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ManaRecovery_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ManaRecovery = { "ManaRecovery", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, ManaRecovery), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ManaRecovery_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ManaRecovery_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Energy_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Energy = { "Energy", "OnRep_Energy", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, Energy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Energy_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Energy_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxEnergy = { "MaxEnergy", "OnRep_MaxEnergy", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, MaxEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxEnergy_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxEnergy_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_EnergyRecovery_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_EnergyRecovery = { "EnergyRecovery", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, EnergyRecovery), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_EnergyRecovery_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_EnergyRecovery_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Rage_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Rage = { "Rage", "OnRep_Rage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, Rage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Rage_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Rage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxRage_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxRage = { "MaxRage", "OnRep_MaxRage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, MaxRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxRage_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxRage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MeleeAttackIntensity_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MeleeAttackIntensity = { "MeleeAttackIntensity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, MeleeAttackIntensity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MeleeAttackIntensity_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MeleeAttackIntensity_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_RangedAttackIntensity_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_RangedAttackIntensity = { "RangedAttackIntensity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, RangedAttackIntensity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_RangedAttackIntensity_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_RangedAttackIntensity_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, AttackSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_AttackSpeed_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_AttackSpeed_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MagicIntensity_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MagicIntensity = { "MagicIntensity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, MagicIntensity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MagicIntensity_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MagicIntensity_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealIntensity_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealIntensity = { "HealIntensity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, HealIntensity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealIntensity_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealIntensity_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_CastSpeed_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_CastSpeed = { "CastSpeed", "OnRep_CastSpeed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, CastSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_CastSpeed_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_CastSpeed_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_PhyCriticalRate_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_PhyCriticalRate = { "PhyCriticalRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, PhyCriticalRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_PhyCriticalRate_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_PhyCriticalRate_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MagicCriticalRate_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MagicCriticalRate = { "MagicCriticalRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, MagicCriticalRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MagicCriticalRate_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MagicCriticalRate_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HitRate_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HitRate = { "HitRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, HitRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HitRate_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HitRate_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ArcaneDamage_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ArcaneDamage = { "ArcaneDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, ArcaneDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ArcaneDamage_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ArcaneDamage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FrostDamage_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FrostDamage = { "FrostDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, FrostDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FrostDamage_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FrostDamage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FlameDamage_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FlameDamage = { "FlameDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, FlameDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FlameDamage_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FlameDamage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_NaturalDamage_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_NaturalDamage = { "NaturalDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, NaturalDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_NaturalDamage_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_NaturalDamage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ShadowDamage_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ShadowDamage = { "ShadowDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, ShadowDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ShadowDamage_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ShadowDamage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DivineDamage_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DivineDamage = { "DivineDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, DivineDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DivineDamage_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DivineDamage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Armor_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Armor_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ParryRate_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ParryRate = { "ParryRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, ParryRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ParryRate_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ParryRate_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DogeRate_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DogeRate = { "DogeRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, DogeRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DogeRate_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DogeRate_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_BlockRate_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_BlockRate = { "BlockRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, BlockRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_BlockRate_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_BlockRate_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_PhyResist_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_PhyResist = { "PhyResist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, PhyResist), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_PhyResist_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_PhyResist_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ArcaneResist_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ArcaneResist = { "ArcaneResist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, ArcaneResist), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ArcaneResist_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ArcaneResist_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FrostResist_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FrostResist = { "FrostResist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, FrostResist), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FrostResist_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FrostResist_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FlameResist_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FlameResist = { "FlameResist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, FlameResist), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FlameResist_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FlameResist_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ShadowResist_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ShadowResist = { "ShadowResist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, ShadowResist), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ShadowResist_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ShadowResist_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_NaturalResist_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_NaturalResist = { "NaturalResist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, NaturalResist), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_NaturalResist_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_NaturalResist_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DivineResist_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/AttributeSets/MAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DivineResist = { "DivineResist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAttributeSet, DivineResist), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DivineResist_MetaData), Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DivineResist_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Intelligence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Agility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Spirit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxMoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealthRecovery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ManaRecovery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Energy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxEnergy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_EnergyRecovery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Rage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MaxRage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MeleeAttackIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_RangedAttackIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_AttackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MagicIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HealIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_CastSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_PhyCriticalRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_MagicCriticalRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_HitRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ArcaneDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FrostDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FlameDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_NaturalDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ShadowDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DivineDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_Armor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ParryRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DogeRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_BlockRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_PhyResist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ArcaneResist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FrostResist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_FlameResist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_ShadowResist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_NaturalResist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAttributeSet_Statics::NewProp_DivineResist,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMAttributeSet_Statics::ClassParams = {
		&UMAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UMAttributeSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAttributeSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UMAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMAttributeSet.OuterSingleton, Z_Construct_UClass_UMAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMAttributeSet.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UMAttributeSet>()
	{
		return UMAttributeSet::StaticClass();
	}

	void UMAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MaxMoveSpeed(TEXT("MaxMoveSpeed"));
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_MaxMana(TEXT("MaxMana"));
		static const FName Name_Energy(TEXT("Energy"));
		static const FName Name_MaxEnergy(TEXT("MaxEnergy"));
		static const FName Name_Rage(TEXT("Rage"));
		static const FName Name_MaxRage(TEXT("MaxRage"));
		static const FName Name_CastSpeed(TEXT("CastSpeed"));

		const bool bIsValid = true
			&& Name_MaxMoveSpeed == ClassReps[(int32)ENetFields_Private::MaxMoveSpeed].Property->GetFName()
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
			&& Name_Energy == ClassReps[(int32)ENetFields_Private::Energy].Property->GetFName()
			&& Name_MaxEnergy == ClassReps[(int32)ENetFields_Private::MaxEnergy].Property->GetFName()
			&& Name_Rage == ClassReps[(int32)ENetFields_Private::Rage].Property->GetFName()
			&& Name_MaxRage == ClassReps[(int32)ENetFields_Private::MaxRage].Property->GetFName()
			&& Name_CastSpeed == ClassReps[(int32)ENetFields_Private::CastSpeed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMAttributeSet"));
	}
	UMAttributeSet::UMAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMAttributeSet);
	UMAttributeSet::~UMAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMAttributeSet, UMAttributeSet::StaticClass, TEXT("UMAttributeSet"), &Z_Registration_Info_UClass_UMAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMAttributeSet), 2146027038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_2368275444(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
