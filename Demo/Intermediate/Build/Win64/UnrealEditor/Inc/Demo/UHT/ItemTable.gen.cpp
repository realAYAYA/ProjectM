// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MGameTables/ItemTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemTable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DEMO_API UClass* Z_Construct_UClass_UItemConfig();
	DEMO_API UClass* Z_Construct_UClass_UItemConfig_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UItemConfigManager();
	DEMO_API UClass* Z_Construct_UClass_UItemConfigManager_NoRegister();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature();
	DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FItemRow();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References

static_assert(std::is_polymorphic<FItemRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemRow;
class UScriptStruct* FItemRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemRow, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("ItemRow"));
	}
	return Z_Registration_Info_UScriptStruct_ItemRow.OuterSingleton;
}
template<> DEMO_API UScriptStruct* StaticStruct<FItemRow>()
{
	return FItemRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SellingPrice_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SellingPrice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemRow_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// *** END WRITING YOUR CODE - CUSTOMIZE ***\n// =============================================================================\n" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*** END WRITING YOUR CODE - CUSTOMIZE ***" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FItemRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x81\x93\xe5\x85\xb7Id */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x93\xe5\x85\xb7Id" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemRow, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x81\x93\xe5\x85\xb7\xe5\x90\x8d\xe7\xa7\xb0 */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x93\xe5\x85\xb7\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemRow, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x88\x86\xe7\xb1\xbb */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x86\xe7\xb1\xbb" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemRow, Type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Quality_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x93\x81\xe8\xb4\xa8 */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x93\x81\xe8\xb4\xa8" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemRow, Quality), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Quality_MetaData), Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Quality_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_MaxNum_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x8f\xa0\xe5\x8a\xa0\xe4\xb8\x8a\xe9\x99\x90 */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xa0\xe5\x8a\xa0\xe4\xb8\x8a\xe9\x99\x90" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_MaxNum = { "MaxNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemRow, MaxNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_MaxNum_MetaData), Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_MaxNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_SellingPrice_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x94\xae\xe4\xbb\xb7 */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x94\xae\xe4\xbb\xb7" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_SellingPrice = { "SellingPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemRow, SellingPrice), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_SellingPrice_MetaData), Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_SellingPrice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x81\x93\xe5\x85\xb7\xe6\x8f\x8f\xe8\xbf\xb0 */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x93\xe5\x85\xb7\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemRow, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x81\x93\xe5\x85\xb7\xe5\x9b\xbe\xe6\xa0\x87 */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x93\xe5\x85\xb7\xe5\x9b\xbe\xe6\xa0\x87" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemRow, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Icon_MetaData), Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Icon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Quality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_MaxNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_SellingPrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemRow_Statics::NewProp_Icon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemRow",
		Z_Construct_UScriptStruct_FItemRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRow_Statics::PropPointers),
		sizeof(FItemRow),
		alignof(FItemRow),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemRow_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRow_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemRow()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemRow.InnerSingleton, Z_Construct_UScriptStruct_FItemRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemRow.InnerSingleton;
	}
	void UItemConfig::StaticRegisterNativesUItemConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemConfig);
	UClass* Z_Construct_UClass_UItemConfig_NoRegister()
	{
		return UItemConfig::StaticClass();
	}
	struct Z_Construct_UClass_UItemConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SellingPrice_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SellingPrice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfig_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MGameTables/ItemTable.h" },
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemConfig_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x81\x93\xe5\x85\xb7Id */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x93\xe5\x85\xb7Id" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemConfig_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemConfig, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfig_Statics::NewProp_Id_MetaData), Z_Construct_UClass_UItemConfig_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemConfig_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x81\x93\xe5\x85\xb7\xe5\x90\x8d\xe7\xa7\xb0 */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x93\xe5\x85\xb7\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UItemConfig_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemConfig, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfig_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UItemConfig_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemConfig_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x88\x86\xe7\xb1\xbb */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x86\xe7\xb1\xbb" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemConfig_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemConfig, Type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfig_Statics::NewProp_Type_MetaData), Z_Construct_UClass_UItemConfig_Statics::NewProp_Type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemConfig_Statics::NewProp_Quality_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x93\x81\xe8\xb4\xa8 */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x93\x81\xe8\xb4\xa8" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemConfig_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemConfig, Quality), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfig_Statics::NewProp_Quality_MetaData), Z_Construct_UClass_UItemConfig_Statics::NewProp_Quality_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemConfig_Statics::NewProp_MaxNum_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x8f\xa0\xe5\x8a\xa0\xe4\xb8\x8a\xe9\x99\x90 */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xa0\xe5\x8a\xa0\xe4\xb8\x8a\xe9\x99\x90" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemConfig_Statics::NewProp_MaxNum = { "MaxNum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemConfig, MaxNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfig_Statics::NewProp_MaxNum_MetaData), Z_Construct_UClass_UItemConfig_Statics::NewProp_MaxNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemConfig_Statics::NewProp_SellingPrice_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x94\xae\xe4\xbb\xb7 */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x94\xae\xe4\xbb\xb7" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemConfig_Statics::NewProp_SellingPrice = { "SellingPrice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemConfig, SellingPrice), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfig_Statics::NewProp_SellingPrice_MetaData), Z_Construct_UClass_UItemConfig_Statics::NewProp_SellingPrice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemConfig_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x81\x93\xe5\x85\xb7\xe6\x8f\x8f\xe8\xbf\xb0 */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x93\xe5\x85\xb7\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UItemConfig_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemConfig, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfig_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UItemConfig_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemConfig_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x81\x93\xe5\x85\xb7\xe5\x9b\xbe\xe6\xa0\x87 */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x93\xe5\x85\xb7\xe5\x9b\xbe\xe6\xa0\x87" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UItemConfig_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemConfig, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfig_Statics::NewProp_Icon_MetaData), Z_Construct_UClass_UItemConfig_Statics::NewProp_Icon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemConfig_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemConfig_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemConfig_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemConfig_Statics::NewProp_Quality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemConfig_Statics::NewProp_MaxNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemConfig_Statics::NewProp_SellingPrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemConfig_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemConfig_Statics::NewProp_Icon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemConfig_Statics::ClassParams = {
		&UItemConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UItemConfig()
	{
		if (!Z_Registration_Info_UClass_UItemConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemConfig.OuterSingleton, Z_Construct_UClass_UItemConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemConfig.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UItemConfig>()
	{
		return UItemConfig::StaticClass();
	}
	UItemConfig::UItemConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemConfig);
	UItemConfig::~UItemConfig() {}
	struct Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnForeachItemConfig_Parms
		{
			const UItemConfig* Entry;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::NewProp_Entry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnForeachItemConfig_Parms, Entry), Z_Construct_UClass_UItemConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::NewProp_Entry_MetaData), Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::NewProp_Entry_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::NewProp_Entry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnForeachItemConfig__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::_Script_Demo_eventOnForeachItemConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::_Script_Demo_eventOnForeachItemConfig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnForeachItemConfig_DelegateWrapper(const FScriptDelegate& OnForeachItemConfig, const UItemConfig* Entry)
{
	struct _Script_Demo_eventOnForeachItemConfig_Parms
	{
		const UItemConfig* Entry;
	};
	_Script_Demo_eventOnForeachItemConfig_Parms Parms;
	Parms.Entry=Entry;
	OnForeachItemConfig.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UItemConfigManager::execGetConfigFileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetConfigFileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemConfigManager::execK2_Foreach)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_Foreach(FOnForeachItemConfig(Z_Param_Out_InCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemConfigManager::execGet)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UItemConfig**)Z_Param__Result=P_THIS->Get(Z_Param_Out_InKey);
		P_NATIVE_END;
	}
	void UItemConfigManager::StaticRegisterNativesUItemConfigManager()
	{
		UClass* Class = UItemConfigManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &UItemConfigManager::execGet },
			{ "GetConfigFileName", &UItemConfigManager::execGetConfigFileName },
			{ "K2_Foreach", &UItemConfigManager::execK2_Foreach },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemConfigManager_Get_Statics
	{
		struct ItemConfigManager_eventGet_Parms
		{
			int32 InKey;
			const UItemConfig* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InKey;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemConfigManager_Get_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemConfigManager_Get_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemConfigManager_eventGet_Parms, InKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemConfigManager_Get_Statics::NewProp_InKey_MetaData), Z_Construct_UFunction_UItemConfigManager_Get_Statics::NewProp_InKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemConfigManager_Get_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemConfigManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemConfigManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_UItemConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemConfigManager_Get_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UItemConfigManager_Get_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemConfigManager_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemConfigManager_Get_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemConfigManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemConfigManager_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x9f\xa5\xe6\x89\xbe */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9f\xa5\xe6\x89\xbe" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemConfigManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemConfigManager, nullptr, "Get", nullptr, nullptr, Z_Construct_UFunction_UItemConfigManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemConfigManager_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemConfigManager_Get_Statics::ItemConfigManager_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemConfigManager_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemConfigManager_Get_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemConfigManager_Get_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemConfigManager_Get_Statics::ItemConfigManager_eventGet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemConfigManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemConfigManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemConfigManager_GetConfigFileName_Statics
	{
		struct ItemConfigManager_eventGetConfigFileName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UItemConfigManager_GetConfigFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemConfigManager_eventGetConfigFileName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemConfigManager_GetConfigFileName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemConfigManager_GetConfigFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemConfigManager_GetConfigFileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0 */" },
#endif
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemConfigManager_GetConfigFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemConfigManager, nullptr, "GetConfigFileName", nullptr, nullptr, Z_Construct_UFunction_UItemConfigManager_GetConfigFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemConfigManager_GetConfigFileName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemConfigManager_GetConfigFileName_Statics::ItemConfigManager_eventGetConfigFileName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemConfigManager_GetConfigFileName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemConfigManager_GetConfigFileName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemConfigManager_GetConfigFileName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemConfigManager_GetConfigFileName_Statics::ItemConfigManager_eventGetConfigFileName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemConfigManager_GetConfigFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemConfigManager_GetConfigFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics
	{
		struct ItemConfigManager_eventK2_Foreach_Parms
		{
			FScriptDelegate InCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::NewProp_InCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::NewProp_InCallback = { "InCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemConfigManager_eventK2_Foreach_Parms, InCallback), Z_Construct_UDelegateFunction_Demo_OnForeachItemConfig__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::NewProp_InCallback_MetaData), Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::NewProp_InCallback_MetaData) }; // 1174997930
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::NewProp_InCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x81\x8d\xe5\x8e\x86 */" },
#endif
		{ "DisplayName", "Foreach" },
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x8d\xe5\x8e\x86" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemConfigManager, nullptr, "K2_Foreach", nullptr, nullptr, Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::ItemConfigManager_eventK2_Foreach_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::ItemConfigManager_eventK2_Foreach_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemConfigManager_K2_Foreach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemConfigManager_K2_Foreach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemConfigManager);
	UClass* Z_Construct_UClass_UItemConfigManager_NoRegister()
	{
		return UItemConfigManager::StaticClass();
	}
	struct Z_Construct_UClass_UItemConfigManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Data_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Data_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemConfigManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfigManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemConfigManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemConfigManager_Get, "Get" }, // 4164684171
		{ &Z_Construct_UFunction_UItemConfigManager_GetConfigFileName, "GetConfigFileName" }, // 2657309641
		{ &Z_Construct_UFunction_UItemConfigManager_K2_Foreach, "K2_Foreach" }, // 323942366
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfigManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemConfigManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MGameTables/ItemTable.h" },
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemConfigManager_Statics::NewProp_Data_ValueProp = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UItemConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemConfigManager_Statics::NewProp_Data_Key_KeyProp = { "Data_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemConfigManager_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/MGameTables/ItemTable.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UItemConfigManager_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemConfigManager, Data), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfigManager_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UItemConfigManager_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemConfigManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemConfigManager_Statics::NewProp_Data_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemConfigManager_Statics::NewProp_Data_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemConfigManager_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemConfigManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemConfigManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemConfigManager_Statics::ClassParams = {
		&UItemConfigManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemConfigManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfigManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfigManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemConfigManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemConfigManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UItemConfigManager()
	{
		if (!Z_Registration_Info_UClass_UItemConfigManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemConfigManager.OuterSingleton, Z_Construct_UClass_UItemConfigManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemConfigManager.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UItemConfigManager>()
	{
		return UItemConfigManager::StaticClass();
	}
	UItemConfigManager::UItemConfigManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemConfigManager);
	UItemConfigManager::~UItemConfigManager() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_Statics::ScriptStructInfo[] = {
		{ FItemRow::StaticStruct, Z_Construct_UScriptStruct_FItemRow_Statics::NewStructOps, TEXT("ItemRow"), &Z_Registration_Info_UScriptStruct_ItemRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemRow), 3879578835U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemConfig, UItemConfig::StaticClass, TEXT("UItemConfig"), &Z_Registration_Info_UClass_UItemConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemConfig), 1541611814U) },
		{ Z_Construct_UClass_UItemConfigManager, UItemConfigManager::StaticClass, TEXT("UItemConfigManager"), &Z_Registration_Info_UClass_UItemConfigManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemConfigManager), 3008628899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_3340650979(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_MGameTables_ItemTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
