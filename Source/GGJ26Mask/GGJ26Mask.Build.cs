// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GGJ26Mask : ModuleRules
{
	public GGJ26Mask(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
