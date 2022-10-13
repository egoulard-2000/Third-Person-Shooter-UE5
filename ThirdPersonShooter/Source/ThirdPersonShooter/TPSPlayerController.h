// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TPSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONSHOOTER_API ATPSPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void GameHasEnded(class AActor* EndGameFocus = nullptr, bool bIsWinner = false) override;

	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> HUDClass;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> RestartScreenClass;

	FTimerHandle RestartTimerHandle;

	UPROPERTY(EditAnywhere)
		float restartTimer = 3.0f;

	UPROPERTY()
		UUserWidget* HUD;
};
