// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterShooterProjectile.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "MonsterShooterEnemy.h"

// Sets default values
AMonsterShooterProjectile::AMonsterShooterProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
	CollisionSphere->InitSphereRadius(20.0f);

	RootComponent = CollisionSphere;

	ProjectileMovement =
		CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ProjectileMovement->UpdatedComponent = CollisionSphere;
	ProjectileMovement->InitialSpeed = 3000.0f;
	ProjectileMovement->MaxSpeed = 3000.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	InitialLifeSpan = 3.0f;

}

// Called when the game starts or when spawned
void AMonsterShooterProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AMonsterShooterProjectile::OnHit);
		
}

// Called every frame
void AMonsterShooterProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMonsterShooterProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit)
{

	AMonsterShooterEnemy* Enemy = Cast<AMonsterShooterEnemy>(OtherActor);
	if (Enemy)
	{
		Enemy->DealDamage(DamageValue);
		Destroy();
	}

}

