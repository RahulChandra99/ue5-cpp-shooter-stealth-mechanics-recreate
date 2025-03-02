// Fill out your copyright notice in the Description page of Project Settings.


#include "TPS/Public/PCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
APCharacter::APCharacter():
	BaseTurnRate(45.f),
	BaseLookUpRate(45.f),
	bIsFPActive(false)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->TargetArmLength = 300.f;
	
	TpCameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("TPCamera"));
	TpCameraComp->SetupAttachment(SpringArmComp,USpringArmComponent::SocketName);
	TpCameraComp->bUsePawnControlRotation = false;

	FpCameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("FPCamera"));
	FpCameraComp->SetupAttachment(GetMesh(),TEXT("head"));
	FpCameraComp->bUsePawnControlRotation = true;

	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f,540.f,0.f);
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	FpCameraComp->SetActive(false);
	TpCameraComp->SetActive(true);
}

// Called when the game starts or when spawned
void APCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void APCharacter::MoveForward(float Value)
{
	if(Controller != nullptr && (Value != 0.0f))
	{
		const FRotator Rotation{Controller->GetControlRotation()};
		const FRotator YawRotation{0,Rotation.Yaw,0};

		const FVector Direction {FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::X)};
		AddMovementInput(Direction, Value);
	}
}

void APCharacter::MoveRight(float Value)
{
	if(Controller != nullptr && (Value != 0.0f))
	{
		const FRotator Rotation{Controller->GetControlRotation()};
		const FRotator YawRotation{0,Rotation.Yaw,0};

		const FVector Direction {FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::Y)};
		AddMovementInput(Direction, Value);
	}
}

void APCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APCharacter::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void APCharacter::BeginCrouch()
{
	Crouch();
}

void APCharacter::EndCrouch()
{
	UnCrouch();
}

void APCharacter::ToggleCamera()
{
	bIsFPActive = !bIsFPActive;
	
	if(bIsFPActive)
	{
		FpCameraComp->SetActive(true);
		TpCameraComp->SetActive(false);
		bUseControllerRotationYaw = false;
		
	}
	else
	{
		TpCameraComp->SetActive(true);
		FpCameraComp->SetActive(false);
		bUseControllerRotationYaw = true;
	}
}

// Called every frame
void APCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward",this,&APCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight",this,&APCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp",this,&APCharacter::LookUpAtRate);
	PlayerInputComponent->BindAxis("Turn",this,&APCharacter::TurnAtRate);

	PlayerInputComponent->BindAction("Crouch",IE_Pressed,this,&APCharacter::BeginCrouch);
	PlayerInputComponent->BindAction("Crouch",IE_Released,this,&APCharacter::EndCrouch);
	PlayerInputComponent->BindAction("Jump",IE_Pressed,this,&ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump",IE_Released,this,&ACharacter::StopJumping);
	PlayerInputComponent->BindAction("ToggleCamera",IE_Pressed,this,&APCharacter::ToggleCamera);
}

