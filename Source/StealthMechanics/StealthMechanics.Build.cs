// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StealthMechanics : ModuleRules
{
	public StealthMechanics(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
