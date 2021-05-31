// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/BoxComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Car.h"
#include "RotationTrigger.generated.h"

UCLASS()
class HELLO_WORLD_CODED_API ARotationTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotationTrigger();

	UPROPERTY(EditAnyWhere, Category = "Collider")
		class UBoxComponent* boxCollider;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	//Cambia la rotación del actor del coche
	UFUNCTION()
		void OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
