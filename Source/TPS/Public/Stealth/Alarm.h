// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Alarm.generated.h"



UCLASS()
class TPS_API AAlarm : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAlarm();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void StartAlarm();

	UFUNCTION(BlueprintCallable)
	void StopAlarm();

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Configuration", meta = (AllowPrivateAccess = true))
	bool bIsAlarmActive;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration", meta = (AllowPrivateAccess = true))
	class USoundBase* AlarmSFX; 

	UPROPERTY()
	UAudioComponent* AlarmSound;
};
