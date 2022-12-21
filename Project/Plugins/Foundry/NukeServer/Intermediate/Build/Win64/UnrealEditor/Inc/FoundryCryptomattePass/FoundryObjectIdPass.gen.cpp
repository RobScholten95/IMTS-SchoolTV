// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoundryCryptomattePass/Public/FoundryObjectIdPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoundryObjectIdPass() {}
// Cross Module References
	FOUNDRYCRYPTOMATTEPASS_API UEnum* Z_Construct_UEnum_FoundryCryptomattePass_EFoundryObjectIdPassIdType();
	UPackage* Z_Construct_UPackage__Script_FoundryCryptomattePass();
	FOUNDRYCRYPTOMATTEPASS_API UClass* Z_Construct_UClass_UFoundryObjectIdRenderPass_NoRegister();
	FOUNDRYCRYPTOMATTEPASS_API UClass* Z_Construct_UClass_UFoundryObjectIdRenderPass();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineImagePassBase();
	FOUNDRYSHAREDUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFoundryObjectIdPassIdType;
	static UEnum* EFoundryObjectIdPassIdType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFoundryObjectIdPassIdType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFoundryObjectIdPassIdType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FoundryCryptomattePass_EFoundryObjectIdPassIdType, Z_Construct_UPackage__Script_FoundryCryptomattePass(), TEXT("EFoundryObjectIdPassIdType"));
		}
		return Z_Registration_Info_UEnum_EFoundryObjectIdPassIdType.OuterSingleton;
	}
	template<> FOUNDRYCRYPTOMATTEPASS_API UEnum* StaticEnum<EFoundryObjectIdPassIdType>()
	{
		return EFoundryObjectIdPassIdType_StaticEnum();
	}
	struct Z_Construct_UEnum_FoundryCryptomattePass_EFoundryObjectIdPassIdType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FoundryCryptomattePass_EFoundryObjectIdPassIdType_Statics::Enumerators[] = {
		{ "EFoundryObjectIdPassIdType::Full", (int64)EFoundryObjectIdPassIdType::Full },
		{ "EFoundryObjectIdPassIdType::Material", (int64)EFoundryObjectIdPassIdType::Material },
		{ "EFoundryObjectIdPassIdType::Actor", (int64)EFoundryObjectIdPassIdType::Actor },
		{ "EFoundryObjectIdPassIdType::ActorWithHierarchy", (int64)EFoundryObjectIdPassIdType::ActorWithHierarchy },
		{ "EFoundryObjectIdPassIdType::ActorUniqueName", (int64)EFoundryObjectIdPassIdType::ActorUniqueName },
		{ "EFoundryObjectIdPassIdType::Folder", (int64)EFoundryObjectIdPassIdType::Folder },
		{ "EFoundryObjectIdPassIdType::Layer", (int64)EFoundryObjectIdPassIdType::Layer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FoundryCryptomattePass_EFoundryObjectIdPassIdType_Statics::Enum_MetaDataParams[] = {
		{ "Actor.Comment", "/** Grouped by Actor Name, all materials for a given actor are merged together, and all actors with that name are merged together as well. */" },
		{ "Actor.Name", "EFoundryObjectIdPassIdType::Actor" },
		{ "Actor.ToolTip", "Grouped by Actor Name, all materials for a given actor are merged together, and all actors with that name are merged together as well." },
		{ "ActorUniqueName.Comment", "/** Foundry - Grouped by Actor FName */" },
		{ "ActorUniqueName.Name", "EFoundryObjectIdPassIdType::ActorUniqueName" },
		{ "ActorUniqueName.ToolTip", "Foundry - Grouped by Actor FName" },
		{ "ActorWithHierarchy.Comment", "/** Grouped by Actor Name and Folder Hierarchy. This means actors with the same name in different folders will not be merged together. */" },
		{ "ActorWithHierarchy.Name", "EFoundryObjectIdPassIdType::ActorWithHierarchy" },
		{ "ActorWithHierarchy.ToolTip", "Grouped by Actor Name and Folder Hierarchy. This means actors with the same name in different folders will not be merged together." },
		{ "BlueprintType", "true" },
		{ "Folder.Comment", "/** Grouped by Folder Name. All actors within a given folder hierarchy in the World Outliner are merged together. */" },
		{ "Folder.Name", "EFoundryObjectIdPassIdType::Folder" },
		{ "Folder.ToolTip", "Grouped by Folder Name. All actors within a given folder hierarchy in the World Outliner are merged together." },
		{ "Full.Comment", "/** As much information as the renderer can provide - unique per material per primitive in the world. */" },
		{ "Full.Name", "EFoundryObjectIdPassIdType::Full" },
		{ "Full.ToolTip", "As much information as the renderer can provide - unique per material per primitive in the world." },
		{ "Layer.Comment", "/** Primary Layer. This is the first layer found in the AActor::Layers array. May not do what you expect if an actor belongs to multiple layers. */" },
		{ "Layer.Name", "EFoundryObjectIdPassIdType::Layer" },
		{ "Layer.ToolTip", "Primary Layer. This is the first layer found in the AActor::Layers array. May not do what you expect if an actor belongs to multiple layers." },
		{ "Material.Comment", "/** Grouped by material name. This means different objects that use the same material will be merged. */" },
		{ "Material.Name", "EFoundryObjectIdPassIdType::Material" },
		{ "Material.ToolTip", "Grouped by material name. This means different objects that use the same material will be merged." },
		{ "ModuleRelativePath", "Public/FoundryObjectIdPass.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FoundryCryptomattePass_EFoundryObjectIdPassIdType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FoundryCryptomattePass,
		nullptr,
		"EFoundryObjectIdPassIdType",
		"EFoundryObjectIdPassIdType",
		Z_Construct_UEnum_FoundryCryptomattePass_EFoundryObjectIdPassIdType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FoundryCryptomattePass_EFoundryObjectIdPassIdType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FoundryCryptomattePass_EFoundryObjectIdPassIdType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FoundryCryptomattePass_EFoundryObjectIdPassIdType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FoundryCryptomattePass_EFoundryObjectIdPassIdType()
	{
		if (!Z_Registration_Info_UEnum_EFoundryObjectIdPassIdType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFoundryObjectIdPassIdType.InnerSingleton, Z_Construct_UEnum_FoundryCryptomattePass_EFoundryObjectIdPassIdType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFoundryObjectIdPassIdType.InnerSingleton;
	}
	void UFoundryObjectIdRenderPass::StaticRegisterNativesUFoundryObjectIdRenderPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoundryObjectIdRenderPass);
	UClass* Z_Construct_UClass_UFoundryObjectIdRenderPass_NoRegister()
	{
		return UFoundryObjectIdRenderPass::StaticClass();
	}
	struct Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_IdType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IdType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelOverdraw_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PixelOverdraw;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOverridesMap_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CameraOverridesMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOverridesMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CameraOverridesMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineImagePassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryCryptomattePass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FoundryObjectIdPass.h" },
		{ "ModuleRelativePath", "Public/FoundryObjectIdPass.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_IdType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_IdType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09* Specifies how you would like to segment the cryptomatte result\n\x09*/" },
		{ "ModuleRelativePath", "Public/FoundryObjectIdPass.h" },
		{ "ToolTip", "Specifies how you would like to segment the cryptomatte result" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_IdType = { "IdType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundryObjectIdRenderPass, IdType), Z_Construct_UEnum_FoundryCryptomattePass_EFoundryObjectIdPassIdType, METADATA_PARAMS(Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_IdType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_IdType_MetaData)) }; // 3291789083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_PixelOverdraw_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09* Specifies the amount of pixels of overdraw to render for each cubemap side (top, bottom, left & right).\n\x09* This can be necessary for avoiding seams when creating a latlong from cubemap in Nuke\n\x09*/" },
		{ "ModuleRelativePath", "Public/FoundryObjectIdPass.h" },
		{ "ToolTip", "Specifies the amount of pixels of overdraw to render for each cubemap side (top, bottom, left & right).\nThis can be necessary for avoiding seams when creating a latlong from cubemap in Nuke" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_PixelOverdraw = { "PixelOverdraw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundryObjectIdRenderPass, PixelOverdraw), METADATA_PARAMS(Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_PixelOverdraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_PixelOverdraw_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_CameraOverridesMap_ValueProp = { "CameraOverridesMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCameraData, METADATA_PARAMS(nullptr, 0) }; // 4289467299
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_CameraOverridesMap_Key_KeyProp = { "CameraOverridesMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_CameraOverridesMap_MetaData[] = {
		{ "Comment", "// Foundry = Map for camera render overrides \n" },
		{ "ModuleRelativePath", "Public/FoundryObjectIdPass.h" },
		{ "ToolTip", "Foundry = Map for camera render overrides" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_CameraOverridesMap = { "CameraOverridesMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundryObjectIdRenderPass, CameraOverridesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_CameraOverridesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_CameraOverridesMap_MetaData)) }; // 4289467299
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_IdType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_IdType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_PixelOverdraw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_CameraOverridesMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_CameraOverridesMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::NewProp_CameraOverridesMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoundryObjectIdRenderPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::ClassParams = {
		&UFoundryObjectIdRenderPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoundryObjectIdRenderPass()
	{
		if (!Z_Registration_Info_UClass_UFoundryObjectIdRenderPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoundryObjectIdRenderPass.OuterSingleton, Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoundryObjectIdRenderPass.OuterSingleton;
	}
	template<> FOUNDRYCRYPTOMATTEPASS_API UClass* StaticClass<UFoundryObjectIdRenderPass>()
	{
		return UFoundryObjectIdRenderPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoundryObjectIdRenderPass);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_Statics::EnumInfo[] = {
		{ EFoundryObjectIdPassIdType_StaticEnum, TEXT("EFoundryObjectIdPassIdType"), &Z_Registration_Info_UEnum_EFoundryObjectIdPassIdType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3291789083U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoundryObjectIdRenderPass, UFoundryObjectIdRenderPass::StaticClass, TEXT("UFoundryObjectIdRenderPass"), &Z_Registration_Info_UClass_UFoundryObjectIdRenderPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoundryObjectIdRenderPass), 1121422475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_3222537340(TEXT("/Script/FoundryCryptomattePass"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
