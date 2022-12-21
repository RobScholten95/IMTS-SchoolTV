// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoundryServer/Public/FoundryCustomRenderSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoundryCustomRenderSettings() {}
// Cross Module References
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UMotionBlurSetting_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UMotionBlurSetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	UPackage* Z_Construct_UPackage__Script_FoundryServer();
// End Cross Module References
	void UMotionBlurSetting::StaticRegisterNativesUMotionBlurSetting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionBlurSetting);
	UClass* Z_Construct_UClass_UMotionBlurSetting_NoRegister()
	{
		return UMotionBlurSetting::StaticClass();
	}
	struct Z_Construct_UClass_UMotionBlurSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableMotionBlur_MetaData[];
#endif
		static void NewProp_bDisableMotionBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableMotionBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMotionBlurAmount_MetaData[];
#endif
		static void NewProp_bOverrideMotionBlurAmount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMotionBlurAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlurAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MotionBlurAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMotionBlurMax_MetaData[];
#endif
		static void NewProp_bOverrideMotionBlurMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMotionBlurMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlurMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MotionBlurMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionBlurSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionBlurSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FoundryCustomRenderSettings.h" },
		{ "ModuleRelativePath", "Public/FoundryCustomRenderSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bDisableMotionBlur_MetaData[] = {
		{ "Category", "Motion Blur Settings" },
		{ "ModuleRelativePath", "Public/FoundryCustomRenderSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bDisableMotionBlur_SetBit(void* Obj)
	{
		((UMotionBlurSetting*)Obj)->bDisableMotionBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bDisableMotionBlur = { "bDisableMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMotionBlurSetting), &Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bDisableMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bDisableMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bDisableMotionBlur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bOverrideMotionBlurAmount_MetaData[] = {
		{ "Category", "Motion Blur Settings|Overrides" },
		{ "EditCondition", "!bDisableMotionBlur" },
		{ "ModuleRelativePath", "Public/FoundryCustomRenderSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bOverrideMotionBlurAmount_SetBit(void* Obj)
	{
		((UMotionBlurSetting*)Obj)->bOverrideMotionBlurAmount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bOverrideMotionBlurAmount = { "bOverrideMotionBlurAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMotionBlurSetting), &Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bOverrideMotionBlurAmount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bOverrideMotionBlurAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bOverrideMotionBlurAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_MotionBlurAmount_MetaData[] = {
		{ "Category", "Motion Blur Settings|Overrides" },
		{ "Comment", "/** Sets the scale of the motion blur */" },
		{ "EditCondition", "!bDisableMotionBlur && bOverrideMotionBlurAmount" },
		{ "ModuleRelativePath", "Public/FoundryCustomRenderSettings.h" },
		{ "ToolTip", "Sets the scale of the motion blur" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_MotionBlurAmount = { "MotionBlurAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionBlurSetting, MotionBlurAmount), METADATA_PARAMS(Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_MotionBlurAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_MotionBlurAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bOverrideMotionBlurMax_MetaData[] = {
		{ "Category", "Motion Blur Settings|Overrides" },
		{ "EditCondition", "!bDisableMotionBlur" },
		{ "ModuleRelativePath", "Public/FoundryCustomRenderSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bOverrideMotionBlurMax_SetBit(void* Obj)
	{
		((UMotionBlurSetting*)Obj)->bOverrideMotionBlurMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bOverrideMotionBlurMax = { "bOverrideMotionBlurMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMotionBlurSetting), &Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bOverrideMotionBlurMax_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bOverrideMotionBlurMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bOverrideMotionBlurMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_MotionBlurMax_MetaData[] = {
		{ "Category", "Motion Blur Settings|Overrides" },
		{ "Comment", "/** Set the max length of the motion blur, in percent of the screen width */" },
		{ "EditCondition", "!bDisableMotionBlur && bOverrideMotionBlurMax" },
		{ "ModuleRelativePath", "Public/FoundryCustomRenderSettings.h" },
		{ "ToolTip", "Set the max length of the motion blur, in percent of the screen width" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_MotionBlurMax = { "MotionBlurMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionBlurSetting, MotionBlurMax), METADATA_PARAMS(Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_MotionBlurMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_MotionBlurMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionBlurSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bDisableMotionBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bOverrideMotionBlurAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_MotionBlurAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_bOverrideMotionBlurMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionBlurSetting_Statics::NewProp_MotionBlurMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionBlurSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionBlurSetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionBlurSetting_Statics::ClassParams = {
		&UMotionBlurSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMotionBlurSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMotionBlurSetting_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionBlurSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionBlurSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionBlurSetting()
	{
		if (!Z_Registration_Info_UClass_UMotionBlurSetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionBlurSetting.OuterSingleton, Z_Construct_UClass_UMotionBlurSetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotionBlurSetting.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UClass* StaticClass<UMotionBlurSetting>()
	{
		return UMotionBlurSetting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionBlurSetting);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotionBlurSetting, UMotionBlurSetting::StaticClass, TEXT("UMotionBlurSetting"), &Z_Registration_Info_UClass_UMotionBlurSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionBlurSetting), 1520788861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderSettings_h_43777308(TEXT("/Script/FoundryServer"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
