// Fill out your copyright notice in the Description page of Project Settings.


#include "Hello_World_Actor.h"
#include "Engine.h"

// Sets default values
AHello_World_Actor::AHello_World_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHello_World_Actor::BeginPlay()
{
	Super::BeginPlay();

	//Aquí se añade el código personalizado correspondiente a esta clase
	if(GEngine != nullptr)
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, messageTime, FColor::Cyan, message, true, FVector2D(1, 1));
}

// Called every frame
void AHello_World_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

