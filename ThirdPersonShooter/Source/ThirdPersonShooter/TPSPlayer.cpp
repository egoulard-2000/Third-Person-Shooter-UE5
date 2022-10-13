// Fill out your copyright notice in the Description page of Project Settings.

#include "GunWeapon.h"
#include "Components/CapsuleComponent.h"
#include "ThirdPersonShooterGameModeBase.h"
#include "Curves/CurveVector.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"

#include "TPSPlayer.h"

// Sets default values
ATPSPlayer::ATPSPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	currentHealth = totalHealth;

	jumping = false;
	sprinting = false;

	xSensitivity = 80;
	ySensitivity = 80;
}

// Called when the game starts or when spawned
void ATPSPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	GunWeapon = GetWorld()->SpawnActor<AGunWeapon>(GunClass);

	// Hide the current weapon attached to player by default
	GetMesh()->HideBoneByName("weapon_r", EPhysBodyOp::PBO_None);

	// Attach new gun to current skeletal mesh
	GunWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, "weapon_socket");
	GunWeapon->SetOwner(this);
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

	#pragma region PlayerInputs

		PlayerInputComponent->BindAxis("HorizontalMove", this, &ATPSPlayer::HorizontalMove);
		PlayerInputComponent->BindAxis("VerticalMove", this, &ATPSPlayer::VerticalMove);
	
		PlayerInputComponent->BindAxis("HorizontalLook", this, &ATPSPlayer::HorizontalLook);
		PlayerInputComponent->BindAxis("VerticalLook", this, &ATPSPlayer::VerticalLook);

		PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ATPSPlayer::CheckJump);
		PlayerInputComponent->BindAction("Jump", IE_Released, this, &ATPSPlayer::CheckJump);

		PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ATPSPlayer::SprintStart);
		PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ATPSPlayer::SprintEnd);

		PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ATPSPlayer::Shoot);

		PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ATPSPlayer::Reload);

	#pragma endregion
}

#pragma region Movement Input

void ATPSPlayer::HorizontalMove(float value)
{
	AddMovementInput(GetActorRightVector(), value);
}


void ATPSPlayer::VerticalMove(float value)
{
	AddMovementInput(GetActorForwardVector(), value);
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

void ATPSPlayer::SetMouseSensitivity(float sensitivity)
{
	xSensitivity = sensitivity;
	ySensitivity = sensitivity;
}

#pragma endregion

#pragma region Action Functions

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

void ATPSPlayer::SprintStart()
{
	sprinting = true;
	GetCharacterMovement()->MaxWalkSpeed = sprintSpeed;
}

void ATPSPlayer::SprintEnd()
{
	sprinting = false;
	GetCharacterMovement()->MaxWalkSpeed = runSpeed;
}

#pragma endregion

#pragma region Weapon Fire Function

void ATPSPlayer::Shoot()
{
	// I don't want the player to sprint and fire simultaneously
	if (!sprinting)
	{
		GunWeapon->Shoot();

		// Shake the Camera on Fire
		GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraShake(ShootShakeClass, 0.1f);
	}
}

void ATPSPlayer::Reload()
{
	GunWeapon->ReloadWeapon();
}

int ATPSPlayer::GetCurrentAmmo() const
{
	return GunWeapon->GetCurrentAmmo();
}

#pragma endregion

#pragma region States

float ATPSPlayer::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	// Calculate base damage from Actor
	float damageTaken = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	// Ensure that health doesn't go negative on successive hits
	damageTaken = FMath::Min(currentHealth, damageTaken);
	currentHealth -= damageTaken;

	// Shake 'TakeDamage' for Camera
	GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraShake(DamageShakeClass, 0.1f);

	if (IsKilled())
	{
		// Ensure the Game Ends when player dies via the GameMode chosen
		AThirdPersonShooterGameModeBase* GameMode = GetWorld()->GetAuthGameMode<AThirdPersonShooterGameModeBase>();
		if (GameMode != nullptr)
			GameMode->PawnKilled(this);

		// Can no longer move character and remove the capsule component from scene
		DetachFromControllerPendingDestroy();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	return damageTaken;
}

bool ATPSPlayer::IsKilled() const
{
	return currentHealth <= 0;
}

float ATPSPlayer::GetHealth() const
{
	return currentHealth / totalHealth;
}


#pragma endregion