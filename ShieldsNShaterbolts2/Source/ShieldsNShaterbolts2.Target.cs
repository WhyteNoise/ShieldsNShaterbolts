// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class ShieldsNShaterbolts2Target : TargetRules
{
	public ShieldsNShaterbolts2Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "ShieldsNShaterbolts2" } );
	}
}
