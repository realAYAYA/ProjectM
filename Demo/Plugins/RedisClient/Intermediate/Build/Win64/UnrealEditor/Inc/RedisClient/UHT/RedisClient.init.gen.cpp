// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedisClient_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RedisClient;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RedisClient()
	{
		if (!Z_Registration_Info_UPackage__Script_RedisClient.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RedisClient",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x62B980EB,
				0xFAF833E7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RedisClient.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RedisClient.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RedisClient(Z_Construct_UPackage__Script_RedisClient, TEXT("/Script/RedisClient"), Z_Registration_Info_UPackage__Script_RedisClient, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x62B980EB, 0xFAF833E7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
