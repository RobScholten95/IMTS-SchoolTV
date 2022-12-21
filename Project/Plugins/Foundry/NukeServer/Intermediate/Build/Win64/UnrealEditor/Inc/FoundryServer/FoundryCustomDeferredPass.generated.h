// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOUNDRYSERVER_FoundryCustomDeferredPass_generated_h
#error "FoundryCustomDeferredPass.generated.h already included, missing '#pragma once' in FoundryCustomDeferredPass.h"
#endif
#define FOUNDRYSERVER_FoundryCustomDeferredPass_generated_h

#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFoundryPostProcessPass_Statics; \
	FOUNDRYSERVER_API static class UScriptStruct* StaticStruct();


template<> FOUNDRYSERVER_API UScriptStruct* StaticStruct<struct FFoundryPostProcessPass>();

#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_SPARSE_DATA
#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_RPC_WRAPPERS
#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFoundryCustomDeferredPass(); \
	friend struct Z_Construct_UClass_UFoundryCustomDeferredPass_Statics; \
public: \
	DECLARE_CLASS(UFoundryCustomDeferredPass, UMoviePipelineDeferredPassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FoundryServer"), NO_API) \
	DECLARE_SERIALIZER(UFoundryCustomDeferredPass)


#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUFoundryCustomDeferredPass(); \
	friend struct Z_Construct_UClass_UFoundryCustomDeferredPass_Statics; \
public: \
	DECLARE_CLASS(UFoundryCustomDeferredPass, UMoviePipelineDeferredPassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FoundryServer"), NO_API) \
	DECLARE_SERIALIZER(UFoundryCustomDeferredPass)


#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoundryCustomDeferredPass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoundryCustomDeferredPass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoundryCustomDeferredPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoundryCustomDeferredPass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoundryCustomDeferredPass(UFoundryCustomDeferredPass&&); \
	NO_API UFoundryCustomDeferredPass(const UFoundryCustomDeferredPass&); \
public:


#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoundryCustomDeferredPass(UFoundryCustomDeferredPass&&); \
	NO_API UFoundryCustomDeferredPass(const UFoundryCustomDeferredPass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoundryCustomDeferredPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoundryCustomDeferredPass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFoundryCustomDeferredPass)


#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_41_PROLOG
#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_SPARSE_DATA \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_RPC_WRAPPERS \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_INCLASS \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_SPARSE_DATA \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOUNDRYSERVER_API UClass* StaticClass<class UFoundryCustomDeferredPass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryCustomDeferredPass_h


#define FOREACH_ENUM_ERENDERMODE(op) \
	op(ERenderMode::RenderPass) \
	op(ERenderMode::StencilLayer) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
