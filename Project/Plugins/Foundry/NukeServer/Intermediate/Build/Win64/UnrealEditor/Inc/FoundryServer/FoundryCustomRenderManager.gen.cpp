// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoundryServer/Public/FoundryCustomRenderManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoundryCustomRenderManager() {}
// Cross Module References
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryCustomRenderManager_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryCustomRenderManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FoundryServer();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryCustomPIEExecutor_NoRegister();
// End Cross Module References
	void UFoundryCustomRenderManager::StaticRegisterNativesUFoundryCustomRenderManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoundryCustomRenderManager);
	UClass* Z_Construct_UClass_UFoundryCustomRenderManager_NoRegister()
	{
		return UFoundryCustomRenderManager::StaticClass();
	}
	struct Z_Construct_UClass_UFoundryCustomRenderManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessMaterials_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PostProcessMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PostProcessMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Executor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Executor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoundryCustomRenderManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCustomRenderManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoundryCustomRenderManager.h" },
		{ "ModuleRelativePath", "Public/FoundryCustomRenderManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFoundryCustomRenderManager_Statics::NewProp_PostProcessMaterials_ValueProp = { "PostProcessMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFoundryCustomRenderManager_Statics::NewProp_PostProcessMaterials_Key_KeyProp = { "PostProcessMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCustomRenderManager_Statics::NewProp_PostProcessMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoundryCustomRenderManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFoundryCustomRenderManager_Statics::NewProp_PostProcessMaterials = { "PostProcessMaterials", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundryCustomRenderManager, PostProcessMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFoundryCustomRenderManager_Statics::NewProp_PostProcessMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomRenderManager_Statics::NewProp_PostProcessMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCustomRenderManager_Statics::NewProp_Executor_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoundryCustomRenderManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFoundryCustomRenderManager_Statics::NewProp_Executor = { "Executor", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundryCustomRenderManager, Executor), Z_Construct_UClass_UFoundryCustomPIEExecutor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFoundryCustomRenderManager_Statics::NewProp_Executor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomRenderManager_Statics::NewProp_Executor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoundryCustomRenderManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomRenderManager_Statics::NewProp_PostProcessMaterials_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomRenderManager_Statics::NewProp_PostProcessMaterials_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomRenderManager_Statics::NewProp_PostProcessMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomRenderManager_Statics::NewProp_Executor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoundryCustomRenderManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoundryCustomRenderManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoundryCustomRenderManager_Statics::ClassParams = {
		&UFoundryCustomRenderManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFoundryCustomRenderManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomRenderManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoundryCustomRenderManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomRenderManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoundryCustomRenderManager()
	{
		if (!Z_Registration_Info_UClass_UFoundryCustomRenderManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoundryCustomRenderManager.OuterSingleton, Z_Construct_UClass_UFoundryCustomRenderManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoundryCustomRenderManager.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UClass* StaticClass<UFoundryCustomRenderManager>()
	{
		return UFoundryCustomRenderManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoundryCustomRenderManager);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoundryCustomRenderManager, UFoundryCustomRenderManager::StaticClass, TEXT("UFoundryCustomRenderManager"), &Z_Registration_Info_UClass_UFoundryCustomRenderManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoundryCustomRenderManager), 894998831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderManager_h_1314172205(TEXT("/Script/FoundryServer"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
