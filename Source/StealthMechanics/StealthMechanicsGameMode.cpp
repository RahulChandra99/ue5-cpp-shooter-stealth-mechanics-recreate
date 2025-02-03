// Copyright Epic Games, Inc. All Rights Reserved.

#include "StealthMechanicsGameMode.h"
#include "StealthMechanicsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStealthMechanicsGameMode::AStealthMechanicsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
