// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOUNDRYSERVER_FoundryUE4Server_generated_h
#error "FoundryUE4Server.generated.h already included, missing '#pragma once' in FoundryUE4Server.h"
#endif
#define FOUNDRYSERVER_FoundryUE4Server_generated_h

#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_SPARSE_DATA
#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_RPC_WRAPPERS
#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUServerSettings(); \
	friend struct Z_Construct_UClass_UServerSettings_Statics; \
public: \
	DECLARE_CLASS(UServerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FoundryServer"), NO_API) \
	DECLARE_SERIALIZER(UServerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUServerSettings(); \
	friend struct Z_Construct_UClass_UServerSettings_Statics; \
public: \
	DECLARE_CLASS(UServerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FoundryServer"), NO_API) \
	DECLARE_SERIALIZER(UServerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UServerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerSettings(UServerSettings&&); \
	NO_API UServerSettings(const UServerSettings&); \
public:


#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerSettings(UServerSettings&&); \
	NO_API UServerSettings(const UServerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerSettings)


#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_17_PROLOG
#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_RPC_WRAPPERS \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_INCLASS \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOUNDRYSERVER_API UClass* StaticClass<class UServerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Public_FoundryUE4Server_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
