// Copyright Epic Games, Inc. All Rights Reserved.

#include "DogInTheWoodsGameMode.h"
#include "DogInTheWoodsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADogInTheWoodsGameMode::ADogInTheWoodsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_Character"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
