// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/Characters/MCharacter.h"
#include "GameplayTagContainer.h"
#include "Public/MGameTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCharacter() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_AMCharacter();
	DEMO_API UClass* Z_Construct_UClass_AMCharacter_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_AMPlayerController_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_AMPlayerState_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMAbilitySystemComponent_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMAttributeSet_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMCharacterDataAsset_NoRegister();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EActivateFailCode();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnRoleNameChanged_Parms
		{
			FString InName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnRoleNameChanged_Parms, InName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnRoleNameChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature_Statics::_Script_Demo_eventOnRoleNameChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature_Statics::_Script_Demo_eventOnRoleNameChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRoleNameChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRoleNameChanged, const FString& InName)
{
	struct _Script_Demo_eventOnRoleNameChanged_Parms
	{
		FString InName;
	};
	_Script_Demo_eventOnRoleNameChanged_Parms Parms;
	Parms.InName=InName;
	OnRoleNameChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnCurrentChanged_Parms
		{
			AMCharacter* Target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnCurrentChanged_Parms, Target), Z_Construct_UClass_AMCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnCurrentChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature_Statics::_Script_Demo_eventOnCurrentChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature_Statics::_Script_Demo_eventOnCurrentChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCurrentChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentChanged, AMCharacter* Target)
{
	struct _Script_Demo_eventOnCurrentChanged_Parms
	{
		AMCharacter* Target;
	};
	_Script_Demo_eventOnCurrentChanged_Parms Parms;
	Parms.Target=Target;
	OnCurrentChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnMoveInput_Parms
		{
			float X;
			float Y;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnMoveInput_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnMoveInput_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::NewProp_Y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnMoveInput__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::_Script_Demo_eventOnMoveInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::_Script_Demo_eventOnMoveInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMoveInput_DelegateWrapper(const FMulticastScriptDelegate& OnMoveInput, float X, float Y)
{
	struct _Script_Demo_eventOnMoveInput_Parms
	{
		float X;
		float Y;
	};
	_Script_Demo_eventOnMoveInput_Parms Parms;
	Parms.X=X;
	Parms.Y=Y;
	OnMoveInput.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnLookInput_Parms
		{
			float X;
			float Y;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnLookInput_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnLookInput_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::NewProp_Y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnLookInput__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::_Script_Demo_eventOnLookInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::_Script_Demo_eventOnLookInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLookInput_DelegateWrapper(const FMulticastScriptDelegate& OnLookInput, float X, float Y)
{
	struct _Script_Demo_eventOnLookInput_Parms
	{
		float X;
		float Y;
	};
	_Script_Demo_eventOnLookInput_Parms Parms;
	Parms.X=X;
	Parms.Y=Y;
	OnLookInput.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnJumpInput_Parms
		{
			float V;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnJumpInput_Parms, V), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature_Statics::NewProp_V,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnJumpInput__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature_Statics::_Script_Demo_eventOnJumpInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature_Statics::_Script_Demo_eventOnJumpInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnJumpInput_DelegateWrapper(const FMulticastScriptDelegate& OnJumpInput, float V)
{
	struct _Script_Demo_eventOnJumpInput_Parms
	{
		float V;
	};
	_Script_Demo_eventOnJumpInput_Parms Parms;
	Parms.V=V;
	OnJumpInput.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnHealthChanged_Parms
		{
			float V;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnHealthChanged_Parms, V), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature_Statics::NewProp_V,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnHealthChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature_Statics::_Script_Demo_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature_Statics::_Script_Demo_eventOnHealthChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float V)
{
	struct _Script_Demo_eventOnHealthChanged_Parms
	{
		float V;
	};
	_Script_Demo_eventOnHealthChanged_Parms Parms;
	Parms.V=V;
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnMaxHealthChanged_Parms
		{
			float V;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnMaxHealthChanged_Parms, V), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature_Statics::NewProp_V,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnMaxHealthChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature_Statics::_Script_Demo_eventOnMaxHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature_Statics::_Script_Demo_eventOnMaxHealthChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMaxHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMaxHealthChanged, float V)
{
	struct _Script_Demo_eventOnMaxHealthChanged_Parms
	{
		float V;
	};
	_Script_Demo_eventOnMaxHealthChanged_Parms Parms;
	Parms.V=V;
	OnMaxHealthChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnManaChanged_Parms
		{
			float V;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnManaChanged_Parms, V), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature_Statics::NewProp_V,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnManaChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature_Statics::_Script_Demo_eventOnManaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature_Statics::_Script_Demo_eventOnManaChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnManaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnManaChanged, float V)
{
	struct _Script_Demo_eventOnManaChanged_Parms
	{
		float V;
	};
	_Script_Demo_eventOnManaChanged_Parms Parms;
	Parms.V=V;
	OnManaChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnMaxManaChanged_Parms
		{
			float V;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnMaxManaChanged_Parms, V), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature_Statics::NewProp_V,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnMaxManaChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature_Statics::_Script_Demo_eventOnMaxManaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature_Statics::_Script_Demo_eventOnMaxManaChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMaxManaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMaxManaChanged, float V)
{
	struct _Script_Demo_eventOnMaxManaChanged_Parms
	{
		float V;
	};
	_Script_Demo_eventOnMaxManaChanged_Parms Parms;
	Parms.V=V;
	OnMaxManaChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnRageChanged_Parms
		{
			float V;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnRageChanged_Parms, V), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature_Statics::NewProp_V,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnRageChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature_Statics::_Script_Demo_eventOnRageChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature_Statics::_Script_Demo_eventOnRageChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRageChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRageChanged, float V)
{
	struct _Script_Demo_eventOnRageChanged_Parms
	{
		float V;
	};
	_Script_Demo_eventOnRageChanged_Parms Parms;
	Parms.V=V;
	OnRageChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnMaxRageChanged_Parms
		{
			float V;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnMaxRageChanged_Parms, V), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature_Statics::NewProp_V,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnMaxRageChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature_Statics::_Script_Demo_eventOnMaxRageChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature_Statics::_Script_Demo_eventOnMaxRageChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMaxRageChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMaxRageChanged, float V)
{
	struct _Script_Demo_eventOnMaxRageChanged_Parms
	{
		float V;
	};
	_Script_Demo_eventOnMaxRageChanged_Parms Parms;
	Parms.V=V;
	OnMaxRageChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnEnergyChanged_Parms
		{
			float V;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnEnergyChanged_Parms, V), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature_Statics::NewProp_V,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnEnergyChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature_Statics::_Script_Demo_eventOnEnergyChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature_Statics::_Script_Demo_eventOnEnergyChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEnergyChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEnergyChanged, float V)
{
	struct _Script_Demo_eventOnEnergyChanged_Parms
	{
		float V;
	};
	_Script_Demo_eventOnEnergyChanged_Parms Parms;
	Parms.V=V;
	OnEnergyChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnMaxEnergyChanged_Parms
		{
			float V;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnMaxEnergyChanged_Parms, V), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature_Statics::NewProp_V,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnMaxEnergyChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature_Statics::_Script_Demo_eventOnMaxEnergyChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature_Statics::_Script_Demo_eventOnMaxEnergyChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMaxEnergyChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMaxEnergyChanged, float V)
{
	struct _Script_Demo_eventOnMaxEnergyChanged_Parms
	{
		float V;
	};
	_Script_Demo_eventOnMaxEnergyChanged_Parms Parms;
	Parms.V=V;
	OnMaxEnergyChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnAbilityFailed_Parms
		{
			EActivateFailCode FailCode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_FailCode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FailCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::NewProp_FailCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::NewProp_FailCode = { "FailCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnAbilityFailed_Parms, FailCode), Z_Construct_UEnum_Demo_EActivateFailCode, METADATA_PARAMS(0, nullptr) }; // 3334519895
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::NewProp_FailCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::NewProp_FailCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnAbilityFailed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::_Script_Demo_eventOnAbilityFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::_Script_Demo_eventOnAbilityFailed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAbilityFailed_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityFailed, EActivateFailCode FailCode)
{
	struct _Script_Demo_eventOnAbilityFailed_Parms
	{
		EActivateFailCode FailCode;
	};
	_Script_Demo_eventOnAbilityFailed_Parms Parms;
	Parms.FailCode=FailCode;
	OnAbilityFailed.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AMCharacter::execGetAttributeSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UMAttributeSet**)Z_Param__Result=P_THIS->GetAttributeSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMCharacter::execOnRep_CurrentTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMCharacter::execOnRep_RoleName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RoleName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMCharacter::execSetCurrentTarget)
	{
		P_GET_OBJECT(AMCharacter,Z_Param_NewTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentTarget_Implementation(Z_Param_NewTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMCharacter::execGetMPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMPlayerController**)Z_Param__Result=P_THIS->GetMPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMCharacter::execGetMPlayerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMPlayerState**)Z_Param__Result=P_THIS->GetMPlayerState();
		P_NATIVE_END;
	}
	struct MCharacter_eventSetCurrentTarget_Parms
	{
		AMCharacter* NewTarget;
	};
	static FName NAME_AMCharacter_SetCurrentTarget = FName(TEXT("SetCurrentTarget"));
	void AMCharacter::SetCurrentTarget(AMCharacter* NewTarget)
	{
		MCharacter_eventSetCurrentTarget_Parms Parms;
		Parms.NewTarget=NewTarget;
		ProcessEvent(FindFunctionChecked(NAME_AMCharacter_SetCurrentTarget),&Parms);
	}
	void AMCharacter::StaticRegisterNativesAMCharacter()
	{
		UClass* Class = AMCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttributeSet", &AMCharacter::execGetAttributeSet },
			{ "GetMPlayerController", &AMCharacter::execGetMPlayerController },
			{ "GetMPlayerState", &AMCharacter::execGetMPlayerState },
			{ "OnRep_CurrentTarget", &AMCharacter::execOnRep_CurrentTarget },
			{ "OnRep_RoleName", &AMCharacter::execOnRep_RoleName },
			{ "SetCurrentTarget", &AMCharacter::execSetCurrentTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics
	{
		struct MCharacter_eventGetAttributeSet_Parms
		{
			const UMAttributeSet* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCharacter_eventGetAttributeSet_Parms, ReturnValue), Z_Construct_UClass_UMAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMCharacter, nullptr, "GetAttributeSet", nullptr, nullptr, Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::MCharacter_eventGetAttributeSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::MCharacter_eventGetAttributeSet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMCharacter_GetAttributeSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMCharacter_GetAttributeSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMCharacter_GetMPlayerController_Statics
	{
		struct MCharacter_eventGetMPlayerController_Parms
		{
			AMPlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMCharacter_GetMPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCharacter_eventGetMPlayerController_Parms, ReturnValue), Z_Construct_UClass_AMPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMCharacter_GetMPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMCharacter_GetMPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMCharacter_GetMPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMCharacter_GetMPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMCharacter, nullptr, "GetMPlayerController", nullptr, nullptr, Z_Construct_UFunction_AMCharacter_GetMPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_GetMPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMCharacter_GetMPlayerController_Statics::MCharacter_eventGetMPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_GetMPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMCharacter_GetMPlayerController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_GetMPlayerController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMCharacter_GetMPlayerController_Statics::MCharacter_eventGetMPlayerController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMCharacter_GetMPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMCharacter_GetMPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMCharacter_GetMPlayerState_Statics
	{
		struct MCharacter_eventGetMPlayerState_Parms
		{
			AMPlayerState* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMCharacter_GetMPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCharacter_eventGetMPlayerState_Parms, ReturnValue), Z_Construct_UClass_AMPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMCharacter_GetMPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMCharacter_GetMPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMCharacter_GetMPlayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMCharacter_GetMPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMCharacter, nullptr, "GetMPlayerState", nullptr, nullptr, Z_Construct_UFunction_AMCharacter_GetMPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_GetMPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMCharacter_GetMPlayerState_Statics::MCharacter_eventGetMPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_GetMPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMCharacter_GetMPlayerState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_GetMPlayerState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMCharacter_GetMPlayerState_Statics::MCharacter_eventGetMPlayerState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMCharacter_GetMPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMCharacter_GetMPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMCharacter_OnRep_CurrentTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMCharacter_OnRep_CurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMCharacter_OnRep_CurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMCharacter, nullptr, "OnRep_CurrentTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_OnRep_CurrentTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMCharacter_OnRep_CurrentTarget_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMCharacter_OnRep_CurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMCharacter_OnRep_CurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMCharacter_OnRep_RoleName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMCharacter_OnRep_RoleName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMCharacter_OnRep_RoleName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMCharacter, nullptr, "OnRep_RoleName", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_OnRep_RoleName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMCharacter_OnRep_RoleName_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMCharacter_OnRep_RoleName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMCharacter_OnRep_RoleName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMCharacter_SetCurrentTarget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMCharacter_SetCurrentTarget_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MCharacter_eventSetCurrentTarget_Parms, NewTarget), Z_Construct_UClass_AMCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMCharacter_SetCurrentTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMCharacter_SetCurrentTarget_Statics::NewProp_NewTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMCharacter_SetCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMCharacter_SetCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMCharacter, nullptr, "SetCurrentTarget", nullptr, nullptr, Z_Construct_UFunction_AMCharacter_SetCurrentTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_SetCurrentTarget_Statics::PropPointers), sizeof(MCharacter_eventSetCurrentTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_SetCurrentTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMCharacter_SetCurrentTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMCharacter_SetCurrentTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(MCharacter_eventSetCurrentTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMCharacter_SetCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMCharacter_SetCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMCharacter);
	UClass* Z_Construct_UClass_AMCharacter_NoRegister()
	{
		return AMCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRoleNameChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoleNameChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnManaChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxManaChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxManaChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRageChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRageChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxRageChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxRageChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnergyChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnergyChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxEnergyChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxEnergyChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveLimitTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveLimitTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction4_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMoveInput_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoveInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLookInput_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLookInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnJumpInput_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJumpInput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSkillMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputSkillMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSkillMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputSkillMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMCharacter_GetAttributeSet, "GetAttributeSet" }, // 4097655274
		{ &Z_Construct_UFunction_AMCharacter_GetMPlayerController, "GetMPlayerController" }, // 507708224
		{ &Z_Construct_UFunction_AMCharacter_GetMPlayerState, "GetMPlayerState" }, // 1584652366
		{ &Z_Construct_UFunction_AMCharacter_OnRep_CurrentTarget, "OnRep_CurrentTarget" }, // 2416747219
		{ &Z_Construct_UFunction_AMCharacter_OnRep_RoleName, "OnRep_RoleName" }, // 2536281605
		{ &Z_Construct_UFunction_AMCharacter_SetCurrentTarget, "SetCurrentTarget" }, // 331989402
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/MCharacter.h" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_ThirdPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Third person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Third person camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_ThirdPersonCameraComponent = { "ThirdPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, ThirdPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_ThirdPersonCameraComponent_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_ThirdPersonCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Third person camera arm */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Third person camera arm" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_SpringArmComponent_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_SpringArmComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_RoleName_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_RoleName = { "RoleName", "OnRep_RoleName", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, RoleName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_RoleName_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_RoleName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_OnRoleNameChanged_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_OnRoleNameChanged = { "OnRoleNameChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, OnRoleNameChanged), Z_Construct_UDelegateFunction_Demo_OnRoleNameChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_OnRoleNameChanged_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_OnRoleNameChanged_MetaData) }; // 3817827662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93\xe5\x89\x8d\xe9\x94\x81\xe5\xae\x9a\xe7\x9b\xae\xe6\xa0\x87*/" },
#endif
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe9\x94\x81\xe5\xae\x9a\xe7\x9b\xae\xe6\xa0\x87" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_CurrentTarget = { "CurrentTarget", "OnRep_CurrentTarget", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, CurrentTarget), Z_Construct_UClass_AMCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_CurrentTarget_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_CurrentTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_OnCurrentChanged_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_OnCurrentChanged = { "OnCurrentChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, OnCurrentChanged), Z_Construct_UDelegateFunction_Demo_OnCurrentChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_OnCurrentChanged_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_OnCurrentChanged_MetaData) }; // 3426747464
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, AbilitySystemComponent), Z_Construct_UClass_UMAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_OnAbilityFailed_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_OnAbilityFailed = { "OnAbilityFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, OnAbilityFailed), Z_Construct_UDelegateFunction_Demo_OnAbilityFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_OnAbilityFailed_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_OnAbilityFailed_MetaData) }; // 2663148980
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, OnHealthChanged), Z_Construct_UDelegateFunction_Demo_OnHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_OnHealthChanged_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_OnHealthChanged_MetaData) }; // 2403638630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, OnMaxHealthChanged), Z_Construct_UDelegateFunction_Demo_OnMaxHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxHealthChanged_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxHealthChanged_MetaData) }; // 245633802
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_OnManaChanged_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_OnManaChanged = { "OnManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, OnManaChanged), Z_Construct_UDelegateFunction_Demo_OnManaChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_OnManaChanged_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_OnManaChanged_MetaData) }; // 963289403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxManaChanged_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxManaChanged = { "OnMaxManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, OnMaxManaChanged), Z_Construct_UDelegateFunction_Demo_OnMaxManaChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxManaChanged_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxManaChanged_MetaData) }; // 585112479
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_OnRageChanged_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_OnRageChanged = { "OnRageChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, OnRageChanged), Z_Construct_UDelegateFunction_Demo_OnRageChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_OnRageChanged_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_OnRageChanged_MetaData) }; // 1507758005
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxRageChanged_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxRageChanged = { "OnMaxRageChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, OnMaxRageChanged), Z_Construct_UDelegateFunction_Demo_OnMaxRageChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxRageChanged_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxRageChanged_MetaData) }; // 3779019255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_OnEnergyChanged_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_OnEnergyChanged = { "OnEnergyChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, OnEnergyChanged), Z_Construct_UDelegateFunction_Demo_OnEnergyChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_OnEnergyChanged_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_OnEnergyChanged_MetaData) }; // 1910085124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxEnergyChanged_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxEnergyChanged = { "OnMaxEnergyChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, OnMaxEnergyChanged), Z_Construct_UDelegateFunction_Demo_OnMaxEnergyChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxEnergyChanged_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxEnergyChanged_MetaData) }; // 3023288069
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_CharacterData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, CharacterData), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_CharacterData_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_CharacterData_MetaData) }; // 3385385191
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_CharacterDataAsset_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_CharacterDataAsset = { "CharacterDataAsset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, CharacterDataAsset), Z_Construct_UClass_UMCharacterDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_CharacterDataAsset_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_CharacterDataAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_MoveLimitTags_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\xbb\xe5\x8a\xa8\xe9\x99\x90\xe5\x88\xb6Tags\n" },
#endif
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x99\x90\xe5\x88\xb6Tags" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_MoveLimitTags = { "MoveLimitTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, MoveLimitTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_MoveLimitTags_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_MoveLimitTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, AttributeSet), Z_Construct_UClass_UMAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_SprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sprint Input Action */" },
#endif
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_SprintAction_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_SprintAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sprint Input Action */" },
#endif
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction1 = { "InputAction1", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, InputAction1), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction1_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sprint Input Action */" },
#endif
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction2 = { "InputAction2", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, InputAction2), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction2_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction3_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sprint Input Action */" },
#endif
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction3 = { "InputAction3", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, InputAction3), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction3_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction4_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sprint Input Action */" },
#endif
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction4 = { "InputAction4", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, InputAction4), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction4_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction4_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMoveInput_MetaData[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMoveInput = { "OnMoveInput", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, OnMoveInput), Z_Construct_UDelegateFunction_Demo_OnMoveInput__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMoveInput_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMoveInput_MetaData) }; // 769311934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_OnLookInput_MetaData[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_OnLookInput = { "OnLookInput", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, OnLookInput), Z_Construct_UDelegateFunction_Demo_OnLookInput__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_OnLookInput_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_OnLookInput_MetaData) }; // 2615461131
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_OnJumpInput_MetaData[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_OnJumpInput = { "OnJumpInput", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, OnJumpInput), Z_Construct_UDelegateFunction_Demo_OnJumpInput__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_OnJumpInput_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_OnJumpInput_MetaData) }; // 166644456
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_InputSkillMap_ValueProp = { "InputSkillMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_InputSkillMap_Key_KeyProp = { "InputSkillMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_InputSkillMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_InputSkillMap = { "InputSkillMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, InputSkillMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_InputSkillMap_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_InputSkillMap_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_ThirdPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_RoleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_OnRoleNameChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_CurrentTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_OnCurrentChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_OnAbilityFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_OnHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_OnManaChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxManaChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_OnRageChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxRageChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_OnEnergyChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMaxEnergyChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_CharacterData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_CharacterDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_MoveLimitTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_SprintAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_InputAction4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_OnMoveInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_OnLookInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_OnJumpInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_InputSkillMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_InputSkillMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_InputSkillMap,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AMCharacter, IAbilitySystemInterface), false },  // 3195502011
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMCharacter_Statics::ClassParams = {
		&AMCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMCharacter()
	{
		if (!Z_Registration_Info_UClass_AMCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMCharacter.OuterSingleton, Z_Construct_UClass_AMCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMCharacter.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<AMCharacter>()
	{
		return AMCharacter::StaticClass();
	}

	void AMCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RoleName(TEXT("RoleName"));
		static const FName Name_CurrentTarget(TEXT("CurrentTarget"));
		static const FName Name_CharacterData(TEXT("CharacterData"));

		const bool bIsValid = true
			&& Name_RoleName == ClassReps[(int32)ENetFields_Private::RoleName].Property->GetFName()
			&& Name_CurrentTarget == ClassReps[(int32)ENetFields_Private::CurrentTarget].Property->GetFName()
			&& Name_CharacterData == ClassReps[(int32)ENetFields_Private::CharacterData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMCharacter);
	AMCharacter::~AMCharacter() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_MCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_MCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMCharacter, AMCharacter::StaticClass, TEXT("AMCharacter"), &Z_Registration_Info_UClass_AMCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMCharacter), 1236734585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_MCharacter_h_1615828279(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_MCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_MCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
