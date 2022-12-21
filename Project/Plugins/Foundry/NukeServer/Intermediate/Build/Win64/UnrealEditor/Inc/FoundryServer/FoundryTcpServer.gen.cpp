// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoundryServer/Public/FoundryTcpServer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoundryTcpServer() {}
// Cross Module References
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UNetworkManager_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UNetworkManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FoundryServer();
// End Cross Module References
	void UNetworkManager::StaticRegisterNativesUNetworkManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkManager);
	UClass* Z_Construct_UClass_UNetworkManager_NoRegister()
	{
		return UNetworkManager::StaticClass();
	}
	struct Z_Construct_UClass_UNetworkManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetworkManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Server to send and receive message\n */" },
		{ "IncludePath", "FoundryTcpServer.h" },
		{ "ModuleRelativePath", "Public/FoundryTcpServer.h" },
		{ "ToolTip", "Server to send and receive message" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetworkManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkManager_Statics::ClassParams = {
		&UNetworkManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNetworkManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetworkManager()
	{
		if (!Z_Registration_Info_UClass_UNetworkManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkManager.OuterSingleton, Z_Construct_UClass_UNetworkManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetworkManager.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UClass* StaticClass<UNetworkManager>()
	{
		return UNetworkManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkManager);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryTcpServer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryTcpServer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkManager, UNetworkManager::StaticClass, TEXT("UNetworkManager"), &Z_Registration_Info_UClass_UNetworkManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkManager), 3130691549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryTcpServer_h_3386485934(TEXT("/Script/FoundryServer"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryTcpServer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryTcpServer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
