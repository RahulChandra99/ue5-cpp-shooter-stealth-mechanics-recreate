// Fill out your copyright notice in the Description page of Project Settings.


#include "Stealth/Alarm.h"

#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AAlarm::AAlarm()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAlarm::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAlarm::StartAlarm()
{
	if(!bIsAlarmActive)
	{
		AlarmSound = UGameplayStatics::SpawnSoundAtLocation(GetWorld(),AlarmSFX,GetActorLocation());
		bIsAlarmActive = true;
	}

	
}

void AAlarm::StopAlarm()
{
	if(bIsAlarmActive)
	{
		AlarmSound->FadeOut(1.0f,0.0f);
		bIsAlarmActive = false;
	}
}

// Called every frame
void AAlarm::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

