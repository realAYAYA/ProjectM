// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MGameDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMGameDefine() {}
// Cross Module References
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EBirth();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ECamp();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EDemonBranch();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EDragonBranch();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EDwarfBranch();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EElvenBranch();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EEquipSlot();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EFurryBranch();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EGender();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EHumanBranch();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EItemState();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EItemType();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ELoginCode();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EOrcBranch();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ERace();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ERoleClass();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_ERpcErrorCode();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EUndeadBranch();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERpcErrorCode;
	static UEnum* ERpcErrorCode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERpcErrorCode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERpcErrorCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_ERpcErrorCode, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("ERpcErrorCode"));
		}
		return Z_Registration_Info_UEnum_ERpcErrorCode.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<ERpcErrorCode>()
	{
		return ERpcErrorCode_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_ERpcErrorCode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_ERpcErrorCode_Statics::Enumerators[] = {
		{ "ERpcErrorCode::Ok", (int64)ERpcErrorCode::Ok },
		{ "ERpcErrorCode::NotEnough", (int64)ERpcErrorCode::NotEnough },
		{ "ERpcErrorCode::IllegalParam", (int64)ERpcErrorCode::IllegalParam },
		{ "ERpcErrorCode::NeedReq", (int64)ERpcErrorCode::NeedReq },
		{ "ERpcErrorCode::InValidConfig", (int64)ERpcErrorCode::InValidConfig },
		{ "ERpcErrorCode::Unknown", (int64)ERpcErrorCode::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_ERpcErrorCode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Game Network \"Message, Rpc\" Defined here\n*/" },
#endif
		{ "IllegalParam.DisplayName", "\xe5\x8f\x82\xe6\x95\xb0\xe9\x9d\x9e\xe6\xb3\x95" },
		{ "IllegalParam.Name", "ERpcErrorCode::IllegalParam" },
		{ "InValidConfig.DisplayName", "\xe6\x97\xa0\xe6\x95\x88\xe9\x85\x8d\xe7\xbd\xae" },
		{ "InValidConfig.Name", "ERpcErrorCode::InValidConfig" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "NeedReq.DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe9\x87\x8d\xe6\x96\xb0\xe8\xaf\xb7\xe6\xb1\x82" },
		{ "NeedReq.Name", "ERpcErrorCode::NeedReq" },
		{ "NotEnough.DisplayName", "\xe6\x95\xb0\xe9\x87\x8f\xe4\xb8\x8d\xe8\xb6\xb3" },
		{ "NotEnough.Name", "ERpcErrorCode::NotEnough" },
		{ "Ok.DisplayName", "\xe6\xad\xa3\xe5\xb8\xb8" },
		{ "Ok.Name", "ERpcErrorCode::Ok" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game Network \"Message, Rpc\" Defined here" },
#endif
		{ "Unknown.DisplayName", "\xe6\x9c\xaa\xe7\x9f\xa5\xe9\x94\x99\xe8\xaf\xaf" },
		{ "Unknown.Name", "ERpcErrorCode::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_ERpcErrorCode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"ERpcErrorCode",
		"ERpcErrorCode",
		Z_Construct_UEnum_Demo_ERpcErrorCode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ERpcErrorCode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ERpcErrorCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_ERpcErrorCode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_ERpcErrorCode()
	{
		if (!Z_Registration_Info_UEnum_ERpcErrorCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERpcErrorCode.InnerSingleton, Z_Construct_UEnum_Demo_ERpcErrorCode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERpcErrorCode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoginCode;
	static UEnum* ELoginCode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoginCode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELoginCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_ELoginCode, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("ELoginCode"));
		}
		return Z_Registration_Info_UEnum_ELoginCode.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<ELoginCode>()
	{
		return ELoginCode_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_ELoginCode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_ELoginCode_Statics::Enumerators[] = {
		{ "ELoginCode::Ok", (int64)ELoginCode::Ok },
		{ "ELoginCode::DuplicateLogin", (int64)ELoginCode::DuplicateLogin },
		{ "ELoginCode::Unknown", (int64)ELoginCode::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_ELoginCode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DuplicateLogin.DisplayName", "\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x9c\xa8\xe7\xba\xbf" },
		{ "DuplicateLogin.Name", "ELoginCode::DuplicateLogin" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "Ok.DisplayName", "\xe6\xad\xa3\xe5\xb8\xb8\xe7\x99\xbb\xe9\x99\x86" },
		{ "Ok.Name", "ELoginCode::Ok" },
		{ "Unknown.DisplayName", "\xe6\x9c\xaa\xe7\x9f\xa5\xe9\x94\x99\xe8\xaf\xaf" },
		{ "Unknown.Name", "ELoginCode::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_ELoginCode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"ELoginCode",
		"ELoginCode",
		Z_Construct_UEnum_Demo_ELoginCode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ELoginCode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ELoginCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_ELoginCode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_ELoginCode()
	{
		if (!Z_Registration_Info_UEnum_ELoginCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoginCode.InnerSingleton, Z_Construct_UEnum_Demo_ELoginCode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELoginCode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGender;
	static UEnum* EGender_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGender.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGender.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EGender, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EGender"));
		}
		return Z_Registration_Info_UEnum_EGender.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EGender>()
	{
		return EGender_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EGender_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EGender_Statics::Enumerators[] = {
		{ "EGender::None", (int64)EGender::None },
		{ "EGender::Male", (int64)EGender::Male },
		{ "EGender::Female", (int64)EGender::Female },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EGender_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rpc*/" },
#endif
		{ "Female.DisplayName", "\xe5\xa5\xb3" },
		{ "Female.Name", "EGender::Female" },
		{ "Male.DisplayName", "\xe7\x94\xb7" },
		{ "Male.Name", "EGender::Male" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "None.DisplayName", "\xe6\x97\xa0" },
		{ "None.Name", "EGender::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rpc" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EGender_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EGender",
		"EGender",
		Z_Construct_UEnum_Demo_EGender_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EGender_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EGender_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EGender_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EGender()
	{
		if (!Z_Registration_Info_UEnum_EGender.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGender.InnerSingleton, Z_Construct_UEnum_Demo_EGender_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGender.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBirth;
	static UEnum* EBirth_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBirth.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBirth.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EBirth, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EBirth"));
		}
		return Z_Registration_Info_UEnum_EBirth.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EBirth>()
	{
		return EBirth_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EBirth_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EBirth_Statics::Enumerators[] = {
		{ "EBirth::None", (int64)EBirth::None },
		{ "EBirth::Student", (int64)EBirth::Student },
		{ "EBirth::Female", (int64)EBirth::Female },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EBirth_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x87\xba\xe8\xba\xab\n" },
#endif
		{ "Female.DisplayName", "\xe5\xa5\xb3" },
		{ "Female.Name", "EBirth::Female" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EBirth::None" },
		{ "Student.DisplayName", "\xe7\x94\xb7" },
		{ "Student.Name", "EBirth::Student" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x87\xba\xe8\xba\xab" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EBirth_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EBirth",
		"EBirth",
		Z_Construct_UEnum_Demo_EBirth_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EBirth_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EBirth_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EBirth_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EBirth()
	{
		if (!Z_Registration_Info_UEnum_EBirth.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBirth.InnerSingleton, Z_Construct_UEnum_Demo_EBirth_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBirth.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERoleClass;
	static UEnum* ERoleClass_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERoleClass.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERoleClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_ERoleClass, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("ERoleClass"));
		}
		return Z_Registration_Info_UEnum_ERoleClass.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<ERoleClass>()
	{
		return ERoleClass_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_ERoleClass_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_ERoleClass_Statics::Enumerators[] = {
		{ "ERoleClass::None", (int64)ERoleClass::None },
		{ "ERoleClass::Warrior", (int64)ERoleClass::Warrior },
		{ "ERoleClass::Mage", (int64)ERoleClass::Mage },
		{ "ERoleClass::Warlock", (int64)ERoleClass::Warlock },
		{ "ERoleClass::Ranger", (int64)ERoleClass::Ranger },
		{ "ERoleClass::Druid", (int64)ERoleClass::Druid },
		{ "ERoleClass::Paladin", (int64)ERoleClass::Paladin },
		{ "ERoleClass::Priest", (int64)ERoleClass::Priest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_ERoleClass_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Druid.Displayname", "Druid" },
		{ "Druid.Name", "ERoleClass::Druid" },
		{ "Mage.Displayname", "Mage" },
		{ "Mage.Name", "ERoleClass::Mage" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "None.Displayname", "None" },
		{ "None.Name", "ERoleClass::None" },
		{ "Paladin.Displayname", "Paladin" },
		{ "Paladin.Name", "ERoleClass::Paladin" },
		{ "Priest.Displayname", "Priest" },
		{ "Priest.Name", "ERoleClass::Priest" },
		{ "Ranger.Displayname", "Ranger" },
		{ "Ranger.Name", "ERoleClass::Ranger" },
		{ "Warlock.Displayname", "Warlock" },
		{ "Warlock.Name", "ERoleClass::Warlock" },
		{ "Warrior.Displayname", "Warrior" },
		{ "Warrior.Name", "ERoleClass::Warrior" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_ERoleClass_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"ERoleClass",
		"ERoleClass",
		Z_Construct_UEnum_Demo_ERoleClass_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ERoleClass_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ERoleClass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_ERoleClass_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_ERoleClass()
	{
		if (!Z_Registration_Info_UEnum_ERoleClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERoleClass.InnerSingleton, Z_Construct_UEnum_Demo_ERoleClass_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERoleClass.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECamp;
	static UEnum* ECamp_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECamp.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECamp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_ECamp, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("ECamp"));
		}
		return Z_Registration_Info_UEnum_ECamp.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<ECamp>()
	{
		return ECamp_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_ECamp_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_ECamp_Statics::Enumerators[] = {
		{ "ECamp::None", (int64)ECamp::None },
		{ "ECamp::Alliance", (int64)ECamp::Alliance },
		{ "ECamp::Horde", (int64)ECamp::Horde },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_ECamp_Statics::Enum_MetaDataParams[] = {
		{ "Alliance.Displayname", "\xe8\x81\x94\xe7\x9b\x9f" },
		{ "Alliance.Name", "ECamp::Alliance" },
		{ "BlueprintType", "true" },
		{ "Horde.Displayname", "\xe9\x83\xa8\xe8\x90\xbd" },
		{ "Horde.Name", "ECamp::Horde" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "None.Displayname", "None" },
		{ "None.Name", "ECamp::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_ECamp_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"ECamp",
		"ECamp",
		Z_Construct_UEnum_Demo_ECamp_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ECamp_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ECamp_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_ECamp_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_ECamp()
	{
		if (!Z_Registration_Info_UEnum_ECamp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECamp.InnerSingleton, Z_Construct_UEnum_Demo_ECamp_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECamp.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemState;
	static UEnum* EItemState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EItemState, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EItemState"));
		}
		return Z_Registration_Info_UEnum_EItemState.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EItemState>()
	{
		return EItemState_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EItemState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EItemState_Statics::Enumerators[] = {
		{ "EItemState::None", (int64)EItemState::None },
		{ "EItemState::Dropped", (int64)EItemState::Dropped },
		{ "EItemState::Equipped", (int64)EItemState::Equipped },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EItemState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dropped.Displayname", "Dropped" },
		{ "Dropped.Name", "EItemState::Dropped" },
		{ "Equipped.Displayname", "Equipped" },
		{ "Equipped.Name", "EItemState::Equipped" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "None.Displayname", "None" },
		{ "None.Name", "EItemState::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EItemState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EItemState",
		"EItemState",
		Z_Construct_UEnum_Demo_EItemState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EItemState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EItemState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EItemState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EItemState()
	{
		if (!Z_Registration_Info_UEnum_EItemState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemState.InnerSingleton, Z_Construct_UEnum_Demo_EItemState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERace;
	static UEnum* ERace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_ERace, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("ERace"));
		}
		return Z_Registration_Info_UEnum_ERace.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<ERace>()
	{
		return ERace_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_ERace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_ERace_Statics::Enumerators[] = {
		{ "ERace::None", (int64)ERace::None },
		{ "ERace::Orc", (int64)ERace::Orc },
		{ "ERace::Dwarf", (int64)ERace::Dwarf },
		{ "ERace::Human", (int64)ERace::Human },
		{ "ERace::Elven", (int64)ERace::Elven },
		{ "ERace::Furry", (int64)ERace::Furry },
		{ "ERace::Undead", (int64)ERace::Undead },
		{ "ERace::Demon", (int64)ERace::Demon },
		{ "ERace::Dragon", (int64)ERace::Dragon },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_ERace_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Demon.Displayname", "Demon" },
		{ "Demon.Name", "ERace::Demon" },
		{ "Dragon.Displayname", "Demon" },
		{ "Dragon.Name", "ERace::Dragon" },
		{ "Dwarf.Displayname", "Orc" },
		{ "Dwarf.Name", "ERace::Dwarf" },
		{ "Elven.Displayname", "Elven" },
		{ "Elven.Name", "ERace::Elven" },
		{ "Furry.Displayname", "Furry" },
		{ "Furry.Name", "ERace::Furry" },
		{ "Human.Displayname", "Human" },
		{ "Human.Name", "ERace::Human" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "None.Displayname", "None" },
		{ "None.Name", "ERace::None" },
		{ "Orc.Displayname", "Orc" },
		{ "Orc.Name", "ERace::Orc" },
		{ "Undead.Displayname", "Undead" },
		{ "Undead.Name", "ERace::Undead" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_ERace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"ERace",
		"ERace",
		Z_Construct_UEnum_Demo_ERace_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ERace_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_ERace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_ERace_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_ERace()
	{
		if (!Z_Registration_Info_UEnum_ERace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERace.InnerSingleton, Z_Construct_UEnum_Demo_ERace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHumanBranch;
	static UEnum* EHumanBranch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHumanBranch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHumanBranch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EHumanBranch, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EHumanBranch"));
		}
		return Z_Registration_Info_UEnum_EHumanBranch.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EHumanBranch>()
	{
		return EHumanBranch_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EHumanBranch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EHumanBranch_Statics::Enumerators[] = {
		{ "EHumanBranch::None", (int64)EHumanBranch::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EHumanBranch_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "None.Displayname", "None" },
		{ "None.Name", "EHumanBranch::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EHumanBranch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EHumanBranch",
		"EHumanBranch",
		Z_Construct_UEnum_Demo_EHumanBranch_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EHumanBranch_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EHumanBranch_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EHumanBranch_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EHumanBranch()
	{
		if (!Z_Registration_Info_UEnum_EHumanBranch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHumanBranch.InnerSingleton, Z_Construct_UEnum_Demo_EHumanBranch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHumanBranch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrcBranch;
	static UEnum* EOrcBranch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOrcBranch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOrcBranch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EOrcBranch, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EOrcBranch"));
		}
		return Z_Registration_Info_UEnum_EOrcBranch.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EOrcBranch>()
	{
		return EOrcBranch_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EOrcBranch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EOrcBranch_Statics::Enumerators[] = {
		{ "EOrcBranch::None", (int64)EOrcBranch::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EOrcBranch_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "None.Displayname", "None" },
		{ "None.Name", "EOrcBranch::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EOrcBranch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EOrcBranch",
		"EOrcBranch",
		Z_Construct_UEnum_Demo_EOrcBranch_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EOrcBranch_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EOrcBranch_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EOrcBranch_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EOrcBranch()
	{
		if (!Z_Registration_Info_UEnum_EOrcBranch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrcBranch.InnerSingleton, Z_Construct_UEnum_Demo_EOrcBranch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOrcBranch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDwarfBranch;
	static UEnum* EDwarfBranch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDwarfBranch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDwarfBranch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EDwarfBranch, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EDwarfBranch"));
		}
		return Z_Registration_Info_UEnum_EDwarfBranch.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EDwarfBranch>()
	{
		return EDwarfBranch_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EDwarfBranch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EDwarfBranch_Statics::Enumerators[] = {
		{ "EDwarfBranch::None", (int64)EDwarfBranch::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EDwarfBranch_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "None.Displayname", "None" },
		{ "None.Name", "EDwarfBranch::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EDwarfBranch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EDwarfBranch",
		"EDwarfBranch",
		Z_Construct_UEnum_Demo_EDwarfBranch_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EDwarfBranch_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EDwarfBranch_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EDwarfBranch_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EDwarfBranch()
	{
		if (!Z_Registration_Info_UEnum_EDwarfBranch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDwarfBranch.InnerSingleton, Z_Construct_UEnum_Demo_EDwarfBranch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDwarfBranch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EElvenBranch;
	static UEnum* EElvenBranch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EElvenBranch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EElvenBranch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EElvenBranch, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EElvenBranch"));
		}
		return Z_Registration_Info_UEnum_EElvenBranch.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EElvenBranch>()
	{
		return EElvenBranch_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EElvenBranch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EElvenBranch_Statics::Enumerators[] = {
		{ "EElvenBranch::None", (int64)EElvenBranch::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EElvenBranch_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "None.Displayname", "None" },
		{ "None.Name", "EElvenBranch::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EElvenBranch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EElvenBranch",
		"EElvenBranch",
		Z_Construct_UEnum_Demo_EElvenBranch_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EElvenBranch_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EElvenBranch_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EElvenBranch_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EElvenBranch()
	{
		if (!Z_Registration_Info_UEnum_EElvenBranch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EElvenBranch.InnerSingleton, Z_Construct_UEnum_Demo_EElvenBranch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EElvenBranch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFurryBranch;
	static UEnum* EFurryBranch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFurryBranch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFurryBranch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EFurryBranch, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EFurryBranch"));
		}
		return Z_Registration_Info_UEnum_EFurryBranch.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EFurryBranch>()
	{
		return EFurryBranch_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EFurryBranch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EFurryBranch_Statics::Enumerators[] = {
		{ "EFurryBranch::None", (int64)EFurryBranch::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EFurryBranch_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "None.Displayname", "None" },
		{ "None.Name", "EFurryBranch::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EFurryBranch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EFurryBranch",
		"EFurryBranch",
		Z_Construct_UEnum_Demo_EFurryBranch_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EFurryBranch_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EFurryBranch_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EFurryBranch_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EFurryBranch()
	{
		if (!Z_Registration_Info_UEnum_EFurryBranch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFurryBranch.InnerSingleton, Z_Construct_UEnum_Demo_EFurryBranch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFurryBranch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUndeadBranch;
	static UEnum* EUndeadBranch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUndeadBranch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUndeadBranch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EUndeadBranch, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EUndeadBranch"));
		}
		return Z_Registration_Info_UEnum_EUndeadBranch.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EUndeadBranch>()
	{
		return EUndeadBranch_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EUndeadBranch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EUndeadBranch_Statics::Enumerators[] = {
		{ "EUndeadBranch::None", (int64)EUndeadBranch::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EUndeadBranch_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "None.Displayname", "None" },
		{ "None.Name", "EUndeadBranch::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EUndeadBranch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EUndeadBranch",
		"EUndeadBranch",
		Z_Construct_UEnum_Demo_EUndeadBranch_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EUndeadBranch_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EUndeadBranch_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EUndeadBranch_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EUndeadBranch()
	{
		if (!Z_Registration_Info_UEnum_EUndeadBranch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUndeadBranch.InnerSingleton, Z_Construct_UEnum_Demo_EUndeadBranch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUndeadBranch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDemonBranch;
	static UEnum* EDemonBranch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDemonBranch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDemonBranch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EDemonBranch, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EDemonBranch"));
		}
		return Z_Registration_Info_UEnum_EDemonBranch.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EDemonBranch>()
	{
		return EDemonBranch_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EDemonBranch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EDemonBranch_Statics::Enumerators[] = {
		{ "EDemonBranch::None", (int64)EDemonBranch::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EDemonBranch_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "None.Displayname", "None" },
		{ "None.Name", "EDemonBranch::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EDemonBranch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EDemonBranch",
		"EDemonBranch",
		Z_Construct_UEnum_Demo_EDemonBranch_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EDemonBranch_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EDemonBranch_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EDemonBranch_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EDemonBranch()
	{
		if (!Z_Registration_Info_UEnum_EDemonBranch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDemonBranch.InnerSingleton, Z_Construct_UEnum_Demo_EDemonBranch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDemonBranch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDragonBranch;
	static UEnum* EDragonBranch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDragonBranch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDragonBranch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EDragonBranch, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EDragonBranch"));
		}
		return Z_Registration_Info_UEnum_EDragonBranch.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EDragonBranch>()
	{
		return EDragonBranch_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EDragonBranch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EDragonBranch_Statics::Enumerators[] = {
		{ "EDragonBranch::None", (int64)EDragonBranch::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EDragonBranch_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "None.Displayname", "None" },
		{ "None.Name", "EDragonBranch::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EDragonBranch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EDragonBranch",
		"EDragonBranch",
		Z_Construct_UEnum_Demo_EDragonBranch_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EDragonBranch_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EDragonBranch_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EDragonBranch_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EDragonBranch()
	{
		if (!Z_Registration_Info_UEnum_EDragonBranch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDragonBranch.InnerSingleton, Z_Construct_UEnum_Demo_EDragonBranch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDragonBranch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EItemType, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EItemType_Statics::Enumerators[] = {
		{ "EItemType::Trash", (int64)EItemType::Trash },
		{ "EItemType::Material", (int64)EItemType::Material },
		{ "EItemType::Equipment", (int64)EItemType::Equipment },
		{ "EItemType::Mission", (int64)EItemType::Mission },
		{ "EItemType::Potion", (int64)EItemType::Potion },
		{ "EItemType::Scroll", (int64)EItemType::Scroll },
		{ "EItemType::Book", (int64)EItemType::Book },
		{ "EItemType::Ammunition", (int64)EItemType::Ammunition },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "Ammunition.Displayname", "Ammunition" },
		{ "Ammunition.Name", "EItemType::Ammunition" },
		{ "BlueprintType", "true" },
		{ "Book.Displayname", "Book" },
		{ "Book.Name", "EItemType::Book" },
		{ "Equipment.Displayname", "Equipment" },
		{ "Equipment.Name", "EItemType::Equipment" },
		{ "Material.Displayname", "Material" },
		{ "Material.Name", "EItemType::Material" },
		{ "Mission.Displayname", "Mission" },
		{ "Mission.Name", "EItemType::Mission" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "Potion.Displayname", "Potion" },
		{ "Potion.Name", "EItemType::Potion" },
		{ "Scroll.Displayname", "Scroll" },
		{ "Scroll.Name", "EItemType::Scroll" },
		{ "Trash.Displayname", "Trash" },
		{ "Trash.Name", "EItemType::Trash" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_Demo_EItemType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EItemType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EItemType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_Demo_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEquipSlot;
	static UEnum* EEquipSlot_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEquipSlot.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEquipSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_EEquipSlot, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("EEquipSlot"));
		}
		return Z_Registration_Info_UEnum_EEquipSlot.OuterSingleton;
	}
	template<> DEMO_API UEnum* StaticEnum<EEquipSlot>()
	{
		return EEquipSlot_StaticEnum();
	}
	struct Z_Construct_UEnum_Demo_EEquipSlot_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Demo_EEquipSlot_Statics::Enumerators[] = {
		{ "EEquipSlot::Unknown", (int64)EEquipSlot::Unknown },
		{ "EEquipSlot::Head", (int64)EEquipSlot::Head },
		{ "EEquipSlot::Shoulder", (int64)EEquipSlot::Shoulder },
		{ "EEquipSlot::Cloak", (int64)EEquipSlot::Cloak },
		{ "EEquipSlot::Armor", (int64)EEquipSlot::Armor },
		{ "EEquipSlot::Gloves", (int64)EEquipSlot::Gloves },
		{ "EEquipSlot::Belt", (int64)EEquipSlot::Belt },
		{ "EEquipSlot::Shoes", (int64)EEquipSlot::Shoes },
		{ "EEquipSlot::Neck", (int64)EEquipSlot::Neck },
		{ "EEquipSlot::Ring1", (int64)EEquipSlot::Ring1 },
		{ "EEquipSlot::Ring2", (int64)EEquipSlot::Ring2 },
		{ "EEquipSlot::Weapon1", (int64)EEquipSlot::Weapon1 },
		{ "EEquipSlot::Weapon2", (int64)EEquipSlot::Weapon2 },
		{ "EEquipSlot::RangedWeapon", (int64)EEquipSlot::RangedWeapon },
		{ "EEquipSlot::Cloth1", (int64)EEquipSlot::Cloth1 },
		{ "EEquipSlot::Cloth2", (int64)EEquipSlot::Cloth2 },
		{ "EEquipSlot::Pants", (int64)EEquipSlot::Pants },
		{ "EEquipSlot::InDoorShoes", (int64)EEquipSlot::InDoorShoes },
		{ "EEquipSlot::MaxNum", (int64)EEquipSlot::MaxNum },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Demo_EEquipSlot_Statics::Enum_MetaDataParams[] = {
		{ "Armor.Displayname", "Armor" },
		{ "Armor.Name", "EEquipSlot::Armor" },
		{ "Belt.Displayname", "Belt" },
		{ "Belt.Name", "EEquipSlot::Belt" },
		{ "BlueprintType", "true" },
		{ "Cloak.Displayname", "Cloak" },
		{ "Cloak.Name", "EEquipSlot::Cloak" },
		{ "Cloth1.Comment", "// \xe5\x86\x85\xe8\xa1\xa3\xe5\x8f\xaa\xe4\xbd\x9c\xe8\xa3\x85\xe6\x89\xae\n" },
		{ "Cloth1.Displayname", "TopCloth" },
		{ "Cloth1.Name", "EEquipSlot::Cloth1" },
		{ "Cloth1.ToolTip", "\xe5\x86\x85\xe8\xa1\xa3\xe5\x8f\xaa\xe4\xbd\x9c\xe8\xa3\x85\xe6\x89\xae" },
		{ "Cloth2.Displayname", "UpperCloth" },
		{ "Cloth2.Name", "EEquipSlot::Cloth2" },
		{ "Gloves.Displayname", "Gloves" },
		{ "Gloves.Name", "EEquipSlot::Gloves" },
		{ "Head.Displayname", "Head" },
		{ "Head.Name", "EEquipSlot::Head" },
		{ "InDoorShoes.Displayname", "InDoorShoes" },
		{ "InDoorShoes.Name", "EEquipSlot::InDoorShoes" },
		{ "MaxNum.Name", "EEquipSlot::MaxNum" },
		{ "ModuleRelativePath", "Public/MGameDefine.h" },
		{ "Neck.Displayname", "Neck" },
		{ "Neck.Name", "EEquipSlot::Neck" },
		{ "Pants.Displayname", "Pants" },
		{ "Pants.Name", "EEquipSlot::Pants" },
		{ "RangedWeapon.Displayname", "RangedWeapon" },
		{ "RangedWeapon.Name", "EEquipSlot::RangedWeapon" },
		{ "Ring1.Displayname", "Ring1" },
		{ "Ring1.Name", "EEquipSlot::Ring1" },
		{ "Ring2.Displayname", "Ring2" },
		{ "Ring2.Name", "EEquipSlot::Ring2" },
		{ "Shoes.Displayname", "Shoes" },
		{ "Shoes.Name", "EEquipSlot::Shoes" },
		{ "Shoulder.Displayname", "Shoulder" },
		{ "Shoulder.Name", "EEquipSlot::Shoulder" },
		{ "Unknown.Displayname", "Unknown" },
		{ "Unknown.Name", "EEquipSlot::Unknown" },
		{ "Weapon1.Displayname", "Weapon1" },
		{ "Weapon1.Name", "EEquipSlot::Weapon1" },
		{ "Weapon2.Displayname", "Weapon2" },
		{ "Weapon2.Name", "EEquipSlot::Weapon2" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_EEquipSlot_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Demo,
		nullptr,
		"EEquipSlot",
		"EEquipSlot",
		Z_Construct_UEnum_Demo_EEquipSlot_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EEquipSlot_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_EEquipSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_EEquipSlot_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Demo_EEquipSlot()
	{
		if (!Z_Registration_Info_UEnum_EEquipSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEquipSlot.InnerSingleton, Z_Construct_UEnum_Demo_EEquipSlot_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEquipSlot.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameDefine_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameDefine_h_Statics::EnumInfo[] = {
		{ ERpcErrorCode_StaticEnum, TEXT("ERpcErrorCode"), &Z_Registration_Info_UEnum_ERpcErrorCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1833949777U) },
		{ ELoginCode_StaticEnum, TEXT("ELoginCode"), &Z_Registration_Info_UEnum_ELoginCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 722538935U) },
		{ EGender_StaticEnum, TEXT("EGender"), &Z_Registration_Info_UEnum_EGender, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2220833329U) },
		{ EBirth_StaticEnum, TEXT("EBirth"), &Z_Registration_Info_UEnum_EBirth, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3026299245U) },
		{ ERoleClass_StaticEnum, TEXT("ERoleClass"), &Z_Registration_Info_UEnum_ERoleClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3260658597U) },
		{ ECamp_StaticEnum, TEXT("ECamp"), &Z_Registration_Info_UEnum_ECamp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3258973009U) },
		{ EItemState_StaticEnum, TEXT("EItemState"), &Z_Registration_Info_UEnum_EItemState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 91400112U) },
		{ ERace_StaticEnum, TEXT("ERace"), &Z_Registration_Info_UEnum_ERace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3957792283U) },
		{ EHumanBranch_StaticEnum, TEXT("EHumanBranch"), &Z_Registration_Info_UEnum_EHumanBranch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4276921744U) },
		{ EOrcBranch_StaticEnum, TEXT("EOrcBranch"), &Z_Registration_Info_UEnum_EOrcBranch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4239575402U) },
		{ EDwarfBranch_StaticEnum, TEXT("EDwarfBranch"), &Z_Registration_Info_UEnum_EDwarfBranch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3457596021U) },
		{ EElvenBranch_StaticEnum, TEXT("EElvenBranch"), &Z_Registration_Info_UEnum_EElvenBranch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1569258751U) },
		{ EFurryBranch_StaticEnum, TEXT("EFurryBranch"), &Z_Registration_Info_UEnum_EFurryBranch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1356294078U) },
		{ EUndeadBranch_StaticEnum, TEXT("EUndeadBranch"), &Z_Registration_Info_UEnum_EUndeadBranch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 406763022U) },
		{ EDemonBranch_StaticEnum, TEXT("EDemonBranch"), &Z_Registration_Info_UEnum_EDemonBranch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2123745813U) },
		{ EDragonBranch_StaticEnum, TEXT("EDragonBranch"), &Z_Registration_Info_UEnum_EDragonBranch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2005058842U) },
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2311727414U) },
		{ EEquipSlot_StaticEnum, TEXT("EEquipSlot"), &Z_Registration_Info_UEnum_EEquipSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2662456156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameDefine_h_1582674901(TEXT("/Script/Demo"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameDefine_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameDefine_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
