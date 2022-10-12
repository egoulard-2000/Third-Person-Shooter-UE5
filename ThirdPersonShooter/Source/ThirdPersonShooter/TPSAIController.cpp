// Fill out your copyright notice in the Description page of Project Settings.


#include "Kismet/GameplayStatics.h"
#include "TPSAIController.h"

void ATPSAIController::BeginPlay()
{
	Super::BeginPlay();

	player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

}

void ATPSAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// Determine the Enemy AI's sight of player around objects
	if (LineOfSightTo(player))
	{
		SetFocus(player);
		MoveToActor(player, enemyDistance);
	}
	else
	{
		ClearFocus(EAIFocusPriority::Gameplay);
		StopMovement();
	}
}
