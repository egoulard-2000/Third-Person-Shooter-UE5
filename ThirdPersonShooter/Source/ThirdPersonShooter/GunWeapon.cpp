// Fill out your copyright notice in the Description page of Project Settings.

#include "GunWeapon.h"
#include "TPSPlayer.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGunWeapon::AGunWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);
	
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);

	//ParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleEffect"));
	//ParticleEffect->SetupAttachment
}

// Called when the game starts or when spawned
void AGunWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGunWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGunWeapon::Shoot()
{
	// Spawn Particle Effect (Muzzle Flash of Gun)
	UGameplayStatics::SpawnEmitterAttached(ParticleEffect, Mesh, TEXT("MuzzleFlash"));

	ATPSPlayer* playerOwner = Cast<ATPSPlayer>(GetOwner());
	AController* controllerOwner = playerOwner->GetController();

	// Make sure these exist (I ain't risking anything here lol)
	if (playerOwner != nullptr || controllerOwner != nullptr)
	{
		// Find current camera controller rotation
		FVector location;
		FRotator rotation;
		controllerOwner->GetPlayerViewPoint(location, rotation);

		// End Point of Line
		FVector endPoint = location + rotation.Vector() * shootingDistance;

		FHitResult hit;
		bool isHit = GetWorld()->LineTraceSingleByChannel(hit, location, endPoint, ECC_GameTraceChannel1);
		
		if (isHit)
			DrawDebugPoint(GetWorld(), hit.Location, 15, FColor::Red, true);

		// Debug
		// DrawDebugCamera(GetWorld(), location, rotation, 90.0f, 2.0f, FColor::Red, true);
	}
}

