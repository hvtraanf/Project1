// Copyright Epic Games, Inc. All Rights Reserved.

#include "RunnerProjGameMode.h"
#include "RunnerProjHUD.h"
#include "RunnerProjCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARunnerProjGameMode::ARunnerProjGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARunnerProjHUD::StaticClass();
}
