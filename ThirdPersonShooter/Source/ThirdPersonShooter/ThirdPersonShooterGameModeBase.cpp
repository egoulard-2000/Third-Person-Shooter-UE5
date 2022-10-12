// Copyright Epic Games, Inc. All Rights Reserved.


#include "ThirdPersonShooterGameModeBase.h"

void AThirdPersonShooterGameModeBase::PawnKilled(APawn* PawnKilled)
{
	// Checks when the player dies, the game should end
	APlayerController* playerController = Cast<APlayerController>(PawnKilled->GetController());
	if (playerController != nullptr)
		playerController->GameHasEnded(nullptr, false);

}
