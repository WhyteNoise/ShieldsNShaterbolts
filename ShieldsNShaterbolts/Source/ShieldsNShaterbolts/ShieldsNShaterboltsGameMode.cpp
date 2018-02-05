// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ShieldsNShaterboltsGameMode.h"
#include "ShieldsNShaterboltsPawn.h"

AShieldsNShaterboltsGameMode::AShieldsNShaterboltsGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AShieldsNShaterboltsPawn::StaticClass();
}

