// Fill out your copyright notice in the Description page of Project Settings.

#include "GunWeapon.h"
#include "TPSPlayer.h"

// Sets default values
ATPSPlayer::ATPSPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	currentHealth = totalHealth;

	jumping = false;
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

	PlayerInputComponent->BindAxis("HorizontalMove", this, &ATPSPlayer::HorizontalMove);
	PlayerInputComponent->BindAxis("VerticalMove", this, &ATPSPlayer::VerticalMove);
	
	PlayerInputComponent->BindAxis("HorizontalLook", this, &ATPSPlayer::HorizontalLook);
	PlayerInputComponent->BindAxis("VerticalLook", this, &ATPSPlayer::VerticalLook);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ATPSPlayer::CheckJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ATPSPlayer::CheckJump);

	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ATPSPlayer::Shoot);
	//PlayerInputComponent->BindAction("Shoot", IE_Released, this, &ATPSPlayer::CheckJump);
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

#pragma region Weapon Fire Function

void ATPSPlayer::Shoot()
{
	GunWeapon->Shoot();
}

float ATPSPlayer::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	// Calculate base damage from Actor
	float damageTaken = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	
	// Ensure that health doesn't go negative on successive hits
	damageTaken = FMath::Min(currentHealth, damageTaken);
	
	// Reduce Health
	currentHealth -= damageTaken;
	UE_LOG(LogTemp, Warning, TEXT("Current Health: %f"), currentHealth);

	return damageTaken;
}

#pragma endregion

