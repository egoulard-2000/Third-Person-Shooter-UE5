// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TPSAIController.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONSHOOTER_API ATPSAIController : public AAIController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaSeconds) override;

private:

	UPROPERTY(VisibleAnywhere)
		APawn* player;

	UPROPERTY(VisibleAnywhere)
		APawn* enemy;

	UPROPERTY(EditAnywhere)
		class UBehaviorTree* AIBehavior;


};
