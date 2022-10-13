// Fill out your copyright notice in the Description page of Project Settings.


#include "TakeDamageShake.h"

UTakeDamageShake::UTakeDamageShake()
{
	OscillationDuration = 0.15f;
	OscillationBlendInTime = 0.05;
	OscillationBlendOutTime = 0.05;

	// Pitch Shake
	RotOscillation.Pitch.Amplitude = FMath::RandRange(5.0f, 10.0f);
	RotOscillation.Pitch.Frequency = FMath::RandRange(25.0f, 35.0f);

	// Yaw Shake
	RotOscillation.Yaw.Amplitude = FMath::RandRange(5.0f, 10.0f);
	RotOscillation.Yaw.Frequency = FMath::RandRange(25.0f, 35.0f);
}
