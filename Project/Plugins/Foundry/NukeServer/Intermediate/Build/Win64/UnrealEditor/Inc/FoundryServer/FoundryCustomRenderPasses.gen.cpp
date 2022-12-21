// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoundryServer/Public/FoundryCustomRenderPasses.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoundryCustomRenderPasses() {}
// Cross Module References
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryDeferredPass_Unlit_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryDeferredPass_Unlit();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryCustomDeferredPass();
	UPackage* Z_Construct_UPackage__Script_FoundryServer();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryDeferredPass_DetailLighting_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryDeferredPass_DetailLighting();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryDeferredPass_LightingOnly_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryDeferredPass_LightingOnly();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryDeferredPass_ReflectionsOnly_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryDeferredPass_ReflectionsOnly();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryDeferredPass_PathTracer_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryDeferredPass_PathTracer();
// End Cross Module References
	void UFoundryDeferredPass_Unlit::StaticRegisterNativesUFoundryDeferredPass_Unlit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoundryDeferredPass_Unlit);
	UClass* Z_Construct_UClass_UFoundryDeferredPass_Unlit_NoRegister()
	{
		return UFoundryDeferredPass_Unlit::StaticClass();
	}
	struct Z_Construct_UClass_UFoundryDeferredPass_Unlit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoundryDeferredPass_Unlit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFoundryCustomDeferredPass,
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryDeferredPass_Unlit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Just a pure copy of the UMovieRenderPipelineDeferredPass_Unlit pass so we can reach it..\n" },
		{ "IncludePath", "FoundryCustomRenderPasses.h" },
		{ "ModuleRelativePath", "Public/FoundryCustomRenderPasses.h" },
		{ "ToolTip", "Just a pure copy of the UMovieRenderPipelineDeferredPass_Unlit pass so we can reach it.." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoundryDeferredPass_Unlit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoundryDeferredPass_Unlit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoundryDeferredPass_Unlit_Statics::ClassParams = {
		&UFoundryDeferredPass_Unlit::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoundryDeferredPass_Unlit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryDeferredPass_Unlit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoundryDeferredPass_Unlit()
	{
		if (!Z_Registration_Info_UClass_UFoundryDeferredPass_Unlit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoundryDeferredPass_Unlit.OuterSingleton, Z_Construct_UClass_UFoundryDeferredPass_Unlit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoundryDeferredPass_Unlit.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UClass* StaticClass<UFoundryDeferredPass_Unlit>()
	{
		return UFoundryDeferredPass_Unlit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoundryDeferredPass_Unlit);
	void UFoundryDeferredPass_DetailLighting::StaticRegisterNativesUFoundryDeferredPass_DetailLighting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoundryDeferredPass_DetailLighting);
	UClass* Z_Construct_UClass_UFoundryDeferredPass_DetailLighting_NoRegister()
	{
		return UFoundryDeferredPass_DetailLighting::StaticClass();
	}
	struct Z_Construct_UClass_UFoundryDeferredPass_DetailLighting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoundryDeferredPass_DetailLighting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFoundryCustomDeferredPass,
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryDeferredPass_DetailLighting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Just a pure copy of the UMovieRenderPipelineDeferredPass_DetailLighting pass so we can reach it..\n" },
		{ "IncludePath", "FoundryCustomRenderPasses.h" },
		{ "ModuleRelativePath", "Public/FoundryCustomRenderPasses.h" },
		{ "ToolTip", "Just a pure copy of the UMovieRenderPipelineDeferredPass_DetailLighting pass so we can reach it.." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoundryDeferredPass_DetailLighting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoundryDeferredPass_DetailLighting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoundryDeferredPass_DetailLighting_Statics::ClassParams = {
		&UFoundryDeferredPass_DetailLighting::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoundryDeferredPass_DetailLighting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryDeferredPass_DetailLighting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoundryDeferredPass_DetailLighting()
	{
		if (!Z_Registration_Info_UClass_UFoundryDeferredPass_DetailLighting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoundryDeferredPass_DetailLighting.OuterSingleton, Z_Construct_UClass_UFoundryDeferredPass_DetailLighting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoundryDeferredPass_DetailLighting.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UClass* StaticClass<UFoundryDeferredPass_DetailLighting>()
	{
		return UFoundryDeferredPass_DetailLighting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoundryDeferredPass_DetailLighting);
	void UFoundryDeferredPass_LightingOnly::StaticRegisterNativesUFoundryDeferredPass_LightingOnly()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoundryDeferredPass_LightingOnly);
	UClass* Z_Construct_UClass_UFoundryDeferredPass_LightingOnly_NoRegister()
	{
		return UFoundryDeferredPass_LightingOnly::StaticClass();
	}
	struct Z_Construct_UClass_UFoundryDeferredPass_LightingOnly_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoundryDeferredPass_LightingOnly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFoundryCustomDeferredPass,
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryDeferredPass_LightingOnly_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Just a pure copy of the UMovieRenderPipelineDeferredPass_LightingOnly pass so we can reach it..\n" },
		{ "IncludePath", "FoundryCustomRenderPasses.h" },
		{ "ModuleRelativePath", "Public/FoundryCustomRenderPasses.h" },
		{ "ToolTip", "Just a pure copy of the UMovieRenderPipelineDeferredPass_LightingOnly pass so we can reach it.." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoundryDeferredPass_LightingOnly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoundryDeferredPass_LightingOnly>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoundryDeferredPass_LightingOnly_Statics::ClassParams = {
		&UFoundryDeferredPass_LightingOnly::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoundryDeferredPass_LightingOnly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryDeferredPass_LightingOnly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoundryDeferredPass_LightingOnly()
	{
		if (!Z_Registration_Info_UClass_UFoundryDeferredPass_LightingOnly.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoundryDeferredPass_LightingOnly.OuterSingleton, Z_Construct_UClass_UFoundryDeferredPass_LightingOnly_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoundryDeferredPass_LightingOnly.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UClass* StaticClass<UFoundryDeferredPass_LightingOnly>()
	{
		return UFoundryDeferredPass_LightingOnly::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoundryDeferredPass_LightingOnly);
	void UFoundryDeferredPass_ReflectionsOnly::StaticRegisterNativesUFoundryDeferredPass_ReflectionsOnly()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoundryDeferredPass_ReflectionsOnly);
	UClass* Z_Construct_UClass_UFoundryDeferredPass_ReflectionsOnly_NoRegister()
	{
		return UFoundryDeferredPass_ReflectionsOnly::StaticClass();
	}
	struct Z_Construct_UClass_UFoundryDeferredPass_ReflectionsOnly_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoundryDeferredPass_ReflectionsOnly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFoundryCustomDeferredPass,
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryDeferredPass_ReflectionsOnly_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Just a pure copy of the UMovieRenderPipelineDeferredPass_ReflectionsOnly pass so we can reach it..\n" },
		{ "IncludePath", "FoundryCustomRenderPasses.h" },
		{ "ModuleRelativePath", "Public/FoundryCustomRenderPasses.h" },
		{ "ToolTip", "Just a pure copy of the UMovieRenderPipelineDeferredPass_ReflectionsOnly pass so we can reach it.." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoundryDeferredPass_ReflectionsOnly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoundryDeferredPass_ReflectionsOnly>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoundryDeferredPass_ReflectionsOnly_Statics::ClassParams = {
		&UFoundryDeferredPass_ReflectionsOnly::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoundryDeferredPass_ReflectionsOnly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryDeferredPass_ReflectionsOnly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoundryDeferredPass_ReflectionsOnly()
	{
		if (!Z_Registration_Info_UClass_UFoundryDeferredPass_ReflectionsOnly.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoundryDeferredPass_ReflectionsOnly.OuterSingleton, Z_Construct_UClass_UFoundryDeferredPass_ReflectionsOnly_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoundryDeferredPass_ReflectionsOnly.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UClass* StaticClass<UFoundryDeferredPass_ReflectionsOnly>()
	{
		return UFoundryDeferredPass_ReflectionsOnly::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoundryDeferredPass_ReflectionsOnly);
	void UFoundryDeferredPass_PathTracer::StaticRegisterNativesUFoundryDeferredPass_PathTracer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoundryDeferredPass_PathTracer);
	UClass* Z_Construct_UClass_UFoundryDeferredPass_PathTracer_NoRegister()
	{
		return UFoundryDeferredPass_PathTracer::StaticClass();
	}
	struct Z_Construct_UClass_UFoundryDeferredPass_PathTracer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoundryDeferredPass_PathTracer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFoundryCustomDeferredPass,
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryDeferredPass_PathTracer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Just a pure copy of the UMovieRenderPipelineDeferredPass_PathTracer pass so we can reach it..\n" },
		{ "IncludePath", "FoundryCustomRenderPasses.h" },
		{ "ModuleRelativePath", "Public/FoundryCustomRenderPasses.h" },
		{ "ToolTip", "Just a pure copy of the UMovieRenderPipelineDeferredPass_PathTracer pass so we can reach it.." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoundryDeferredPass_PathTracer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoundryDeferredPass_PathTracer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoundryDeferredPass_PathTracer_Statics::ClassParams = {
		&UFoundryDeferredPass_PathTracer::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoundryDeferredPass_PathTracer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryDeferredPass_PathTracer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoundryDeferredPass_PathTracer()
	{
		if (!Z_Registration_Info_UClass_UFoundryDeferredPass_PathTracer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoundryDeferredPass_PathTracer.OuterSingleton, Z_Construct_UClass_UFoundryDeferredPass_PathTracer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoundryDeferredPass_PathTracer.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UClass* StaticClass<UFoundryDeferredPass_PathTracer>()
	{
		return UFoundryDeferredPass_PathTracer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoundryDeferredPass_PathTracer);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderPasses_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderPasses_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoundryDeferredPass_Unlit, UFoundryDeferredPass_Unlit::StaticClass, TEXT("UFoundryDeferredPass_Unlit"), &Z_Registration_Info_UClass_UFoundryDeferredPass_Unlit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoundryDeferredPass_Unlit), 3430817613U) },
		{ Z_Construct_UClass_UFoundryDeferredPass_DetailLighting, UFoundryDeferredPass_DetailLighting::StaticClass, TEXT("UFoundryDeferredPass_DetailLighting"), &Z_Registration_Info_UClass_UFoundryDeferredPass_DetailLighting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoundryDeferredPass_DetailLighting), 2183942763U) },
		{ Z_Construct_UClass_UFoundryDeferredPass_LightingOnly, UFoundryDeferredPass_LightingOnly::StaticClass, TEXT("UFoundryDeferredPass_LightingOnly"), &Z_Registration_Info_UClass_UFoundryDeferredPass_LightingOnly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoundryDeferredPass_LightingOnly), 560189082U) },
		{ Z_Construct_UClass_UFoundryDeferredPass_ReflectionsOnly, UFoundryDeferredPass_ReflectionsOnly::StaticClass, TEXT("UFoundryDeferredPass_ReflectionsOnly"), &Z_Registration_Info_UClass_UFoundryDeferredPass_ReflectionsOnly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoundryDeferredPass_ReflectionsOnly), 1375667369U) },
		{ Z_Construct_UClass_UFoundryDeferredPass_PathTracer, UFoundryDeferredPass_PathTracer::StaticClass, TEXT("UFoundryDeferredPass_PathTracer"), &Z_Registration_Info_UClass_UFoundryDeferredPass_PathTracer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoundryDeferredPass_PathTracer), 776455630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderPasses_h_1955497425(TEXT("/Script/FoundryServer"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderPasses_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomRenderPasses_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
