// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamDemoGameMode.h"
#include "SteamDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteamDemoGameMode::ASteamDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
