// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMDCameraImporter/Public/MMDUserImportVMDSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMDUserImportVMDSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MMDCAMERAIMPORTER_API UClass* Z_Construct_UClass_UMmdUserImportVmdSettings();
	MMDCAMERAIMPORTER_API UClass* Z_Construct_UClass_UMmdUserImportVmdSettings_NoRegister();
	MMDCAMERAIMPORTER_API UEnum* Z_Construct_UEnum_MMDCameraImporter_ECameraCutImportType();
	MMDCAMERAIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FFilmbackImportSettings();
	UPackage* Z_Construct_UPackage__Script_MMDCameraImporter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraCutImportType;
	static UEnum* ECameraCutImportType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECameraCutImportType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECameraCutImportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MMDCameraImporter_ECameraCutImportType, (UObject*)Z_Construct_UPackage__Script_MMDCameraImporter(), TEXT("ECameraCutImportType"));
		}
		return Z_Registration_Info_UEnum_ECameraCutImportType.OuterSingleton;
	}
	template<> MMDCAMERAIMPORTER_API UEnum* StaticEnum<ECameraCutImportType>()
	{
		return ECameraCutImportType_StaticEnum();
	}
	struct Z_Construct_UEnum_MMDCameraImporter_ECameraCutImportType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MMDCameraImporter_ECameraCutImportType_Statics::Enumerators[] = {
		{ "ECameraCutImportType::OneFrameInterval", (int64)ECameraCutImportType::OneFrameInterval },
		{ "ECameraCutImportType::ConstantKey", (int64)ECameraCutImportType::ConstantKey },
		{ "ECameraCutImportType::OneFrameIntervalWithConstantKey", (int64)ECameraCutImportType::OneFrameIntervalWithConstantKey },
		{ "ECameraCutImportType::ImportAsIs", (int64)ECameraCutImportType::ImportAsIs },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MMDCameraImporter_ECameraCutImportType_Statics::Enum_MetaDataParams[] = {
		{ "ConstantKey.DisplayName", "Constant Key (MMD 60 frame animation method)" },
		{ "ConstantKey.Name", "ECameraCutImportType::ConstantKey" },
		{ "ImportAsIs.DisplayName", "Import As Is (For 30 frame animation)" },
		{ "ImportAsIs.Name", "ECameraCutImportType::ImportAsIs" },
		{ "ModuleRelativePath", "Public/MMDUserImportVMDSettings.h" },
		{ "OneFrameInterval.DisplayName", "One Frame Interval (Best for Sequencer)" },
		{ "OneFrameInterval.Name", "ECameraCutImportType::OneFrameInterval" },
		{ "OneFrameIntervalWithConstantKey.DisplayNAme", "One Frame Interval with Constant Key (For fps scalable environment e.g. game)" },
		{ "OneFrameIntervalWithConstantKey.Name", "ECameraCutImportType::OneFrameIntervalWithConstantKey" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MMDCameraImporter_ECameraCutImportType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MMDCameraImporter,
		nullptr,
		"ECameraCutImportType",
		"ECameraCutImportType",
		Z_Construct_UEnum_MMDCameraImporter_ECameraCutImportType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MMDCameraImporter_ECameraCutImportType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MMDCameraImporter_ECameraCutImportType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MMDCameraImporter_ECameraCutImportType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MMDCameraImporter_ECameraCutImportType()
	{
		if (!Z_Registration_Info_UEnum_ECameraCutImportType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraCutImportType.InnerSingleton, Z_Construct_UEnum_MMDCameraImporter_ECameraCutImportType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECameraCutImportType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FilmbackImportSettings;
class UScriptStruct* FFilmbackImportSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FilmbackImportSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FilmbackImportSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilmbackImportSettings, (UObject*)Z_Construct_UPackage__Script_MMDCameraImporter(), TEXT("FilmbackImportSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FilmbackImportSettings.OuterSingleton;
}
template<> MMDCAMERAIMPORTER_API UScriptStruct* StaticStruct<FFilmbackImportSettings>()
{
	return FFilmbackImportSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensorWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SensorWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensorHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SensorHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MMDUserImportVMDSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilmbackImportSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::NewProp_SensorWidth_MetaData[] = {
		{ "Category", "FilmbackImportSettings" },
		{ "ClampMin", "0.001" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Horizontal size of filmback or digital sensor, in mm. */" },
#endif
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/MMDUserImportVMDSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizontal size of filmback or digital sensor, in mm." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::NewProp_SensorWidth = { "SensorWidth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFilmbackImportSettings, SensorWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::NewProp_SensorWidth_MetaData), Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::NewProp_SensorWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::NewProp_SensorHeight_MetaData[] = {
		{ "Category", "FilmbackImportSettings" },
		{ "ClampMin", "0.001" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertical size of filmback or digital sensor, in mm. */" },
#endif
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/MMDUserImportVMDSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertical size of filmback or digital sensor, in mm." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::NewProp_SensorHeight = { "SensorHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFilmbackImportSettings, SensorHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::NewProp_SensorHeight_MetaData), Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::NewProp_SensorHeight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::NewProp_SensorWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::NewProp_SensorHeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMDCameraImporter,
		nullptr,
		&NewStructOps,
		"FilmbackImportSettings",
		Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::PropPointers),
		sizeof(FFilmbackImportSettings),
		alignof(FFilmbackImportSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFilmbackImportSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_FilmbackImportSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FilmbackImportSettings.InnerSingleton, Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FilmbackImportSettings.InnerSingleton;
	}
	void UMmdUserImportVmdSettings::StaticRegisterNativesUMmdUserImportVmdSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMmdUserImportVmdSettings);
	UClass* Z_Construct_UClass_UMmdUserImportVmdSettings_NoRegister()
	{
		return UMmdUserImportVmdSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMmdUserImportVmdSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportUniformScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImportUniformScale;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CameraCutImportType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraCutImportType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraCutImportType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CameraCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddMotionBlurKey_MetaData[];
#endif
		static void NewProp_bAddMotionBlurKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddMotionBlurKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlurAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MotionBlurAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFilmback_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraFilmback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MMDCameraImporter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MMDUserImportVMDSettings.h" },
		{ "ModuleRelativePath", "Public/MMDUserImportVMDSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_ImportUniformScale_MetaData[] = {
		{ "Category", "Transform" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Import Uniform Scale */" },
#endif
		{ "ModuleRelativePath", "Public/MMDUserImportVMDSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Import Uniform Scale" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_ImportUniformScale = { "ImportUniformScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMmdUserImportVmdSettings, ImportUniformScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_ImportUniformScale_MetaData), Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_ImportUniformScale_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraCutImportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraCutImportType_MetaData[] = {
		{ "Category", "KeyFrame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera Cut Import Type */" },
#endif
		{ "ModuleRelativePath", "Public/MMDUserImportVMDSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Cut Import Type" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraCutImportType = { "CameraCutImportType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMmdUserImportVmdSettings, CameraCutImportType), Z_Construct_UEnum_MMDCameraImporter_ECameraCutImportType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraCutImportType_MetaData), Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraCutImportType_MetaData) }; // 679432749
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraCount_MetaData[] = {
		{ "Category", "KeyFrame" },
		{ "ClampMax", "4" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera Count */" },
#endif
		{ "ModuleRelativePath", "Public/MMDUserImportVMDSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Count" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraCount = { "CameraCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMmdUserImportVmdSettings, CameraCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraCount_MetaData), Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_bAddMotionBlurKey_MetaData[] = {
		{ "Category", "KeyFrame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add Motion Blur Key */" },
#endif
		{ "ModuleRelativePath", "Public/MMDUserImportVMDSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add Motion Blur Key" },
#endif
	};
#endif
	void Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_bAddMotionBlurKey_SetBit(void* Obj)
	{
		((UMmdUserImportVmdSettings*)Obj)->bAddMotionBlurKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_bAddMotionBlurKey = { "bAddMotionBlurKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMmdUserImportVmdSettings), &Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_bAddMotionBlurKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_bAddMotionBlurKey_MetaData), Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_bAddMotionBlurKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_MotionBlurAmount_MetaData[] = {
		{ "Category", "KeyFrame" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Motion Blur Amount */" },
#endif
		{ "EditCondition", "bAddMotionBlurKey" },
		{ "ModuleRelativePath", "Public/MMDUserImportVMDSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Motion Blur Amount" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_MotionBlurAmount = { "MotionBlurAmount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMmdUserImportVmdSettings, MotionBlurAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_MotionBlurAmount_MetaData), Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_MotionBlurAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraFilmback_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Filmback */" },
#endif
		{ "ModuleRelativePath", "Public/MMDUserImportVMDSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filmback" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraFilmback = { "CameraFilmback", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMmdUserImportVmdSettings, CameraFilmback), Z_Construct_UScriptStruct_FFilmbackImportSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraFilmback_MetaData), Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraFilmback_MetaData) }; // 442391358
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_ImportUniformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraCutImportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraCutImportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_bAddMotionBlurKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_MotionBlurAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::NewProp_CameraFilmback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMmdUserImportVmdSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::ClassParams = {
		&UMmdUserImportVmdSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMmdUserImportVmdSettings()
	{
		if (!Z_Registration_Info_UClass_UMmdUserImportVmdSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMmdUserImportVmdSettings.OuterSingleton, Z_Construct_UClass_UMmdUserImportVmdSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMmdUserImportVmdSettings.OuterSingleton;
	}
	template<> MMDCAMERAIMPORTER_API UClass* StaticClass<UMmdUserImportVmdSettings>()
	{
		return UMmdUserImportVmdSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMmdUserImportVmdSettings);
	UMmdUserImportVmdSettings::~UMmdUserImportVmdSettings() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_Statics::EnumInfo[] = {
		{ ECameraCutImportType_StaticEnum, TEXT("ECameraCutImportType"), &Z_Registration_Info_UEnum_ECameraCutImportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 679432749U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_Statics::ScriptStructInfo[] = {
		{ FFilmbackImportSettings::StaticStruct, Z_Construct_UScriptStruct_FFilmbackImportSettings_Statics::NewStructOps, TEXT("FilmbackImportSettings"), &Z_Registration_Info_UScriptStruct_FilmbackImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFilmbackImportSettings), 442391358U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMmdUserImportVmdSettings, UMmdUserImportVmdSettings::StaticClass, TEXT("UMmdUserImportVmdSettings"), &Z_Registration_Info_UClass_UMmdUserImportVmdSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMmdUserImportVmdSettings), 3090577626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_2620294607(TEXT("/Script/MMDCameraImporter"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_MMDCameraImporter_Public_MMDUserImportVMDSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
