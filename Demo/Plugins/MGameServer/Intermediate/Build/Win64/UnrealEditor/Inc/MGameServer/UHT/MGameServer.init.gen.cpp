// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMGameServer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MGameServer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MGameServer()
	{
		if (!Z_Registration_Info_UPackage__Script_MGameServer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MGameServer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xD6C33485,
				0x15001176,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MGameServer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MGameServer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MGameServer(Z_Construct_UPackage__Script_MGameServer, TEXT("/Script/MGameServer"), Z_Registration_Info_UPackage__Script_MGameServer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD6C33485, 0x15001176));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
