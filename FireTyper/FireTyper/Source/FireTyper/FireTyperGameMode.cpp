// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FireTyperGameMode.h"
#include "FireTyperPlayerController.h"
#include "FireTyperPawn.h"

AFireTyperGameMode::AFireTyperGameMode()
{
	// no pawn by default
	DefaultPawnClass = AFireTyperPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AFireTyperPlayerController::StaticClass();
}
