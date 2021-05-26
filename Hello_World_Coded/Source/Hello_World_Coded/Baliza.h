// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "Components/PointLightComponent.h"
#include "GameFramework/Actor.h"
#include "Baliza.generated.h"

UCLASS()
class HELLO_WORLD_CODED_API ABaliza : public AActor
{
	GENERATED_BODY()
	
public:	

	//Colisionador de la baliza
	UPROPERTY(VisibleAnyWhere, Category = "Collider")
		USphereComponent* collider;

	//Tiempo de encendido
	UPROPERTY(EditAnyWhere, Category = "Timming params")
		float switchTime = 0.25;

	//Número total de parpadeos
	UPROPERTY(EditAnyWhere, Category = "Timming params")
		float totalNumSwitchs = 5;

	//Punto luminoso de la baliza
	UPointLightComponent* light;

	//Estado de la baliza
	enum State { On, Off };
	State state;

	//Lleva la cuenta del número actual de parpadeos
	int currentNumSwitchs;

	//Manejador que identifica a un timer de manera única
	//https://docs.unrealengine.com/en-US/API/Runtime/Engine/Engine/FTimerHandle/index.html
	FTimerHandle timerID;

	// Sets default values for this actor's properties
	ABaliza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		//Establece si se enciende o apaga
		void SetLight(bool linghting);

	UFUNCTION()
		//Callback para el timer
		void Switch();



};
