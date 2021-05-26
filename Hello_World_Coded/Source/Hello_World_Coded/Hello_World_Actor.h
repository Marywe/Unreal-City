// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Hello_World_Actor.generated.h"

UCLASS()
class HELLO_WORLD_CODED_API AHello_World_Actor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHello_World_Actor();

	//Texto del mensaje en pantalla
	UPROPERTY(EditAnyWhere, Category = "Mensaje")
		FString message;

	//Tiempo que va a estar el mensaje en pantalla
	UPROPERTY(EditAnyWhere, Category = "Tiempo")
		float messageTime;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
