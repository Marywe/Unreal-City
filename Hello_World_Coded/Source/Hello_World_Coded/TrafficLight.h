// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/BoxComponent.h"
#include "Components/PointLightComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Car.h"
#include "TrafficLight.generated.h"

UCLASS()
class HELLO_WORLD_CODED_API ATrafficLight : public AActor
{
	GENERATED_BODY()
	

public:	
	// Sets default values for this actor's properties
	ATrafficLight();

	UPROPERTY(VisibleAnyWhere, Category = "Light Component")
		UPointLightComponent* light;

	UPROPERTY(EditAnyWhere, Category = "Collider")
		class UBoxComponent* boxCollider;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	bool isGreen;			//Para permitir el paso

	TArray <ACar*> cars;	//Guarda el orden de entrada de los coches en el semáforo para darles permiso

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()			//Cuando un actor entra, el semáforo se pone en rojo para no permitir el paso de otros coches
		void OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()			//Cuando el actor sale, comrpueba si hay más coches esperando y si no, se vuelve verde
		void OnTriggerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
			UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void SetLightColor();

};
