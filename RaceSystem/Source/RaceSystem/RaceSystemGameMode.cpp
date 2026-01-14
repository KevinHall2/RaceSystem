// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaceSystemGameMode.h"
#include "RaceSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARaceSystemGameMode::ARaceSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
