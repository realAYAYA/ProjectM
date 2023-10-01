// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/GameplayAbilitySystem/Abilities/MGameplayAbility.h"
#include "Abilities/GameplayAbilityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMGameplayAbility() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEMO_API UClass* Z_Construct_UClass_AMCharacter_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMAbilitySystemComponent_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UMGameplayAbility();
	DEMO_API UClass* Z_Construct_UClass_UMGameplayAbility_NoRegister();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EActivateFailCode();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ETargetType();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetType;
	static UEnum* ETargetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETargetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_ETargetType, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("ETargetType"));
		}
		return Z_Registration_Info_UEnum_ETargetType.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<ETargetType>()
	{
		return ETargetType_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_ETargetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_ETargetType_Statics::Enumerators[] = {
		{ "ETargetType::Self", (int64)ETargetType::Self },
		{ "ETargetType::Hostile", (int64)ETargetType::Hostile },
		{ "ETargetType::Friendly", (int64)ETargetType::Friendly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_ETargetType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Friendly.Displayname", "Friendly" },
		{ "Friendly.Name", "ETargetType::Friendly" },
		{ "Hostile.Displayname", "Hostile" },
		{ "Hostile.Name", "ETargetType::Hostile" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/MGameplayAbility.h" },
		{ "Self.Displayname", "Self" },
		{ "Self.Name", "ETargetType::Self" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_ETargetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"ETargetType",
		"ETargetType",
		Z_Construct_UEnum_Demo_ETargetType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ETargetType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ETargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_ETargetType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_ETargetType()
	{
		if (!Z_Registration_Info_UEnum_ETargetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetType.InnerSingleton, Z_Construct_UEnum_Demo_ETargetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETargetType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActivateFailCode;
	static UEnum* EActivateFailCode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EActivateFailCode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EActivateFailCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EActivateFailCode, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EActivateFailCode"));
		}
		return Z_Registration_Info_UEnum_EActivateFailCode.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EActivateFailCode>()
	{
		return EActivateFailCode_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EActivateFailCode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EActivateFailCode_Statics::Enumerators[] = {
		{ "EActivateFailCode::Success", (int64)EActivateFailCode::Success },
		{ "EActivateFailCode::Immunity", (int64)EActivateFailCode::Immunity },
		{ "EActivateFailCode::Cooldown", (int64)EActivateFailCode::Cooldown },
		{ "EActivateFailCode::OutOfRange", (int64)EActivateFailCode::OutOfRange },
		{ "EActivateFailCode::ToClose", (int64)EActivateFailCode::ToClose },
		{ "EActivateFailCode::NoToward", (int64)EActivateFailCode::NoToward },
		{ "EActivateFailCode::NoMana", (int64)EActivateFailCode::NoMana },
		{ "EActivateFailCode::NoEnergy", (int64)EActivateFailCode::NoEnergy },
		{ "EActivateFailCode::NoRage", (int64)EActivateFailCode::NoRage },
		{ "EActivateFailCode::InValidTarget", (int64)EActivateFailCode::InValidTarget },
		{ "EActivateFailCode::NoTarget", (int64)EActivateFailCode::NoTarget },
		{ "EActivateFailCode::NoItem", (int64)EActivateFailCode::NoItem },
		{ "EActivateFailCode::CodeError", (int64)EActivateFailCode::CodeError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EActivateFailCode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CodeError.Displayname", "\xe5\x86\x85\xe5\xad\x98\xe9\x94\x99\xe8\xaf\xaf" },
		{ "CodeError.Name", "EActivateFailCode::CodeError" },
		{ "Cooldown.Displayname", "\xe5\x86\xb7\xe5\x8d\xb4\xe4\xb8\xad" },
		{ "Cooldown.Name", "EActivateFailCode::Cooldown" },
		{ "Immunity.Displayname", "\xe5\x85\x8d\xe7\x96\xab" },
		{ "Immunity.Name", "EActivateFailCode::Immunity" },
		{ "InValidTarget.Displayname", "\xe6\x97\xa0\xe6\x95\x88\xe7\x9a\x84\xe7\x9b\xae\xe6\xa0\x87" },
		{ "InValidTarget.Name", "EActivateFailCode::InValidTarget" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/MGameplayAbility.h" },
		{ "NoEnergy.Displayname", "\xe8\x83\xbd\xe9\x87\x8f\xe4\xb8\x8d\xe8\xb6\xb3" },
		{ "NoEnergy.Name", "EActivateFailCode::NoEnergy" },
		{ "NoItem.Displayname", "\xe9\x81\x93\xe5\x85\xb7\xe4\xb8\x8d\xe8\xb6\xb3" },
		{ "NoItem.Name", "EActivateFailCode::NoItem" },
		{ "NoMana.Displayname", "\xe6\xb3\x95\xe5\x8a\x9b\xe4\xb8\x8d\xe8\xb6\xb3" },
		{ "NoMana.Name", "EActivateFailCode::NoMana" },
		{ "NoRage.Displayname", "\xe6\x80\x92\xe6\xb0\x94\xe4\xb8\x8d\xe8\xb6\xb3" },
		{ "NoRage.Name", "EActivateFailCode::NoRage" },
		{ "NoTarget.Displayname", "\xe9\x9c\x80\xe8\xa6\x81\xe4\xb8\x80\xe4\xb8\xaa\xe7\x9b\xae\xe6\xa0\x87" },
		{ "NoTarget.Name", "EActivateFailCode::NoTarget" },
		{ "NoToward.Displayname", "\xe9\x9d\xa2\xe5\x90\x91\xe5\xaf\xb9\xe6\x96\xb9" },
		{ "NoToward.Name", "EActivateFailCode::NoToward" },
		{ "OutOfRange.Displayname", "\xe8\xb6\x85\xe5\x87\xba\xe8\xb7\x9d\xe7\xa6\xbb" },
		{ "OutOfRange.Name", "EActivateFailCode::OutOfRange" },
		{ "Success.Displayname", "\xe6\x88\x90\xe5\x8a\x9f" },
		{ "Success.Name", "EActivateFailCode::Success" },
		{ "ToClose.Displayname", "\xe5\xa4\xaa\xe8\xbf\x91\xe4\xba\x86" },
		{ "ToClose.Name", "EActivateFailCode::ToClose" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EActivateFailCode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EActivateFailCode",
		"EActivateFailCode",
		Z_Construct_UEnum_Demo_EActivateFailCode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EActivateFailCode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EActivateFailCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EActivateFailCode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EActivateFailCode()
	{
		if (!Z_Registration_Info_UEnum_EActivateFailCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActivateFailCode.InnerSingleton, Z_Construct_UEnum_Demo_EActivateFailCode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EActivateFailCode.InnerSingleton;
	}
	DEFINE_FUNCTION(UMGameplayAbility::execCanActivateCondition)
	{
		P_GET_STRUCT_REF(FGameplayAbilityActorInfo,Z_Param_Out_ActorInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EActivateFailCode*)Z_Param__Result=P_THIS->CanActivateCondition(Z_Param_Out_ActorInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMGameplayAbility::execGetMAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMAbilitySystemComponent**)Z_Param__Result=P_THIS->GetMAbilitySystemComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMGameplayAbility::execGetMCharacterFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMCharacter**)Z_Param__Result=P_THIS->GetMCharacterFromActorInfo();
		P_NATIVE_END;
	}
	void UMGameplayAbility::StaticRegisterNativesUMGameplayAbility()
	{
		UClass* Class = UMGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanActivateCondition", &UMGameplayAbility::execCanActivateCondition },
			{ "GetMAbilitySystemComponent", &UMGameplayAbility::execGetMAbilitySystemComponent },
			{ "GetMCharacterFromActorInfo", &UMGameplayAbility::execGetMCharacterFromActorInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics
	{
		struct MGameplayAbility_eventCanActivateCondition_Parms
		{
			FGameplayAbilityActorInfo ActorInfo;
			EActivateFailCode ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::NewProp_ActorInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::NewProp_ActorInfo = { "ActorInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameplayAbility_eventCanActivateCondition_Parms, ActorInfo), Z_Construct_UScriptStruct_FGameplayAbilityActorInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::NewProp_ActorInfo_MetaData), Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::NewProp_ActorInfo_MetaData) }; // 3758374639
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameplayAbility_eventCanActivateCondition_Parms, ReturnValue), Z_Construct_UEnum_Demo_EActivateFailCode, METADATA_PARAMS(0, nullptr) }; // 3334519895
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::NewProp_ActorInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/MGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMGameplayAbility, nullptr, "CanActivateCondition", nullptr, nullptr, Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::MGameplayAbility_eventCanActivateCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::MGameplayAbility_eventCanActivateCondition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics
	{
		struct MGameplayAbility_eventGetMAbilitySystemComponent_Parms
		{
			UMAbilitySystemComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameplayAbility_eventGetMAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UMAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/MGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMGameplayAbility, nullptr, "GetMAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::MGameplayAbility_eventGetMAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::MGameplayAbility_eventGetMAbilitySystemComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo_Statics
	{
		struct MGameplayAbility_eventGetMCharacterFromActorInfo_Parms
		{
			AMCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameplayAbility_eventGetMCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AMCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/MGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMGameplayAbility, nullptr, "GetMCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo_Statics::MGameplayAbility_eventGetMCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo_Statics::MGameplayAbility_eventGetMCharacterFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGameplayAbility);
	UClass* Z_Construct_UClass_UMGameplayAbility_NoRegister()
	{
		return UMGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UMGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Energy;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NeedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NeedItems;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OngoingEffectsToRemoveOnEnd_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OngoingEffectsToRemoveOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OngoingEffectsToRemoveOnEnd;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OngoingEffectsToJustApplyOnStart_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OngoingEffectsToJustApplyOnStart_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OngoingEffectsToJustApplyOnStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMGameplayAbility_CanActivateCondition, "CanActivateCondition" }, // 4125331325
		{ &Z_Construct_UFunction_UMGameplayAbility_GetMAbilitySystemComponent, "GetMAbilitySystemComponent" }, // 2175016266
		{ &Z_Construct_UFunction_UMGameplayAbility_GetMCharacterFromActorInfo, "GetMCharacterFromActorInfo" }, // 2635094670
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameplayAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/Abilities/MGameplayAbility.h" },
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/MGameplayAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xb0\x84\xe7\xa8\x8b*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/MGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x84\xe7\xa8\x8b" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGameplayAbility, Range), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Range_MetaData), Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Range_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\xb3\x95\xe5\x8a\x9b\xe6\xb6\x88\xe8\x80\x97*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/MGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb3\x95\xe5\x8a\x9b\xe6\xb6\x88\xe8\x80\x97" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGameplayAbility, Mana), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Mana_MetaData), Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Mana_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Rage_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x80\x92\xe6\xb0\x94\xe6\xb6\x88\xe8\x80\x97*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/MGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x80\x92\xe6\xb0\x94\xe6\xb6\x88\xe8\x80\x97" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Rage = { "Rage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGameplayAbility, Rage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Rage_MetaData), Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Rage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Energy_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\x83\xbd\xe9\x87\x8f\xe6\xb6\x88\xe8\x80\x97*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/MGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\xbd\xe9\x87\x8f\xe6\xb6\x88\xe8\x80\x97" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Energy = { "Energy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGameplayAbility, Energy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Energy_MetaData), Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Energy_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_NeedItems_Inner = { "NeedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_NeedItems_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/MGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_NeedItems = { "NeedItems", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGameplayAbility, NeedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_NeedItems_MetaData), Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_NeedItems_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_Inner = { "OngoingEffectsToRemoveOnEnd", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x8a\x80\xe8\x83\xbd\xe6\xbf\x80\xe6\xb4\xbb\xe6\x97\xb6\xe8\xb5\x8b\xe4\xba\x88\xe6\x95\x88\xe6\x9e\x9c\xef\xbc\x8c\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe4\xb8\xbb\xe5\x8a\xa8\xe7\xa7\xbb\xe9\x99\xa4\xef\xbc\x8c\xe9\x85\x8d\xe5\x90\x88""CancelAbility()\xef\xbc\x8c\xe9\x80\x82\xe5\x90\x88\xe6\x8a\x80\xe8\x83\xbd\xe5\x8f\x8a\xe5\x85\xb6\xe6\x95\x88\xe6\x9e\x9c\xe5\x90\x8c\xe6\x97\xb6\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe6\x83\x85\xe5\x86\xb5*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/MGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe6\xbf\x80\xe6\xb4\xbb\xe6\x97\xb6\xe8\xb5\x8b\xe4\xba\x88\xe6\x95\x88\xe6\x9e\x9c\xef\xbc\x8c\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe4\xb8\xbb\xe5\x8a\xa8\xe7\xa7\xbb\xe9\x99\xa4\xef\xbc\x8c\xe9\x85\x8d\xe5\x90\x88""CancelAbility()\xef\xbc\x8c\xe9\x80\x82\xe5\x90\x88\xe6\x8a\x80\xe8\x83\xbd\xe5\x8f\x8a\xe5\x85\xb6\xe6\x95\x88\xe6\x9e\x9c\xe5\x90\x8c\xe6\x97\xb6\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe6\x83\x85\xe5\x86\xb5" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd = { "OngoingEffectsToRemoveOnEnd", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGameplayAbility, OngoingEffectsToRemoveOnEnd), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_MetaData), Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_Inner = { "OngoingEffectsToJustApplyOnStart", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x8a\x80\xe8\x83\xbd\xe6\xbf\x80\xe6\xb4\xbb\xe6\x97\xb6\xe8\xb5\x8b\xe4\xba\x88\xe6\x95\x88\xe6\x9e\x9c\xef\xbc\x8c\xe4\xbd\x86\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe5\xb9\xb6\xe4\xb8\x8d\xe4\xbc\x9a\xe4\xb8\xbb\xe5\x8a\xa8\xe7\xa7\xbb\xe9\x99\xa4*/" },
#endif
		{ "ModuleRelativePath", "Private/GameplayAbilitySystem/Abilities/MGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe6\xbf\x80\xe6\xb4\xbb\xe6\x97\xb6\xe8\xb5\x8b\xe4\xba\x88\xe6\x95\x88\xe6\x9e\x9c\xef\xbc\x8c\xe4\xbd\x86\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe5\xb9\xb6\xe4\xb8\x8d\xe4\xbc\x9a\xe4\xb8\xbb\xe5\x8a\xa8\xe7\xa7\xbb\xe9\x99\xa4" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart = { "OngoingEffectsToJustApplyOnStart", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGameplayAbility, OngoingEffectsToJustApplyOnStart), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_MetaData), Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Rage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_Energy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_NeedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_NeedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGameplayAbility_Statics::ClassParams = {
		&UMGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGameplayAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameplayAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UMGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGameplayAbility.OuterSingleton, Z_Construct_UClass_UMGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGameplayAbility.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UMGameplayAbility>()
	{
		return UMGameplayAbility::StaticClass();
	}
	UMGameplayAbility::UMGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGameplayAbility);
	UMGameplayAbility::~UMGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_Statics::EnumInfo[] = {
		{ ETargetType_StaticEnum, TEXT("ETargetType"), &Z_Registration_Info_UEnum_ETargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2766206230U) },
		{ EActivateFailCode_StaticEnum, TEXT("EActivateFailCode"), &Z_Registration_Info_UEnum_EActivateFailCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3334519895U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMGameplayAbility, UMGameplayAbility::StaticClass, TEXT("UMGameplayAbility"), &Z_Registration_Info_UClass_UMGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGameplayAbility), 3243504537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_2408033037(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
