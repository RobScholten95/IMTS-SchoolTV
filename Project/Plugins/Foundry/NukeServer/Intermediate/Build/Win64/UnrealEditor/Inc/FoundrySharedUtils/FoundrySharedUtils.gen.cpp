// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoundrySharedUtils/Public/FoundrySharedUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoundrySharedUtils() {}
// Cross Module References
	FOUNDRYSHAREDUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraData();
	UPackage* Z_Construct_UPackage__Script_FoundrySharedUtils();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraData;
class UScriptStruct* FCameraData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraData, Z_Construct_UPackage__Script_FoundrySharedUtils(), TEXT("CameraData"));
	}
	return Z_Registration_Info_UScriptStruct_CameraData.OuterSingleton;
}
template<> FOUNDRYSHAREDUTILS_API UScriptStruct* StaticStruct<FCameraData>()
{
	return FCameraData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// *************************************************************\n// FoundrySharedUtils is used for handling data structures and functions\n// that are useful in more than one other module, eg camera related things\n// that are needed for both the FoundryObjectIdPass and the FoundryCustomDeferredPass.\n// *************************************************************\n" },
		{ "ModuleRelativePath", "Public/FoundrySharedUtils.h" },
		{ "ToolTip", "FoundrySharedUtils is used for handling data structures and functions\nthat are useful in more than one other module, eg camera related things\nthat are needed for both the FoundryObjectIdPass and the FoundryCustomDeferredPass." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoundrySharedUtils.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoundrySharedUtils.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FoundrySharedUtils,
		nullptr,
		&NewStructOps,
		"CameraData",
		sizeof(FCameraData),
		alignof(FCameraData),
		Z_Construct_UScriptStruct_FCameraData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraData()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraData.InnerSingleton, Z_Construct_UScriptStruct_FCameraData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundrySharedUtils_Public_FoundrySharedUtils_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundrySharedUtils_Public_FoundrySharedUtils_h_Statics::ScriptStructInfo[] = {
		{ FCameraData::StaticStruct, Z_Construct_UScriptStruct_FCameraData_Statics::NewStructOps, TEXT("CameraData"), &Z_Registration_Info_UScriptStruct_CameraData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraData), 4289467299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundrySharedUtils_Public_FoundrySharedUtils_h_4148065163(TEXT("/Script/FoundrySharedUtils"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundrySharedUtils_Public_FoundrySharedUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundrySharedUtils_Public_FoundrySharedUtils_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
