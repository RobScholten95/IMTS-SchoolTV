// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoundryServer/Public/FoundryUE4Server.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoundryUE4Server() {}
// Cross Module References
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UServerSettings_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UServerSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FoundryServer();
// End Cross Module References
	void UServerSettings::StaticRegisterNativesUServerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UServerSettings);
	UClass* Z_Construct_UClass_UServerSettings_NoRegister()
	{
		return UServerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UServerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PortNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UServerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoundryUE4Server.h" },
		{ "ModuleRelativePath", "Public/FoundryUE4Server.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerSettings_Statics::NewProp_PortNumber_MetaData[] = {
		{ "Category", "Server Options" },
		{ "Comment", "/** The port number to use for the server. */" },
		{ "ModuleRelativePath", "Public/FoundryUE4Server.h" },
		{ "ToolTip", "The port number to use for the server." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UServerSettings_Statics::NewProp_PortNumber = { "PortNumber", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerSettings, PortNumber), METADATA_PARAMS(Z_Construct_UClass_UServerSettings_Statics::NewProp_PortNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerSettings_Statics::NewProp_PortNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UServerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerSettings_Statics::NewProp_PortNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UServerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UServerSettings_Statics::ClassParams = {
		&UServerSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UServerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UServerSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UServerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UServerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UServerSettings()
	{
		if (!Z_Registration_Info_UClass_UServerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UServerSettings.OuterSingleton, Z_Construct_UClass_UServerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UServerSettings.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UClass* StaticClass<UServerSettings>()
	{
		return UServerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UServerSettings, UServerSettings::StaticClass, TEXT("UServerSettings"), &Z_Registration_Info_UClass_UServerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UServerSettings), 2692816432U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_1025250326(TEXT("/Script/FoundryServer"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
