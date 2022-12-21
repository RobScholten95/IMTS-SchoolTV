using UnrealBuildTool;
using System.Collections.Generic;

public class FoundryServer : ModuleRules
{
	public FoundryServer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		// Set precompiled flag
		bUsePrecompiled = true;

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"LevelSequence",
				"MovieScene",
				"LevelSequenceEditor",
				"UEOpenExr",
				"UEOpenExrRTTI"
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[] {
				"AssetRegistry",
				"CinematicCamera",
				"ImageWriteQueue",
				"MovieRenderPipelineCore",
				"MovieRenderPipelineRenderPasses",
				"FoundryCryptomattePass",
				"MovieRenderPipelineSettings",
				"MovieRenderPipelineEditor",
				"MovieSceneTracks",
				"OpenColorIO",
				"OpenSSL",
				"Networking",
				"RenderCore",
				"RHI",
				"Sockets",
				"Slate",
				"SlateCore",
				"UnrealEd",
				"WorkspaceMenuStructure",
				"EditorStyle",
				"PropertyEditor",
				"Projects",
				"Json",
				"JsonUtilities",
				"FoundrySharedUtils"
			}
		);
		
		PublicDefinitions.Add("GOOGLE_PROTOBUF_NO_RTTI=1");
		PublicDefinitions.Add("GOOGLE_PROTOBUF_USE_UNALIGNED=0");

		string ThirdPartyFolder = ModuleDirectory + "/../" + "ThirdParty/";

		// Construct library directory name
		string LibDir = ThirdPartyFolder + "Deploy";

		PrivateIncludePaths.AddRange(new string[] { ThirdPartyFolder + "/include" });

		string Platform;
		string Extension;

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			Platform = "Win64";
			Extension = ".lib";
		}
		else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			Platform = "Mac";
			Extension = ".a";
		}
		else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			Platform = "Linux";
			Extension = ".a";
		}
		else
		{
			// unsupported
			return;
		}
		LibDir = LibDir + "/" + Platform + "/";
		LibDir += "Release/"; // Only support Release
		PublicAdditionalLibraries.Add(LibDir + "libprotobuf" + Extension);

		// Required for UEOpenExr
		AddEngineThirdPartyPrivateStaticDependencies(Target, "zlib");
	}
}
