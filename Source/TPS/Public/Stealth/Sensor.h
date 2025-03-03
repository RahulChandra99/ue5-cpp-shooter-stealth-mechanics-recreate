// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sensor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDetected, AActor*, DetectedActor);

class AAlarm;

UCLASS()
class TPS_API ASensor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASensor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnPlayerDetected OnPlayerDetected;
	
	UFUNCTION(BlueprintCallable, Category="Detection")
	void DetectPlayer(AActor* ActorDetected);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration", meta = (AllowPrivateAccess = true))
	class UPointLightComponent* PointLightComponent;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Configuration", meta = (AllowPrivateAccess = true))
	bool bHasDetected;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration", meta = (AllowPrivateAccess = true))
	class USoundBase* DetectionSound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration", meta = (AllowPrivateAccess = true))
	class USoundAttenuation* SensorSA;

	

};
