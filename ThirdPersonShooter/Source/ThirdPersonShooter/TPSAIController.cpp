// Fill out your copyright notice in the Description page of Project Settings.


#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "TPSAIController.h"

void ATPSAIController::BeginPlay()
{
	Super::BeginPlay();

	player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	enemy = GetPawn();

	if (AIBehavior != nullptr)
	{
		RunBehaviorTree(AIBehavior);

		// Set BlackBoard Keys
		GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), enemy->GetActorLocation());
	}
}

void ATPSAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}
