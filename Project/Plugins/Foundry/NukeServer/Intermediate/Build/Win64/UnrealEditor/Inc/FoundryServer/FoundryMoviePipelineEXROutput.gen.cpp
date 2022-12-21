// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoundryServer/Private/FoundryMoviePipelineEXROutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoundryMoviePipelineEXROutput() {}
// Cross Module References
	FOUNDRYSERVER_API UEnum* Z_Construct_UEnum_FoundryServer_EFoundryEXRCompressionFormat();
	UPackage* Z_Construct_UPackage__Script_FoundryServer();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_NoRegister();
	FOUNDRYSERVER_API UClass* Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineImageSequenceOutputBase();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFoundryEXRCompressionFormat;
	static UEnum* EFoundryEXRCompressionFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFoundryEXRCompressionFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFoundryEXRCompressionFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FoundryServer_EFoundryEXRCompressionFormat, Z_Construct_UPackage__Script_FoundryServer(), TEXT("EFoundryEXRCompressionFormat"));
		}
		return Z_Registration_Info_UEnum_EFoundryEXRCompressionFormat.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UEnum* StaticEnum<EFoundryEXRCompressionFormat>()
	{
		return EFoundryEXRCompressionFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_FoundryServer_EFoundryEXRCompressionFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FoundryServer_EFoundryEXRCompressionFormat_Statics::Enumerators[] = {
		{ "EFoundryEXRCompressionFormat::None", (int64)EFoundryEXRCompressionFormat::None },
		{ "EFoundryEXRCompressionFormat::RLE", (int64)EFoundryEXRCompressionFormat::RLE },
		{ "EFoundryEXRCompressionFormat::ZIPS", (int64)EFoundryEXRCompressionFormat::ZIPS },
		{ "EFoundryEXRCompressionFormat::ZIP", (int64)EFoundryEXRCompressionFormat::ZIP },
		{ "EFoundryEXRCompressionFormat::PIZ", (int64)EFoundryEXRCompressionFormat::PIZ },
		{ "EFoundryEXRCompressionFormat::B44", (int64)EFoundryEXRCompressionFormat::B44 },
		{ "EFoundryEXRCompressionFormat::B44A", (int64)EFoundryEXRCompressionFormat::B44A },
		{ "EFoundryEXRCompressionFormat::DWAA", (int64)EFoundryEXRCompressionFormat::DWAA },
		{ "EFoundryEXRCompressionFormat::DWAB", (int64)EFoundryEXRCompressionFormat::DWAB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FoundryServer_EFoundryEXRCompressionFormat_Statics::Enum_MetaDataParams[] = {
		{ "B44.Comment", "/** Lossy 4-by-4 pixel block compression. Fixed compression rate. */" },
		{ "B44.Name", "EFoundryEXRCompressionFormat::B44" },
		{ "B44.ToolTip", "Lossy 4-by-4 pixel block compression. Fixed compression rate." },
		{ "B44A.Comment", "/** Lossy 4-by-4 pixel block compression. Flat fields are compressed more. */" },
		{ "B44A.Name", "EFoundryEXRCompressionFormat::B44A" },
		{ "B44A.ToolTip", "Lossy 4-by-4 pixel block compression. Flat fields are compressed more." },
		{ "BlueprintType", "true" },
		{ "DWAA.Comment", "/** Lossy DCT-based compression for RGB channels. Alpha and other channels are uncompressed. More efficient than DWAB for partial buffer access on read in 3rd party tools. */" },
		{ "DWAA.Name", "EFoundryEXRCompressionFormat::DWAA" },
		{ "DWAA.ToolTip", "Lossy DCT-based compression for RGB channels. Alpha and other channels are uncompressed. More efficient than DWAB for partial buffer access on read in 3rd party tools." },
		{ "DWAB.Comment", "/** Similar to DWAA but goes in blocks of 256 scanlines instead of 32. More efficient disk space and faster to decode than DWAA. */" },
		{ "DWAB.Name", "EFoundryEXRCompressionFormat::DWAB" },
		{ "DWAB.ToolTip", "Similar to DWAA but goes in blocks of 256 scanlines instead of 32. More efficient disk space and faster to decode than DWAA." },
		{ "ModuleRelativePath", "Private/FoundryMoviePipelineEXROutput.h" },
		{ "None.Comment", "/** No compression is applied. */" },
		{ "None.Name", "EFoundryEXRCompressionFormat::None" },
		{ "None.ToolTip", "No compression is applied." },
		{ "PIZ.Comment", "/** Good compression quality for grainy images. Lossless.*/" },
		{ "PIZ.DisplayName", "PIZ Wavelet (32 scanlines)" },
		{ "PIZ.Name", "EFoundryEXRCompressionFormat::PIZ" },
		{ "PIZ.ToolTip", "Good compression quality for grainy images. Lossless." },
		{ "RLE.Comment", "/** Run length encoding. */" },
		{ "RLE.Name", "EFoundryEXRCompressionFormat::RLE" },
		{ "RLE.ToolTip", "Run length encoding." },
		{ "ZIP.Comment", "/** Good compression quality for images with low amounts of noise. Lossless. In blocks of 16 scan lines. */" },
		{ "ZIP.DisplayName", "ZIP (16 scanlines)" },
		{ "ZIP.Name", "EFoundryEXRCompressionFormat::ZIP" },
		{ "ZIP.ToolTip", "Good compression quality for images with low amounts of noise. Lossless. In blocks of 16 scan lines." },
		{ "ZIPS.Comment", "/** Good compression quality for images with low amounts of noise. Lossless. One scan line at a time. */" },
		{ "ZIPS.DisplayName", "ZIP (1 scanline)" },
		{ "ZIPS.Name", "EFoundryEXRCompressionFormat::ZIPS" },
		{ "ZIPS.ToolTip", "Good compression quality for images with low amounts of noise. Lossless. One scan line at a time." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FoundryServer_EFoundryEXRCompressionFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FoundryServer,
		nullptr,
		"EFoundryEXRCompressionFormat",
		"EFoundryEXRCompressionFormat",
		Z_Construct_UEnum_FoundryServer_EFoundryEXRCompressionFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FoundryServer_EFoundryEXRCompressionFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FoundryServer_EFoundryEXRCompressionFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FoundryServer_EFoundryEXRCompressionFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FoundryServer_EFoundryEXRCompressionFormat()
	{
		if (!Z_Registration_Info_UEnum_EFoundryEXRCompressionFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFoundryEXRCompressionFormat.InnerSingleton, Z_Construct_UEnum_FoundryServer_EFoundryEXRCompressionFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFoundryEXRCompressionFormat.InnerSingleton;
	}
	void UFoundryMoviePipelineImageSequenceOutput_EXR::StaticRegisterNativesUFoundryMoviePipelineImageSequenceOutput_EXR()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoundryMoviePipelineImageSequenceOutput_EXR);
	UClass* Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_NoRegister()
	{
		return UFoundryMoviePipelineImageSequenceOutput_EXR::StaticClass();
	}
	struct Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Compression_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Compression_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Compression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompressionLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMultilayer_MetaData[];
#endif
		static void NewProp_bMultilayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultilayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Overscan_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Overscan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineImageSequenceOutputBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FoundryServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoundryMoviePipelineEXROutput.h" },
		{ "ModuleRelativePath", "Private/FoundryMoviePipelineEXROutput.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Compression_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Compression_MetaData[] = {
		{ "Category", "EXR" },
		{ "Comment", "/**\n\x09* Which compression method should the resulting EXR file be compressed with\n\x09*/" },
		{ "ModuleRelativePath", "Private/FoundryMoviePipelineEXROutput.h" },
		{ "ToolTip", "Which compression method should the resulting EXR file be compressed with" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Compression = { "Compression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundryMoviePipelineImageSequenceOutput_EXR, Compression), Z_Construct_UEnum_FoundryServer_EFoundryEXRCompressionFormat, METADATA_PARAMS(Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Compression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Compression_MetaData)) }; // 3892147526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_CompressionLevel_MetaData[] = {
		{ "Category", "EXR" },
		{ "Comment", "/** \n\x09* Sets the quality level for images compressed with the DWAA or DWAB method. A higher value leads to more loss and smaller files.\n\x09*/" },
		{ "EditCondition", "Compression==EFoundryEXRCompressionFormat::DWAA || Compression==EFoundryEXRCompressionFormat::DWAB" },
		{ "ModuleRelativePath", "Private/FoundryMoviePipelineEXROutput.h" },
		{ "ToolTip", "Sets the quality level for images compressed with the DWAA or DWAB method. A higher value leads to more loss and smaller files." },
		{ "UIMax", "500.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_CompressionLevel = { "CompressionLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundryMoviePipelineImageSequenceOutput_EXR, CompressionLevel), METADATA_PARAMS(Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_CompressionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_CompressionLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_bMultilayer_MetaData[] = {
		{ "Category", "EXR" },
		{ "Comment", "/**\n\x09* Should we write all render passes to the same exr file? Not all software supports multi-layer exr files.\n\x09*/" },
		{ "ModuleRelativePath", "Private/FoundryMoviePipelineEXROutput.h" },
		{ "ToolTip", "Should we write all render passes to the same exr file? Not all software supports multi-layer exr files." },
	};
#endif
	void Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_bMultilayer_SetBit(void* Obj)
	{
		((UFoundryMoviePipelineImageSequenceOutput_EXR*)Obj)->bMultilayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_bMultilayer = { "bMultilayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFoundryMoviePipelineImageSequenceOutput_EXR), &Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_bMultilayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_bMultilayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_bMultilayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Overscan_MetaData[] = {
		{ "Category", "EXR" },
		{ "Comment", "/**\n\x09* Is there any overscan to write into the EXRs\n\x09*/" },
		{ "ModuleRelativePath", "Private/FoundryMoviePipelineEXROutput.h" },
		{ "ToolTip", "Is there any overscan to write into the EXRs" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Overscan = { "Overscan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundryMoviePipelineImageSequenceOutput_EXR, Overscan), METADATA_PARAMS(Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Overscan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Overscan_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Compression_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Compression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_CompressionLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_bMultilayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Overscan,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoundryMoviePipelineImageSequenceOutput_EXR>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::ClassParams = {
		&UFoundryMoviePipelineImageSequenceOutput_EXR::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR()
	{
		if (!Z_Registration_Info_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR.OuterSingleton, Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR.OuterSingleton;
	}
	template<> FOUNDRYSERVER_API UClass* StaticClass<UFoundryMoviePipelineImageSequenceOutput_EXR>()
	{
		return UFoundryMoviePipelineImageSequenceOutput_EXR::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoundryMoviePipelineImageSequenceOutput_EXR);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Private_FoundryMoviePipelineEXROutput_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Private_FoundryMoviePipelineEXROutput_h_Statics::EnumInfo[] = {
		{ EFoundryEXRCompressionFormat_StaticEnum, TEXT("EFoundryEXRCompressionFormat"), &Z_Registration_Info_UEnum_EFoundryEXRCompressionFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3892147526U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Private_FoundryMoviePipelineEXROutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR, UFoundryMoviePipelineImageSequenceOutput_EXR::StaticClass, TEXT("UFoundryMoviePipelineImageSequenceOutput_EXR"), &Z_Registration_Info_UClass_UFoundryMoviePipelineImageSequenceOutput_EXR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoundryMoviePipelineImageSequenceOutput_EXR), 3842050398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Private_FoundryMoviePipelineEXROutput_h_3394935742(TEXT("/Script/FoundryServer"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Private_FoundryMoviePipelineEXROutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Private_FoundryMoviePipelineEXROutput_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Private_FoundryMoviePipelineEXROutput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NukeServer_Source_FoundryServer_Private_FoundryMoviePipelineEXROutput_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
