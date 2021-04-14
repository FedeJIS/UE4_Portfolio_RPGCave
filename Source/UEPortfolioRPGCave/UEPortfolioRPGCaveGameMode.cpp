// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEPortfolioRPGCaveGameMode.h"
#include "UEPortfolioRPGCavePlayerController.h"
#include "UEPortfolioRPGCaveCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEPortfolioRPGCaveGameMode::AUEPortfolioRPGCaveGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AUEPortfolioRPGCavePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("Blueprint'/Game/TopDownCPP/Blueprints/TopDownCharacter.TopDownCharacter'"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}