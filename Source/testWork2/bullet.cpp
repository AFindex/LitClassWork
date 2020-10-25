// Fill out your copyright notice in the Description page of Project Settings.


#include "bullet.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
Abullet::Abullet()
{
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("bulletP"));
	
	CollisionComponent->InitSphereRadius(15.0f);
	RootComponent = CollisionComponent;
	

	BulletMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	BulletMovementComponent->SetUpdatedComponent(CollisionComponent);
	BulletMovementComponent->InitialSpeed = 3.0f;
	BulletMovementComponent->MaxSpeed = 2000.0f;
	BulletMovementComponent->bRotationFollowsVelocity = true;
	BulletMovementComponent->Bounciness = 0.3f;

	InitialLifeSpan = 3.0f;
	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void Abullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Abullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Abullet::FireInDirection(const FVector& ShootDirection)
{
		BulletMovementComponent->Velocity = ShootDirection * BulletMovementComponent->InitialSpeed;
}

