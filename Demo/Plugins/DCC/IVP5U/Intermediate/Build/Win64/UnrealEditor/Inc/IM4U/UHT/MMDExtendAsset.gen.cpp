// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IM4U/Classes/MMDExtendAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMDExtendAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	IM4U_API UClass* Z_Construct_UClass_UMMDExtendAsset();
	IM4U_API UClass* Z_Construct_UClass_UMMDExtendAsset_NoRegister();
	IM4U_API UScriptStruct* Z_Construct_UScriptStruct_FMMD_IKInfo();
	IM4U_API UScriptStruct* Z_Construct_UScriptStruct_FMMD_IKLINK();
	UPackage* Z_Construct_UPackage__Script_IM4U();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMD_IKLINK;
class UScriptStruct* FMMD_IKLINK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMD_IKLINK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMD_IKLINK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMD_IKLINK, (UObject*)Z_Construct_UPackage__Script_IM4U(), TEXT("MMD_IKLINK"));
	}
	return Z_Registration_Info_UScriptStruct_MMD_IKLINK.OuterSingleton;
}
template<> IM4U_API UScriptStruct* StaticStruct<FMMD_IKLINK>()
{
	return FMMD_IKLINK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMMD_IKLINK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotLockFlag_MetaData[];
#endif
		static void NewProp_RotLockFlag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RotLockFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotLockMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotLockMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotLockMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotLockMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**********************\n* MMD Extend Info : Ik info\n***********************/// IK\xe9\x93\xbe\xe6\x8e\xa5\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MMD Extend Info : Ik info\n*********************// IK\xe9\x93\xbe\xe6\x8e\xa5\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMD_IKLINK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_BoneIndex_MetaData[] = {
		{ "Category", "MMD" },
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ue4 link bone index" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMD_IKLINK, BoneIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_BoneIndex_MetaData), Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_BoneIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "MMD" },
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ue4 link bone name" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMD_IKLINK, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_BoneName_MetaData), Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_BoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockFlag_MetaData[] = {
		{ "Category", "MMD" },
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, rotation limite, 0:OFF, 1:ON" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockFlag_SetBit(void* Obj)
	{
		((FMMD_IKLINK*)Obj)->RotLockFlag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockFlag = { "RotLockFlag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMMD_IKLINK), &Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockFlag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockFlag_MetaData), Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockFlag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockMin_MetaData[] = {
		{ "Category", "MMD" },
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation angle limit Euler[dig:-180~180] min" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockMin = { "RotLockMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMD_IKLINK, RotLockMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockMin_MetaData), Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockMax_MetaData[] = {
		{ "Category", "MMD" },
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation angle limit Euler[dig:-180~180] max" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockMax = { "RotLockMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMD_IKLINK, RotLockMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockMax_MetaData), Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockMax_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_BoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewProp_RotLockMax,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IM4U,
		nullptr,
		&NewStructOps,
		"MMD_IKLINK",
		Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::PropPointers),
		sizeof(FMMD_IKLINK),
		alignof(FMMD_IKLINK),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMMD_IKLINK()
	{
		if (!Z_Registration_Info_UScriptStruct_MMD_IKLINK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMD_IKLINK.InnerSingleton, Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MMD_IKLINK.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMD_IKInfo;
class UScriptStruct* FMMD_IKInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMD_IKInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMD_IKInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMD_IKInfo, (UObject*)Z_Construct_UPackage__Script_IM4U(), TEXT("MMD_IKInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MMD_IKInfo.OuterSingleton;
}
template<> IM4U_API UScriptStruct* StaticStruct<FMMD_IKInfo>()
{
	return FMMD_IKInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMMD_IKInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKBoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IKBoneIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IKBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetBoneIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoopNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotLimit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ikLinkList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ikLinkList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ikLinkList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IK\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IK\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMD_IKInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_IKBoneIndex_MetaData[] = {
		{ "Category", "MMD" },
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ue4 IK bone index" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_IKBoneIndex = { "IKBoneIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMD_IKInfo, IKBoneIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_IKBoneIndex_MetaData), Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_IKBoneIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_IKBoneName_MetaData[] = {
		{ "Category", "MMD" },
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ue4 IK bone name" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_IKBoneName = { "IKBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMD_IKInfo, IKBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_IKBoneName_MetaData), Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_IKBoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_TargetBoneIndex_MetaData[] = {
		{ "Category", "MMD" },
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ue4 target bone index" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_TargetBoneIndex = { "TargetBoneIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMD_IKInfo, TargetBoneIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_TargetBoneIndex_MetaData), Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_TargetBoneIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_TargetBoneName_MetaData[] = {
		{ "Category", "MMD" },
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ue4 target bone name" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_TargetBoneName = { "TargetBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMD_IKInfo, TargetBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_TargetBoneName_MetaData), Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_TargetBoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_LoopNum_MetaData[] = {
		{ "Category", "MMD" },
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CCD-IK loop count" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_LoopNum = { "LoopNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMD_IKInfo, LoopNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_LoopNum_MetaData), Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_LoopNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_RotLimit_MetaData[] = {
		{ "Category", "MMD" },
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CCD-IK unit angle[dig]" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_RotLimit = { "RotLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMD_IKInfo, RotLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_RotLimit_MetaData), Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_RotLimit_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_ikLinkList_Inner = { "ikLinkList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMMD_IKLINK, METADATA_PARAMS(0, nullptr) }; // 1484438014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_ikLinkList_MetaData[] = {
		{ "Category", "MMD" },
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CCD-IK link IK info" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_ikLinkList = { "ikLinkList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMD_IKInfo, ikLinkList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_ikLinkList_MetaData), Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_ikLinkList_MetaData) }; // 1484438014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_IKBoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_IKBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_TargetBoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_TargetBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_LoopNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_RotLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_ikLinkList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewProp_ikLinkList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IM4U,
		nullptr,
		&NewStructOps,
		"MMD_IKInfo",
		Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::PropPointers),
		sizeof(FMMD_IKInfo),
		alignof(FMMD_IKInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMMD_IKInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MMD_IKInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMD_IKInfo.InnerSingleton, Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MMD_IKInfo.InnerSingleton;
	}
	void UMMDExtendAsset::StaticRegisterNativesUMMDExtendAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMDExtendAsset);
	UClass* Z_Construct_UClass_UMMDExtendAsset_NoRegister()
	{
		return UMMDExtendAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMMDExtendAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelComment_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ModelComment;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IkInfoList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IkInfoList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IkInfoList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMDExtendAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IM4U,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDExtendAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDExtendAsset_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**********************\n* MMD Extend Info : Asset class\n***********************///UCLASS(hidecategories = Object)\n" },
#endif
		{ "IncludePath", "MMDExtendAsset.h" },
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MMD Extend Info : Asset class\n*********************//UCLASS(hidecategories = Object)" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_ModelName_MetaData[] = {
		{ "Category", "Header" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////////////////////////////////////\n// mmd target model name\n" },
#endif
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mmd target model name" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_ModelName = { "ModelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMMDExtendAsset, ModelName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_ModelName_MetaData), Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_ModelName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_ModelComment_MetaData[] = {
		{ "Category", "Header" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// mmd model comment \n" },
#endif
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
		{ "MultiLine", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mmd model comment" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_ModelComment = { "ModelComment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMMDExtendAsset, ModelComment), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_ModelComment_MetaData), Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_ModelComment_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_IkInfoList_Inner = { "IkInfoList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMMD_IKInfo, METADATA_PARAMS(0, nullptr) }; // 4293670358
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_IkInfoList_MetaData[] = {
		{ "Category", "IK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////////////////////////////////////\n// MMD-IK-Info is used to generate the AnimSequence form VMD file.\n" },
#endif
		{ "ModuleRelativePath", "Classes/MMDExtendAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MMD-IK-Info is used to generate the AnimSequence form VMD file." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_IkInfoList = { "IkInfoList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMMDExtendAsset, IkInfoList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_IkInfoList_MetaData), Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_IkInfoList_MetaData) }; // 4293670358
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMDExtendAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_ModelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_ModelComment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_IkInfoList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMDExtendAsset_Statics::NewProp_IkInfoList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMDExtendAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMDExtendAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMDExtendAsset_Statics::ClassParams = {
		&UMMDExtendAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMMDExtendAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMDExtendAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDExtendAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMDExtendAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMDExtendAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMMDExtendAsset()
	{
		if (!Z_Registration_Info_UClass_UMMDExtendAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMDExtendAsset.OuterSingleton, Z_Construct_UClass_UMMDExtendAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMMDExtendAsset.OuterSingleton;
	}
	template<> IM4U_API UClass* StaticClass<UMMDExtendAsset>()
	{
		return UMMDExtendAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMDExtendAsset);
	UMMDExtendAsset::~UMMDExtendAsset() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDExtendAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDExtendAsset_h_Statics::ScriptStructInfo[] = {
		{ FMMD_IKLINK::StaticStruct, Z_Construct_UScriptStruct_FMMD_IKLINK_Statics::NewStructOps, TEXT("MMD_IKLINK"), &Z_Registration_Info_UScriptStruct_MMD_IKLINK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMD_IKLINK), 1484438014U) },
		{ FMMD_IKInfo::StaticStruct, Z_Construct_UScriptStruct_FMMD_IKInfo_Statics::NewStructOps, TEXT("MMD_IKInfo"), &Z_Registration_Info_UScriptStruct_MMD_IKInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMD_IKInfo), 4293670358U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDExtendAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMMDExtendAsset, UMMDExtendAsset::StaticClass, TEXT("UMMDExtendAsset"), &Z_Registration_Info_UClass_UMMDExtendAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMDExtendAsset), 3356013713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDExtendAsset_h_490280578(TEXT("/Script/IM4U"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDExtendAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDExtendAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDExtendAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMDExtendAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
