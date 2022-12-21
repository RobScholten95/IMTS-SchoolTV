// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FoundryCryptomattePass : ModuleRules
{
	public FoundryCryptomattePass(ReadOnlyTargetRules Target) : base(Target)
	{
		// Set precompiled flag
		bUsePrecompiled = true;

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"Engine",
				"Json"
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[] {
				"MovieRenderPipelineCore",
				"MovieRenderPipelineRenderPasses",
				"RenderCore",
				"RHI",
				"ActorLayerUtilities",
				"FoundrySharedUtils",
				"GeometryCollectionEngine"
			}
		);
	}
}
