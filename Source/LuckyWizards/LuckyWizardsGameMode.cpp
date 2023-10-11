// Copyright Epic Games, Inc. All Rights Reserved.

#include "LuckyWizardsGameMode.h"
#include "LuckyWizardsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALuckyWizardsGameMode::ALuckyWizardsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
