// Copyright Epic Games, Inc. All Rights Reserved.

#include "GGJ26MaskGameMode.h"
#include "GGJ26MaskCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGGJ26MaskGameMode::AGGJ26MaskGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
