// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoundryServer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FoundryServer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FoundryServer()
	{
		if (!Z_Registration_Info_UPackage__Script_FoundryServer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FoundryServer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xE8E37E14,
				0xBFE971A8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FoundryServer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FoundryServer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FoundryServer(Z_Construct_UPackage__Script_FoundryServer, TEXT("/Script/FoundryServer"), Z_Registration_Info_UPackage__Script_FoundryServer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE8E37E14, 0xBFE971A8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
