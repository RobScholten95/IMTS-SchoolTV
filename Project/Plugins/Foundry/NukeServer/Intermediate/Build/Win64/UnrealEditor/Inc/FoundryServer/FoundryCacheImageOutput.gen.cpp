// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoundryServer/Public/FoundryCacheImageOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoundryCacheImageOutput() {}
// Cross Module References
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryCacheImageOutput_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryCacheImageOutput();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineOutputBase();
	UPackage* Z_Construct_UPackage__Script_FoundryServer();
// End Cross Module References
	void UFoundryCacheImageOutput::StaticRegisterNativesUFoundryCacheImageOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoundryCacheImageOutput);
	UClass* Z_Construct_UClass_UFoundryCacheImageOutput_NoRegister()
	{
		return UFoundryCacheImageOutput::StaticClass();
	}
	struct Z_Construct_UClass_UFoundryCacheImageOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoundryCacheImageOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineOutputBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCacheImageOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FoundryCacheImageOutput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FoundryCacheImageOutput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoundryCacheImageOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoundryCacheImageOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoundryCacheImageOutput_Statics::ClassParams = {
		&UFoundryCacheImageOutput::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFoundryCacheImageOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCacheImageOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoundryCacheImageOutput()
	{
		if (!Z_Registration_Info_UClass_UFoundryCacheImageOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoundryCacheImageOutput.OuterSingleton, Z_Construct_UClass_UFoundryCacheImageOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoundryCacheImageOutput.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UClass* StaticClass<UFoundryCacheImageOutput>()
	{
		return UFoundryCacheImageOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoundryCacheImageOutput);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCacheImageOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCacheImageOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoundryCacheImageOutput, UFoundryCacheImageOutput::StaticClass, TEXT("UFoundryCacheImageOutput"), &Z_Registration_Info_UClass_UFoundryCacheImageOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoundryCacheImageOutput), 689576739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCacheImageOutput_h_309300615(TEXT("/Script/FoundryServer"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCacheImageOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCacheImageOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
