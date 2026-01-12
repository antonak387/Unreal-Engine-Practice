// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterShooterEnemy.h"

#include "Components/BoxComponent.h"
#include "MonsterShooterCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

// Sets default values
AMonsterShooterEnemy::AMonsterShooterEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DamageCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Damage Collision"));
	DamageCollision->SetupAttachment(RootComponent);

	AIPerComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI Perseption Component"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight_Config"));

	SightConfig->SightRadius = 1250.0f;
	SightConfig->LoseSightRadius = 1280.0f;
	SightConfig->PeripheralVisionAngleDegrees = 90.0f;
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	SightConfig->SetMaxAge(0.1f);

	AIPerComp->ConfigureSense(*SightConfig);
	AIPerComp->SetDominantSense(SightConfig->GetSenseImplementation());
	AIPerComp->OnPerceptionUpdated.AddDynamic(this, &AMonsterShooterEnemy::OnSensed);

	CurrentVelocity = FVector::ZeroVector;
	MovementSpeed = 375.0f;

	DistanceSquared = BIG_NUMBER;


}

// Called when the game starts or when spawned
void AMonsterShooterEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	DamageCollision->OnComponentBeginOverlap.AddDynamic(this, &AMonsterShooterEnemy::OnHit);

	BaseLocation = this->GetActorLocation();



}

// Called every frame
void AMonsterShooterEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!CurrentVelocity.IsZero())
	{
		NewLocation = GetActorLocation() + CurrentVelocity * DeltaTime;
		
		if (BackToBaseLocation)
		{

			if ((NewLocation - BaseLocation).SizeSquared2D() < DistanceSquared)
			{
				DistanceSquared = (NewLocation - BaseLocation).SizeSquared2D();

			}
			else
			{
				CurrentVelocity = FVector::ZeroVector;
				DistanceSquared = BIG_NUMBER;
				BackToBaseLocation = false;

				SetNewRotation(GetActorForwardVector(), GetActorLocation());
			}

		} 
		SetActorLocation(NewLocation);
	}

}

// Called to bind functionality to input
void AMonsterShooterEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMonsterShooterEnemy::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit)
{
	AMonsterShooterCharacter* Char = Cast<AMonsterShooterCharacter>(OtherActor);
	if (Char)
	{
		Char->DealDamage(Damage);
	}
}

void AMonsterShooterEnemy::OnSensed(const TArray<AActor*>& UpdateActors)
{

	for (int i = 0; i < UpdateActors.Num(); i++)
	{
		
		FActorPerceptionBlueprintInfo Info;

		AIPerComp->GetActorsPerception(UpdateActors[i], Info);

		if (Info.LastSensedStimuli[0].WasSuccessfullySensed())
		{
			FVector dir = UpdateActors[i]->GetActorLocation() - GetActorLocation();
			dir.Z = 0.0f;

			CurrentVelocity = dir.GetSafeNormal() * MovementSpeed;
			
			SetNewRotation(UpdateActors[i]->GetActorLocation(), GetActorLocation());
		}
		else
		{
			FVector dir = BaseLocation - GetActorLocation();

			dir.Z = 0.0f;

			if (dir.SizeSquared2D() > 1.0)
			{
				CurrentVelocity = dir.GetSafeNormal() * MovementSpeed;

				BackToBaseLocation = true;

				SetNewRotation(BaseLocation, GetActorLocation());
			}
		}
	}

}

void AMonsterShooterEnemy::SetNewRotation(FVector TargetPosition, FVector CurrentPosition)
{
	FVector newDirection = TargetPosition - CurrentPosition;
	newDirection.Z = 0.0f;

	EnemyRotation = newDirection.Rotation();
	
	SetActorRotation(EnemyRotation);

}

void AMonsterShooterEnemy::DealDamage(float DamageAmount)
{
	Health -= DamageAmount;

	if (Health <= 0.0f)
	{
		//restart game
		Destroy();
	}
}

