// Fill out your copyright notice in the Description page of Project Settings.


#include "Stealth/Sensor.h"

#include "Components/PointLightComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Stealth/Alarm.h"

// Sets default values
ASensor::ASensor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));

}

// Called when the game starts or when spawned
void ASensor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASensor::DetectPlayer(AActor* ActorDetected)
{
	if(!ActorDetected || bHasDetected) return;
	
	if(ActorDetected->ActorHasTag(TEXT("Player")))
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(),
			DetectionSound,
			GetActorLocation(),
			FRotator::ZeroRotator,
			1.0f,1.0f,0.0f,SensorSA);

		// Cache alarm reference for efficiency
		static AAlarm* Alarm = Cast<AAlarm>(UGameplayStatics::GetActorOfClass(GetWorld(), AAlarm::StaticClass()));
		if (Alarm)
		{
			Alarm->StartAlarm();
		}

		// Trigger the event
		OnPlayerDetected.Broadcast(ActorDetected);

		bHasDetected = true;

	}
}

// Called every frame
void ASensor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

