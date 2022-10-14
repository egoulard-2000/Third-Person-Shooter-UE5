// Fill out your copyright notice in the Description page of Project Settings.

#include "TimerManager.h"
#include "Blueprint/UserWidget.h"
#include "TPSPlayerController.h"

void ATPSPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// Create the main HUD at beginning
	HUD = CreateWidget(this, HUDClass);
	if (HUD != nullptr)
		HUD->AddToViewport(); // Add that restart widget to screen
}

/// <summary>
/// This is called when the player dies. It attaches a new Widget: "RestartScreen Widget"
/// </summary>
/// <param name="EndGameFocus"></param>
/// <param name="bIsWinner"></param>
void ATPSPlayerController::GameHasEnded(AActor* EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);

	// Remove the HUD on death
	HUD->RemoveFromViewport();
	
	// Show Restart Screen Instead
	UUserWidget* restartScreen = CreateWidget(this, RestartScreenClass);
	if (restartScreen != nullptr)
		restartScreen->AddToViewport(); // Add that restart widget to screen

	// Restart the game 3 seconds after getting killed
	GetWorldTimerManager().SetTimer(RestartTimerHandle, this, &ATPSPlayerController::RestartLevel, restartTimer);

	// UE_LOG(LogTemp, Warning, TEXT("You Died!"));
}
