// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOUNDRYCRYPTOMATTEPASS_FoundryObjectIdPass_generated_h
#error "FoundryObjectIdPass.generated.h already included, missing '#pragma once' in FoundryObjectIdPass.h"
#endif
#define FOUNDRYCRYPTOMATTEPASS_FoundryObjectIdPass_generated_h

#define FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_SPARSE_DATA
#define FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_RPC_WRAPPERS
#define FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFoundryObjectIdRenderPass(); \
	friend struct Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics; \
public: \
	DECLARE_CLASS(UFoundryObjectIdRenderPass, UMoviePipelineImagePassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FoundryCryptomattePass"), NO_API) \
	DECLARE_SERIALIZER(UFoundryObjectIdRenderPass)


#define FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUFoundryObjectIdRenderPass(); \
	friend struct Z_Construct_UClass_UFoundryObjectIdRenderPass_Statics; \
public: \
	DECLARE_CLASS(UFoundryObjectIdRenderPass, UMoviePipelineImagePassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FoundryCryptomattePass"), NO_API) \
	DECLARE_SERIALIZER(UFoundryObjectIdRenderPass)


#define FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoundryObjectIdRenderPass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoundryObjectIdRenderPass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoundryObjectIdRenderPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoundryObjectIdRenderPass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoundryObjectIdRenderPass(UFoundryObjectIdRenderPass&&); \
	NO_API UFoundryObjectIdRenderPass(const UFoundryObjectIdRenderPass&); \
public:


#define FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoundryObjectIdRenderPass(UFoundryObjectIdRenderPass&&); \
	NO_API UFoundryObjectIdRenderPass(const UFoundryObjectIdRenderPass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoundryObjectIdRenderPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoundryObjectIdRenderPass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFoundryObjectIdRenderPass)


#define FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_30_PROLOG
#define FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_SPARSE_DATA \
	FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_RPC_WRAPPERS \
	FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_INCLASS \
	FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_SPARSE_DATA \
	FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOUNDRYCRYPTOMATTEPASS_API UClass* StaticClass<class UFoundryObjectIdRenderPass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NukeServer_Source_FoundryCryptomattePass_Public_FoundryObjectIdPass_h


#define FOREACH_ENUM_EFOUNDRYOBJECTIDPASSIDTYPE(op) \
	op(EFoundryObjectIdPassIdType::Full) \
	op(EFoundryObjectIdPassIdType::Material) \
	op(EFoundryObjectIdPassIdType::Actor) \
	op(EFoundryObjectIdPassIdType::ActorWithHierarchy) \
	op(EFoundryObjectIdPassIdType::ActorUniqueName) \
	op(EFoundryObjectIdPassIdType::Folder) \
	op(EFoundryObjectIdPassIdType::Layer) 

enum class EFoundryObjectIdPassIdType : uint8;
template<> FOUNDRYCRYPTOMATTEPASS_API UEnum* StaticEnum<EFoundryObjectIdPassIdType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
