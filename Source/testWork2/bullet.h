// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/MovementComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ObjectMacros.h"

#include "bullet.generated.h"

UCLASS()
class TESTWORK2_API Abullet : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere)
	USphereComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* BulletMovementComponent;
	
public:	
	// Sets default values for this actor's properties
	Abullet();
	void FireInDirection(const FVector&);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
