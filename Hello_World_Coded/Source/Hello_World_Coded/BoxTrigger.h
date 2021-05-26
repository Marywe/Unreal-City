// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/PrimitiveComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoxTrigger.generated.h"

UCLASS()
class HELLO_WORLD_CODED_API ABoxTrigger : public AActor
{
	GENERATED_BODY()
	
public:	

	//Malla del objeto
	UPROPERTY(EditAnyWhere, Category = "Added Mesh")
		class UStaticMeshComponent* actorMesh;

	//Colisionador del objeto
	UPROPERTY(EditAnyWhere, Category = "Added Collider")
		class UBoxComponent* boxCollider;

	// Sets default values for this actor's properties
	ABoxTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		//Callback del evento BeginOverlap
		void OnTriggerEnter(UPrimitiveComponent* otherComp, AActor* otherActor, UPrimitiveComponent* overlappedComponent, int32 OtherIndexBody, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		//Callback del evento EndOverlap
		void OnTriggerExit(UPrimitiveComponent* otherComp, AActor* otherActor, UPrimitiveComponent* overlappedComponent, int32 OtherIndexBody);

};
