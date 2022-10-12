// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_PlayerLocationWhenSeen.generated.h"

/**
 * Creates a new Service for our EnemyAI Behavior Tree
 */
UCLASS()
class THIRDPERSONSHOOTER_API UBTService_PlayerLocationWhenSeen : public UBTService_BlackboardBase
{
	GENERATED_BODY()

protected:
	void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
public:
	UBTService_PlayerLocationWhenSeen();
};
