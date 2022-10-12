// Fill out your copyright notice in the Description page of Project Settings.

#include "AIController.h"
#include "TPSPlayer.h"
#include "BTTask_Shoot.h"

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (OwnerComp.GetAIOwner() == nullptr)
		return EBTNodeResult::Failed;

	ATPSPlayer* enemy = Cast< ATPSPlayer>(OwnerComp.GetAIOwner()->GetPawn());
	if (enemy == nullptr)
		return EBTNodeResult::Failed;

	enemy->Shoot();

	return EBTNodeResult::Succeeded;
}

UBTTask_Shoot::UBTTask_Shoot()
{
	NodeName = "Shoot";
}
