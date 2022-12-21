// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoundryServer/Public/FoundryCustomPIEExecutor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoundryCustomPIEExecutor() {}
// Cross Module References
	FOUNDRYSERVER_API UScriptStruct* Z_Construct_UScriptStruct_FRenderUserData();
	UPackage* Z_Construct_UPackage__Script_FoundryServer();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryCustomPIEExecutor_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryCustomPIEExecutor();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineLinearExecutorBase();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderUserData;
class UScriptStruct* FRenderUserData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderUserData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderUserData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderUserData, Z_Construct_UPackage__Script_FoundryServer(), TEXT("RenderUserData"));
	}
	return Z_Registration_Info_UScriptStruct_RenderUserData.OuterSingleton;
}
template<> FOUNDRYSERVER_API UScriptStruct* StaticStruct<FRenderUserData>()
{
	return FRenderUserData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRenderUserData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThreadID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ThreadID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPortRender_MetaData[];
#endif
		static void NewProp_bPortRender_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPortRender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderUserData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A data struct to store any additional data \n// we want to keep for each job in the pipeline\n" },
		{ "ModuleRelativePath", "Public/FoundryCustomPIEExecutor.h" },
		{ "ToolTip", "A data struct to store any additional data\nwe want to keep for each job in the pipeline" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderUserData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderUserData_Statics::NewProp_ThreadID_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoundryCustomPIEExecutor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRenderUserData_Statics::NewProp_ThreadID = { "ThreadID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderUserData, ThreadID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderUserData_Statics::NewProp_ThreadID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderUserData_Statics::NewProp_ThreadID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderUserData_Statics::NewProp_bPortRender_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoundryCustomPIEExecutor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRenderUserData_Statics::NewProp_bPortRender_SetBit(void* Obj)
	{
		((FRenderUserData*)Obj)->bPortRender = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRenderUserData_Statics::NewProp_bPortRender = { "bPortRender", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRenderUserData), &Z_Construct_UScriptStruct_FRenderUserData_Statics::NewProp_bPortRender_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderUserData_Statics::NewProp_bPortRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderUserData_Statics::NewProp_bPortRender_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderUserData_Statics::NewProp_ThreadID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderUserData_Statics::NewProp_bPortRender,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
		nullptr,
		&NewStructOps,
		"RenderUserData",
		sizeof(FRenderUserData),
		alignof(FRenderUserData),
		Z_Construct_UScriptStruct_FRenderUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderUserData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderUserData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderUserData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderUserData()
	{
		if (!Z_Registration_Info_UScriptStruct_RenderUserData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderUserData.InnerSingleton, Z_Construct_UScriptStruct_FRenderUserData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RenderUserData.InnerSingleton;
	}
	void UFoundryCustomPIEExecutor::StaticRegisterNativesUFoundryCustomPIEExecutor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoundryCustomPIEExecutor);
	UClass* Z_Construct_UClass_UFoundryCustomPIEExecutor_NoRegister()
	{
		return UFoundryCustomPIEExecutor::StaticClass();
	}
	struct Z_Construct_UClass_UFoundryCustomPIEExecutor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoundryCustomPIEExecutor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineLinearExecutorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCustomPIEExecutor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FoundryCustomPIEExecutor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FoundryCustomPIEExecutor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoundryCustomPIEExecutor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoundryCustomPIEExecutor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoundryCustomPIEExecutor_Statics::ClassParams = {
		&UFoundryCustomPIEExecutor::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoundryCustomPIEExecutor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomPIEExecutor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoundryCustomPIEExecutor()
	{
		if (!Z_Registration_Info_UClass_UFoundryCustomPIEExecutor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoundryCustomPIEExecutor.OuterSingleton, Z_Construct_UClass_UFoundryCustomPIEExecutor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoundryCustomPIEExecutor.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UClass* StaticClass<UFoundryCustomPIEExecutor>()
	{
		return UFoundryCustomPIEExecutor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoundryCustomPIEExecutor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomPIEExecutor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomPIEExecutor_h_Statics::ScriptStructInfo[] = {
		{ FRenderUserData::StaticStruct, Z_Construct_UScriptStruct_FRenderUserData_Statics::NewStructOps, TEXT("RenderUserData"), &Z_Registration_Info_UScriptStruct_RenderUserData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderUserData), 899847237U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomPIEExecutor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoundryCustomPIEExecutor, UFoundryCustomPIEExecutor::StaticClass, TEXT("UFoundryCustomPIEExecutor"), &Z_Registration_Info_UClass_UFoundryCustomPIEExecutor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoundryCustomPIEExecutor), 1749801737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomPIEExecutor_h_1703292587(TEXT("/Script/FoundryServer"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomPIEExecutor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomPIEExecutor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomPIEExecutor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomPIEExecutor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
