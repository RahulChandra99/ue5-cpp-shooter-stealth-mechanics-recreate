// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/HealthComponent.h"

#include "Debugger.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent() :
	DefaultHealth(100.f),
	CurrentHealth(100.f)
{

}


void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* MyOwner = GetOwner();
	if (MyOwner && MyOwner->CanBeDamaged())
	{
		MyOwner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::HandleTakeAnyDamage);
	}
	
	CurrentHealth = DefaultHealth;
}


void UHealthComponent::HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
	AController* InstigatedBy, AActor* DamageCauser)
{
	if(Damage <= 0.f && CurrentHealth <= 0.f) return;


	CurrentHealth = FMath::Clamp(CurrentHealth - Damage,0.f,DefaultHealth);

	OnHealthChanged.Broadcast(this,CurrentHealth, Damage,DamageType,InstigatedBy, DamageCauser);
	Debug::Print(FString::Printf(TEXT("%f"), CurrentHealth));
}



