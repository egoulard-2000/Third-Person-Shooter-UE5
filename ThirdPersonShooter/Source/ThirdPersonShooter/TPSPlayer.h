// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TakeDamageShake.h"
#include "ShootShake.h"
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

	UFUNCTION(BlueprintPure)
		bool IsKilled() const;

	UFUNCTION(BlueprintPure)
		float GetHealth() const;

	UFUNCTION(BlueprintPure)
		int GetCurrentAmmo() const;

	UFUNCTION(BlueprintCallable)
		void SetMouseSensitivity(float sensitivity);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

	void Shoot();

private:
	#pragma region Character/Camera Movement

		void HorizontalMove(float value);
		void VerticalMove(float value);
		void HorizontalLook(float value);
		void VerticalLook(float value);

	#pragma endregion

	#pragma region PlayerActions

			void CheckJump();
			void SprintStart();
			void SprintEnd();

			void Reload();

	#pragma endregion

	#pragma region Variables

		UPROPERTY(EditAnywhere)
			float totalHealth = 100.0f;

		UPROPERTY(VisibleAnywhere)
			float currentHealth;

		UPROPERTY()
			bool jumping;

		UPROPERTY()
			bool sprinting;

		UPROPERTY()
			float runSpeed = 600.0f;

		UPROPERTY()
			float sprintSpeed = 900.0f;

		UPROPERTY(EditAnywhere)
			float xSensitivity;

		UPROPERTY(EditAnywhere)
			float ySensitivity;

	#pragma endregion

	#pragma region CameraShake

		UPROPERTY(EditAnywhere)
			TSubclassOf<UMatineeCameraShake> DamageShakeClass;

		UPROPERTY(EditAnywhere)
			TSubclassOf<UMatineeCameraShake> ShootShakeClass;

	#pragma endregion

	#pragma region GunClass

		// Don't Edit at Runtime
		UPROPERTY(EditDefaultsOnly)
			TSubclassOf<AGunWeapon> GunClass;

		UPROPERTY()
			AGunWeapon* GunWeapon;

	#pragma endregion
};
