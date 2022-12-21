using UnrealBuildTool;

public class FoundrySharedUtils : ModuleRules
{
	public FoundrySharedUtils(ReadOnlyTargetRules Target) : base(Target)
	{
		// Set precompiled flag
		bUsePrecompiled = true;

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"Engine",
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[] {
				"MovieRenderPipelineCore",
				"LevelSequence",
				"MovieScene"
            }
        );
	}
}
