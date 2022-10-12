// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TPSPlayer.generated.h"

// Have the Gun Weapon class available for all instances
class AGunWeapon;

UCLASS()
class THIRDPERSONSHOOTER_API ATPSPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATPSPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void HorizontalMove(float value);
	void VerticalMove(float value);
	void HorizontalLook(float value);
	void VerticalLook(float value);
	void CheckJump();

	void Shoot();

	UPROPERTY()
		bool jumping;

	UPROPERTY(EditAnywhere)
		float xSensitivity;

	UPROPERTY(EditAnywhere)
		float ySensitivity;

	// Don't Edit at Runtime
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<AGunWeapon> GunClass;

	UPROPERTY()
		AGunWeapon* GunWeapon;
};
