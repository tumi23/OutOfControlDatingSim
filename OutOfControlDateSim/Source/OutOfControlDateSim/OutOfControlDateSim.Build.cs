// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class OutOfControlDateSim : ModuleRules
{
	public OutOfControlDateSim(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
