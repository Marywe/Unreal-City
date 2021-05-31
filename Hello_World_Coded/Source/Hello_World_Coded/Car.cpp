// Fill out your copyright notice in the Description page of Project Settings.


#include "Car.h"

// Sets default values
ACar::ACar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACar::BeginPlay()
{
	Super::BeginPlay();

	canMove = true;
	
}

// Called every frame
void ACar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	Move(DeltaTime);

}

void ACar::SetCanMove(bool can)
{
	this->canMove = can;
}

void ACar::Move(float dT)
{
	if (canMove) 
	{
		SetActorLocation(GetActorLocation() + 
			GetActorForwardVector() * dT * displacementSpeed);
	}
}

