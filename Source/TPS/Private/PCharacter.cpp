// Fill out your copyright notice in the Description page of Project Settings.


#include "TPS/Public/PCharacter.h"

#include "PWeapon.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
APCharacter::APCharacter():
	BaseTurnRate(45.f),
	BaseLookUpRate(45.f),
	bIsFPActive(false),
	bIsCrouching(false)
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

	CurrentWeapon = nullptr;
	CurrentWeaponIndex = -1;
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

void APCharacter::ToggleCrouch()
{
	bIsCrouching = !bIsCrouching;
	
	if(bIsCrouching)
	{
		Crouch();
		
	}
	else
	{
		UnCrouch();
	}
}

void APCharacter::Sprint()
{
	bIsSprinting = !bIsSprinting;

	if(bIsSprinting)
	{
		GetCharacterMovement()->MaxWalkSpeed+= 200.0f;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed-= 200.0f;
	}
}

void APCharacter::EquipWeapon(int WeaponIndex)
{
	if(WeaponIndex < 0 || WeaponIndex >= WeaponClasses.Num()) return;

	// Destroy current weapon if it exists
	if (CurrentWeapon)
	{
		CurrentWeapon->Destroy();
		CurrentWeapon = nullptr;
	}

	// Spawn and attach the new weapon
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();

	APWeapon* NewWeapon = GetWorld()->SpawnActor<APWeapon>(WeaponClasses[WeaponIndex], FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);

	if (NewWeapon)
	{
		NewWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("M4A1Socket"));
		CurrentWeapon = NewWeapon;
		CurrentWeaponIndex = WeaponIndex;
	}
}

void APCharacter::SelectWeapon1() { EquipWeapon(0); }
void APCharacter::SelectWeapon2() { EquipWeapon(1); }

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

	PlayerInputComponent->BindAction("Crouch",IE_Pressed,this,&APCharacter::ToggleCrouch);
	PlayerInputComponent->BindAction("Sprint",IE_Pressed,this,&APCharacter::Sprint);
	PlayerInputComponent->BindAction("Sprint",IE_Released,this,&APCharacter::Sprint);
	PlayerInputComponent->BindAction("Jump",IE_Pressed,this,&ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump",IE_Released,this,&ACharacter::StopJumping);
	PlayerInputComponent->BindAction("ToggleCamera",IE_Pressed,this,&APCharacter::ToggleCamera);

	PlayerInputComponent->BindAction("SelectWeapon1", IE_Pressed, this, &APCharacter::SelectWeapon1);
	PlayerInputComponent->BindAction("SelectWeapon2", IE_Pressed, this, &APCharacter::SelectWeapon2);
}

