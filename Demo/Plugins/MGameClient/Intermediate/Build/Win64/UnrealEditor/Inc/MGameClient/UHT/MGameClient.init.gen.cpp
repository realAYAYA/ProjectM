// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMGameClient_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MGameClient;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MGameClient()
	{
		if (!Z_Registration_Info_UPackage__Script_MGameClient.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MGameClient",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x7295A8CB,
				0x1C806823,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MGameClient.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MGameClient.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MGameClient(Z_Construct_UPackage__Script_MGameClient, TEXT("/Script/MGameClient"), Z_Registration_Info_UPackage__Script_MGameClient, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7295A8CB, 0x1C806823));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
