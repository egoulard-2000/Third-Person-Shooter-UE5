// Fill out your copyright notice in the Description page of Project Settings.

#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TPSAIController.h"
#include "BTService_PlayerLocationWhenSeen.h"

UBTService_PlayerLocationWhenSeen::UBTService_PlayerLocationWhenSeen()
{
	NodeName = "Update Player Location When Seen";
}

void UBTService_PlayerLocationWhenSeen::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	// Checks if the player is seen for the BehaviorTree Service
	if (player != nullptr && OwnerComp.GetAIOwner() != nullptr)
	{
		if (OwnerComp.GetAIOwner()->LineOfSightTo(player))
			OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), player->GetActorLocation());
		else
			OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
	}


}