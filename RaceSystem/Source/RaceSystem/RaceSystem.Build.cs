// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RaceSystem : ModuleRules
{
	public RaceSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
