#include "AI/EnemyAIController.h"

#include "Debugger.h"
#include "AI/AIBaseClass.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISense_Sight.h"
#include "AI/PatrolPoint.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	SightConfig = NewObject<UAISenseConfig_Sight>();
	SightConfig->SightRadius = 1500.f;
	SightConfig->LoseSightRadius = 1600.f;
	SightConfig->PeripheralVisionAngleDegrees = 90.f;
	SightConfig->SetMaxAge(5.f);
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	AIPerceptionComponent = NewObject<UAIPerceptionComponent>(this);
	AIPerceptionComponent->ConfigureSense(*SightConfig);
	AIPerceptionComponent->SetDominantSense(*SightConfig->GetSenseImplementation());
	AIPerceptionComponent->RegisterComponent();

	AIPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyAIController::OnTargetDetected);

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APatrolPoint::StaticClass(), PatrolPoints);
	MoveToNextPatrolPoint();
}

void AEnemyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
}

void AEnemyAIController::MoveToNextPatrolPoint()
{
	if (bIsPlayerDetected || PatrolPoints.Num() == 0) return;

	AActor* NextPoint = PatrolPoints[CurrentPatrolIndex];
	MoveToActor(NextPoint);
	CurrentPatrolIndex = (CurrentPatrolIndex + 1) % PatrolPoints.Num();
}

void AEnemyAIController::OnTargetDetected(AActor* Actor, FAIStimulus Stimulus)
{
	if (!GetPawn()) return;

	AAIBaseClass* AIPawn = Cast<AAIBaseClass>(GetPawn());

	if (Stimulus.WasSuccessfullySensed())
	{
		bIsPlayerDetected = true;
		StopMovement();

		if (ACharacter* PlayerChar = Cast<ACharacter>(Actor))
		{
			AIPawn->StartShootingAtPlayer(PlayerChar);
		}
	}
	else
	{
		bIsPlayerDetected = false;
		AIPawn->StopShooting();
		MoveToNextPatrolPoint();
	}
}

void AEnemyAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);
	MoveToNextPatrolPoint();
}


