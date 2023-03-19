// Copyright Epic Games, Inc. All Rights Reserved.

#include "DLCTestGameMode.h"
#include "DLCTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADLCTestGameMode::ADLCTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
