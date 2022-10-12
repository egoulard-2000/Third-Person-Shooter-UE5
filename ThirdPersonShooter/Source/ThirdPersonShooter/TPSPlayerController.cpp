// Fill out your copyright notice in the Description page of Project Settings.

#include "TimerManager.h"
#include "Blueprint/UserWidget.h"
#include "TPSPlayerController.h"

void ATPSPlayerController::GameHasEnded(AActor* EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);

	UUserWidget* restartScreen = CreateWidget(this, RestartScreenClass);
	if (restartScreen != nullptr)
		restartScreen->AddToViewport(); // Add that restart widget to screen

	// Restart the game 3 seconds after getting killed
	GetWorldTimerManager().SetTimer(RestartTimerHandle, this, &ATPSPlayerController::RestartLevel, restartTimer);

	// UE_LOG(LogTemp, Warning, TEXT("You Died!"));
}
