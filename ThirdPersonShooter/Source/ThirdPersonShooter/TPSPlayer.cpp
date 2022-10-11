// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSPlayer.h"

// Sets default values
ATPSPlayer::ATPSPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	jumping = false;
	xSensitivity = 80;
	ySensitivity = 80;
}

// Called when the game starts or when spawned
void ATPSPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATPSPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (jumping)
		Jump();

}

// Called to bind functionality to input
void ATPSPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("HorizontalMove", this, &ATPSPlayer::HorizontalMove);
	PlayerInputComponent->BindAxis("VerticalMove", this, &ATPSPlayer::VerticalMove);
	
	PlayerInputComponent->BindAxis("HorizontalLook", this, &ATPSPlayer::HorizontalLook);
	PlayerInputComponent->BindAxis("VerticalLook", this, &ATPSPlayer::VerticalLook);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ATPSPlayer::CheckJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ATPSPlayer::CheckJump);
}

#pragma region Movement Input

void ATPSPlayer::HorizontalMove(float value)
{
	AddMovementInput(GetActorRightVector() * value);
}


void ATPSPlayer::VerticalMove(float value)
{
	AddMovementInput(GetActorForwardVector() * value);
}

#pragma endregion

#pragma region Camera Input

void ATPSPlayer::HorizontalLook(float value)
{
	AddControllerYawInput(value * xSensitivity * GetWorld()->GetDeltaSeconds());
}

void ATPSPlayer::VerticalLook(float value)
{
	AddControllerPitchInput(value * ySensitivity * GetWorld()->GetDeltaSeconds());
}

#pragma endregion

#pragma region Jump Function

/// <summary>
/// Allows the player to determine when to jump and when not to jump
/// </summary>
void ATPSPlayer::CheckJump()
{
	if (jumping)
		jumping = false;
	else
		jumping = true;
}

#pragma endregion