// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/BoxComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Car.generated.h"

UCLASS()
class HELLO_WORLD_CODED_API ACar : public AActor
{
	GENERATED_BODY()
	
public:	
	
	//Velocidad de desplazamiento
	UPROPERTY(EditAnyWhere, Category = "Speed")
		float displacementSpeed = 1000;

	// Sets default values for this actor's properties
	ACar();

private:
	//Indica si el objeto se está desplazando
	bool canMove;		//Está parado por el semáforo o no

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetCanMove(bool can);		//Settea si se puede mover
	void Move(float dT);			//Se mueve si canMove == true

};
