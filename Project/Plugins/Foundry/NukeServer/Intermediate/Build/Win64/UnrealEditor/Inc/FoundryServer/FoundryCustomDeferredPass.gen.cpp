// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoundryServer/Public/FoundryCustomDeferredPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoundryCustomDeferredPass() {}
// Cross Module References
	FOUNDRYSERVER_API UEnum* Z_Construct_UEnum_FoundryServer_ERenderMode();
	UPackage* Z_Construct_UPackage__Script_FoundryServer();
	FOUNDRYSERVER_API UScriptStruct* Z_Construct_UScriptStruct_FFoundryPostProcessPass();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryCustomDeferredPass_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryCustomDeferredPass();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPassBase();
	FOUNDRYSHAREDUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERenderMode;
	static UEnum* ERenderMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERenderMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERenderMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FoundryServer_ERenderMode, Z_Construct_UPackage__Script_FoundryServer(), TEXT("ERenderMode"));
		}
		return Z_Registration_Info_UEnum_ERenderMode.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UEnum* StaticEnum<ERenderMode::Mode>()
	{
		return ERenderMode_StaticEnum();
	}
	struct Z_Construct_UEnum_FoundryServer_ERenderMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FoundryServer_ERenderMode_Statics::Enumerators[] = {
		{ "ERenderMode::RenderPass", (int64)ERenderMode::RenderPass },
		{ "ERenderMode::StencilLayer", (int64)ERenderMode::StencilLayer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FoundryServer_ERenderMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FoundryCustomDeferredPass.h" },
		{ "RenderPass.Comment", "// Disables stencil layers, post process materials will be added to the final image.\n" },
		{ "RenderPass.Name", "ERenderMode::RenderPass" },
		{ "RenderPass.ToolTip", "Disables stencil layers, post process materials will be added to the final image." },
		{ "StencilLayer.Comment", "// Enables stencil layers, post process materials will be added to the stencil layers.\n" },
		{ "StencilLayer.Name", "ERenderMode::StencilLayer" },
		{ "StencilLayer.ToolTip", "Enables stencil layers, post process materials will be added to the stencil layers." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FoundryServer_ERenderMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FoundryServer,
		nullptr,
		"ERenderMode",
		"ERenderMode::Mode",
		Z_Construct_UEnum_FoundryServer_ERenderMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FoundryServer_ERenderMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_FoundryServer_ERenderMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FoundryServer_ERenderMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FoundryServer_ERenderMode()
	{
		if (!Z_Registration_Info_UEnum_ERenderMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERenderMode.InnerSingleton, Z_Construct_UEnum_FoundryServer_ERenderMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERenderMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FoundryPostProcessPass;
class UScriptStruct* FFoundryPostProcessPass::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FoundryPostProcessPass.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FoundryPostProcessPass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoundryPostProcessPass, Z_Construct_UPackage__Script_FoundryServer(), TEXT("FoundryPostProcessPass"));
	}
	return Z_Registration_Info_UScriptStruct_FoundryPostProcessPass.OuterSingleton;
}
template<> FOUNDRYSERVER_API UScriptStruct* StaticStruct<FFoundryPostProcessPass>()
{
	return FFoundryPostProcessPass::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FoundryCustomDeferredPass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoundryPostProcessPass>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Name of the pass\n" },
		{ "ModuleRelativePath", "Public/FoundryCustomDeferredPass.h" },
		{ "ToolTip", "Name of the pass" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoundryPostProcessPass, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Post process material to use\n" },
		{ "ModuleRelativePath", "Public/FoundryCustomDeferredPass.h" },
		{ "ToolTip", "Post process material to use" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoundryPostProcessPass, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
		nullptr,
		&NewStructOps,
		"FoundryPostProcessPass",
		sizeof(FFoundryPostProcessPass),
		alignof(FFoundryPostProcessPass),
		Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFoundryPostProcessPass()
	{
		if (!Z_Registration_Info_UScriptStruct_FoundryPostProcessPass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FoundryPostProcessPass.InnerSingleton, Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FoundryPostProcessPass.InnerSingleton;
	}
	void UFoundryCustomDeferredPass::StaticRegisterNativesUFoundryCustomDeferredPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoundryCustomDeferredPass);
	UClass* Z_Construct_UClass_UFoundryCustomDeferredPass_NoRegister()
	{
		return UFoundryCustomDeferredPass::StaticClass();
	}
	struct Z_Construct_UClass_UFoundryCustomDeferredPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessPasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessPasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PostProcessPasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCubemap_MetaData[];
#endif
		static void NewProp_bRenderCubemap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCubemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelOverdraw_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PixelOverdraw;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StencilActorNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StencilActorNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StencilActorNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveOcclusionFromStencils_MetaData[];
#endif
		static void NewProp_bRemoveOcclusionFromStencils_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveOcclusionFromStencils;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveOccludingLayerShadows_MetaData[];
#endif
		static void NewProp_bRemoveOccludingLayerShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveOccludingLayerShadows;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOverridesMap_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CameraOverridesMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOverridesMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CameraOverridesMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StencilBackgroundMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StencilBackgroundMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineDeferredPassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FoundryCustomDeferredPass.h" },
		{ "ModuleRelativePath", "Public/FoundryCustomDeferredPass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_PostProcessPasses_Inner = { "PostProcessPasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFoundryPostProcessPass, METADATA_PARAMS(nullptr, 0) }; // 2656581914
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_PostProcessPasses_MetaData[] = {
		{ "Category", "Render Passes" },
		{ "Comment", "/**\n\x09* An array of additional post-processing materials to run after the frame is rendered. Using this feature may add a notable amount of render time.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FoundryCustomDeferredPass.h" },
		{ "ToolTip", "An array of additional post-processing materials to run after the frame is rendered. Using this feature may add a notable amount of render time." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_PostProcessPasses = { "PostProcessPasses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundryCustomDeferredPass, PostProcessPasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_PostProcessPasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_PostProcessPasses_MetaData)) }; // 2656581914
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_RenderMode_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09* Specifies how post process materials should be added and if stencil layers should be available or not\n\x09*/" },
		{ "ModuleRelativePath", "Public/FoundryCustomDeferredPass.h" },
		{ "ToolTip", "Specifies how post process materials should be added and if stencil layers should be available or not" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_RenderMode = { "RenderMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundryCustomDeferredPass, RenderMode), Z_Construct_UEnum_FoundryServer_ERenderMode, METADATA_PARAMS(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_RenderMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_RenderMode_MetaData)) }; // 2072575459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRenderCubemap_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09* Specifies whether to render the six sides of a cubemap instead of a regular camera render\n\x09*/" },
		{ "ModuleRelativePath", "Public/FoundryCustomDeferredPass.h" },
		{ "ToolTip", "Specifies whether to render the six sides of a cubemap instead of a regular camera render" },
	};
#endif
	void Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRenderCubemap_SetBit(void* Obj)
	{
		((UFoundryCustomDeferredPass*)Obj)->bRenderCubemap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRenderCubemap = { "bRenderCubemap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFoundryCustomDeferredPass), &Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRenderCubemap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRenderCubemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRenderCubemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_PixelOverdraw_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09* Specifies the amount of pixels of overdraw to render for each cubemap side (top, bottom, left & right).\n\x09* This can be necessary for avoiding seams when creating a latlong from cubemap in Nuke\n\x09*/" },
		{ "ModuleRelativePath", "Public/FoundryCustomDeferredPass.h" },
		{ "ToolTip", "Specifies the amount of pixels of overdraw to render for each cubemap side (top, bottom, left & right).\nThis can be necessary for avoiding seams when creating a latlong from cubemap in Nuke" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_PixelOverdraw = { "PixelOverdraw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundryCustomDeferredPass, PixelOverdraw), METADATA_PARAMS(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_PixelOverdraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_PixelOverdraw_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_StencilActorNames_Inner = { "StencilActorNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_StencilActorNames_MetaData[] = {
		{ "Category", "Stencil Layers" },
		{ "Comment", "/**\n\x09* List of actor names for which we want to create stencil layers\n\x09*/" },
		{ "EditCondition", "RenderMode==ERenderMode::StencilLayer" },
		{ "ModuleRelativePath", "Public/FoundryCustomDeferredPass.h" },
		{ "ToolTip", "List of actor names for which we want to create stencil layers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_StencilActorNames = { "StencilActorNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundryCustomDeferredPass, StencilActorNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_StencilActorNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_StencilActorNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRemoveOcclusionFromStencils_MetaData[] = {
		{ "Category", "Stencil Layers" },
		{ "Comment", "/**\n\x09* Whether to remove occlusion from the stencil layer renders. This hides all actors that occlude the actor being rendered.\n\x09*/" },
		{ "EditCondition", "RenderMode==ERenderMode::StencilLayer" },
		{ "ModuleRelativePath", "Public/FoundryCustomDeferredPass.h" },
		{ "ToolTip", "Whether to remove occlusion from the stencil layer renders. This hides all actors that occlude the actor being rendered." },
	};
#endif
	void Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRemoveOcclusionFromStencils_SetBit(void* Obj)
	{
		((UFoundryCustomDeferredPass*)Obj)->bRemoveOcclusionFromStencils = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRemoveOcclusionFromStencils = { "bRemoveOcclusionFromStencils", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFoundryCustomDeferredPass), &Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRemoveOcclusionFromStencils_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRemoveOcclusionFromStencils_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRemoveOcclusionFromStencils_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRemoveOccludingLayerShadows_MetaData[] = {
		{ "Category", "Stencil Layers" },
		{ "Comment", "/**\n\x09* Whether to remove shadows cast by the hidden occluding actors.\n\x09*/" },
		{ "EditCondition", "RenderMode==ERenderMode::StencilLayer && bRemoveOcclusionFromStencils" },
		{ "ModuleRelativePath", "Public/FoundryCustomDeferredPass.h" },
		{ "ToolTip", "Whether to remove shadows cast by the hidden occluding actors." },
	};
#endif
	void Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRemoveOccludingLayerShadows_SetBit(void* Obj)
	{
		((UFoundryCustomDeferredPass*)Obj)->bRemoveOccludingLayerShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRemoveOccludingLayerShadows = { "bRemoveOccludingLayerShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFoundryCustomDeferredPass), &Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRemoveOccludingLayerShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRemoveOccludingLayerShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRemoveOccludingLayerShadows_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_CameraOverridesMap_ValueProp = { "CameraOverridesMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCameraData, METADATA_PARAMS(nullptr, 0) }; // 4289467299
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_CameraOverridesMap_Key_KeyProp = { "CameraOverridesMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_CameraOverridesMap_MetaData[] = {
		{ "Comment", "// Map for camera render overrides \n" },
		{ "ModuleRelativePath", "Public/FoundryCustomDeferredPass.h" },
		{ "ToolTip", "Map for camera render overrides" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_CameraOverridesMap = { "CameraOverridesMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundryCustomDeferredPass, CameraOverridesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_CameraOverridesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_CameraOverridesMap_MetaData)) }; // 4289467299
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_StencilBackgroundMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoundryCustomDeferredPass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_StencilBackgroundMaterial = { "StencilBackgroundMaterial", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundryCustomDeferredPass, StencilBackgroundMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_StencilBackgroundMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_StencilBackgroundMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_PostProcessPasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_PostProcessPasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_RenderMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRenderCubemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_PixelOverdraw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_StencilActorNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_StencilActorNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRemoveOcclusionFromStencils,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_bRemoveOccludingLayerShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_CameraOverridesMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_CameraOverridesMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_CameraOverridesMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::NewProp_StencilBackgroundMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoundryCustomDeferredPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::ClassParams = {
		&UFoundryCustomDeferredPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoundryCustomDeferredPass()
	{
		if (!Z_Registration_Info_UClass_UFoundryCustomDeferredPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoundryCustomDeferredPass.OuterSingleton, Z_Construct_UClass_UFoundryCustomDeferredPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoundryCustomDeferredPass.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UClass* StaticClass<UFoundryCustomDeferredPass>()
	{
		return UFoundryCustomDeferredPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoundryCustomDeferredPass);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_Statics::EnumInfo[] = {
		{ ERenderMode_StaticEnum, TEXT("ERenderMode"), &Z_Registration_Info_UEnum_ERenderMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2072575459U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_Statics::ScriptStructInfo[] = {
		{ FFoundryPostProcessPass::StaticStruct, Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics::NewStructOps, TEXT("FoundryPostProcessPass"), &Z_Registration_Info_UScriptStruct_FoundryPostProcessPass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFoundryPostProcessPass), 2656581914U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoundryCustomDeferredPass, UFoundryCustomDeferredPass::StaticClass, TEXT("UFoundryCustomDeferredPass"), &Z_Registration_Info_UClass_UFoundryCustomDeferredPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoundryCustomDeferredPass), 766397170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_3000729153(TEXT("/Script/FoundryServer"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
