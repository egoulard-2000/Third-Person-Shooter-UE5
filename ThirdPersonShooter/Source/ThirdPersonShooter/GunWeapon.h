// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GunWeapon.generated.h"

UCLASS()
class THIRDPERSONSHOOTER_API AGunWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGunWeapon();

	void Shoot();
	void ReloadWeapon();
	int GetCurrentAmmo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(EditAnywhere)
		int totalAmmo = 30;

	UPROPERTY()
		int currentAmmo = totalAmmo;

	UPROPERTY(EditAnywhere)
		float shootingDistance = 10000.0f;

	UPROPERTY(EditAnywhere)
		float damage = 20.0f;

	// Setup Blueprint Components pertaining to our guns
	UPROPERTY(VisibleAnywhere)
		USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
		USkeletalMeshComponent* Mesh;

	#pragma region Muzzle Effects

		UPROPERTY(EditAnywhere)
			UParticleSystem* MuzzleParticleEffect;

		UPROPERTY(EditAnywhere)
			USoundBase* MuzzleSound;

	#pragma endregion

	#pragma region Impact Effects

		UPROPERTY(EditAnywhere)
			UParticleSystem* BulletImpactParticleEffect;

		UPROPERTY(EditAnywhere)
			USoundBase* ImpactSound;

	#pragma endregion

	#pragma region Reload

		UPROPERTY(EditAnywhere)
			USoundBase* ReloadSound;

	#pragma endregion

};
