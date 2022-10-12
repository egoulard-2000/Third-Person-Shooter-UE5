// Fill out your copyright notice in the Description page of Project Settings.


#include "Kismet/GameplayStatics.h"
#include "TPSAIController.h"


void ATPSAIController::BeginPlay()
{
	Super::BeginPlay();

	APawn* player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	SetFocus(player);
}
