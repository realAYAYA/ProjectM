// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IM4U/Classes/MMD2UE4NameTableRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMD2UE4NameTableRow() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	IM4U_API UScriptStruct* Z_Construct_UScriptStruct_FMMD2UE4NameTableRow();
	UPackage* Z_Construct_UPackage__Script_IM4U();
// End Cross Module References

static_assert(std::is_polymorphic<FMMD2UE4NameTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMMD2UE4NameTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMD2UE4NameTableRow;
class UScriptStruct* FMMD2UE4NameTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMD2UE4NameTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMD2UE4NameTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMD2UE4NameTableRow, (UObject*)Z_Construct_UPackage__Script_IM4U(), TEXT("MMD2UE4NameTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_MMD2UE4NameTableRow.OuterSingleton;
}
template<> IM4U_API UScriptStruct* StaticStruct<FMMD2UE4NameTableRow>()
{
	return FMMD2UE4NameTableRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MmdOriginalName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MmdOriginalName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\xe4\xbb\x8eMMD\xe7\xb3\xbb\xe7\xbb\x9f\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xba\xe9\x9d\xa2\xe5\x90\x91UE4\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe6\x97\xb6\xe7\x9a\x84\xe8\xa1\xa8\xe5\xae\x9a\xe4\xb9\x89\n*->VMD\xe5\xaf\xbc\xe5\x85\xa5\xe6\x97\xb6\xe8\xbf\xbd\xe5\x8a\xa0\xe6\x8c\x87\xe5\xae\x9a\xe8\xaf\xa5\xe8\xa1\xa8\xe4\xbd\x9c\xe4\xb8\xbaMMD->UE4\xe7\x9a\x84\xe7\xbf\xbb\xe8\xaf\x91\xe4\xbd\xbf\xe7\x94\xa8\n*->CSV\xe5\xaf\xbc\xe5\x85\xa5\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe6\x97\xa5\xe8\xaf\xad\xe6\x97\xb6\xe8\xaf\xb7\xe7\x94\xa8UTF-8\xe4\xbf\x9d\xe5\xad\x98\n*@param Name\xef\xbc\x88\xe9\xbb\x98\xe8\xae\xa4Tag\xef\xbc\x89\xef\xbc\x9aUE4\xe4\xbe\xa7\xe5\x90\x8d\xe7\xa7\xb0\xef\xbc\x88\xe8\xae\xb0\xe8\xbd\xbd\xe9\xaa\xa8\xe9\xaa\xbc\xe5\x90\x8d\xe7\xa7\xb0\xe3\x80\x81Morphtarget\xe5\x90\x8d\xe7\xa7\xb0\xef\xbc\x89\n*@param MMDOriginalName:MMD\xe4\xbe\xa7\xe5\x90\x8d\xe7\xa7\xb0\xef\xbc\x88\xe8\xbe\x93\xe5\x85\xa5\xe9\xaa\xa8\xe9\xaa\xbc\xe5\x90\x8d\xe7\xa7\xb0\xe3\x80\x81\xe8\xa1\xa8\xe6\x83\x85\xe5\x90\x8d\xe7\xa7\xb0\xef\xbc\x89\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/MMD2UE4NameTableRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8eMMD\xe7\xb3\xbb\xe7\xbb\x9f\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xba\xe9\x9d\xa2\xe5\x90\x91UE4\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe6\x97\xb6\xe7\x9a\x84\xe8\xa1\xa8\xe5\xae\x9a\xe4\xb9\x89\n->VMD\xe5\xaf\xbc\xe5\x85\xa5\xe6\x97\xb6\xe8\xbf\xbd\xe5\x8a\xa0\xe6\x8c\x87\xe5\xae\x9a\xe8\xaf\xa5\xe8\xa1\xa8\xe4\xbd\x9c\xe4\xb8\xbaMMD->UE4\xe7\x9a\x84\xe7\xbf\xbb\xe8\xaf\x91\xe4\xbd\xbf\xe7\x94\xa8\n->CSV\xe5\xaf\xbc\xe5\x85\xa5\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe6\x97\xa5\xe8\xaf\xad\xe6\x97\xb6\xe8\xaf\xb7\xe7\x94\xa8UTF-8\xe4\xbf\x9d\xe5\xad\x98\n@param Name\xef\xbc\x88\xe9\xbb\x98\xe8\xae\xa4Tag\xef\xbc\x89\xef\xbc\x9aUE4\xe4\xbe\xa7\xe5\x90\x8d\xe7\xa7\xb0\xef\xbc\x88\xe8\xae\xb0\xe8\xbd\xbd\xe9\xaa\xa8\xe9\xaa\xbc\xe5\x90\x8d\xe7\xa7\xb0\xe3\x80\x81Morphtarget\xe5\x90\x8d\xe7\xa7\xb0\xef\xbc\x89\n@param MMDOriginalName:MMD\xe4\xbe\xa7\xe5\x90\x8d\xe7\xa7\xb0\xef\xbc\x88\xe8\xbe\x93\xe5\x85\xa5\xe9\xaa\xa8\xe9\xaa\xbc\xe5\x90\x8d\xe7\xa7\xb0\xe3\x80\x81\xe8\xa1\xa8\xe6\x83\x85\xe5\x90\x8d\xe7\xa7\xb0\xef\xbc\x89" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMD2UE4NameTableRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::NewProp_MmdOriginalName_MetaData[] = {
		{ "Category", "MMD" },
		{ "ModuleRelativePath", "Classes/MMD2UE4NameTableRow.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::NewProp_MmdOriginalName = { "MmdOriginalName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMD2UE4NameTableRow, MmdOriginalName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::NewProp_MmdOriginalName_MetaData), Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::NewProp_MmdOriginalName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::NewProp_MmdOriginalName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IM4U,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MMD2UE4NameTableRow",
		Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::PropPointers),
		sizeof(FMMD2UE4NameTableRow),
		alignof(FMMD2UE4NameTableRow),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMMD2UE4NameTableRow()
	{
		if (!Z_Registration_Info_UScriptStruct_MMD2UE4NameTableRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMD2UE4NameTableRow.InnerSingleton, Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MMD2UE4NameTableRow.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMD2UE4NameTableRow_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMD2UE4NameTableRow_h_Statics::ScriptStructInfo[] = {
		{ FMMD2UE4NameTableRow::StaticStruct, Z_Construct_UScriptStruct_FMMD2UE4NameTableRow_Statics::NewStructOps, TEXT("MMD2UE4NameTableRow"), &Z_Registration_Info_UScriptStruct_MMD2UE4NameTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMD2UE4NameTableRow), 1603943462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMD2UE4NameTableRow_h_457318639(TEXT("/Script/IM4U"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMD2UE4NameTableRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_DCC_IVP5U_Source_IM4U_Classes_MMD2UE4NameTableRow_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
