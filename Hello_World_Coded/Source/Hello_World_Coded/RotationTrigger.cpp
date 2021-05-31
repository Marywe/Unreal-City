// Fill out your copyright notice in the Description page of Project Settings.


#include "RotationTrigger.h"

// Sets default values
ARotationTrigger::ARotationTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->boxCollider = CreateDefaultSubobject<UBoxComponent>("Collider");

	SetRootComponent(this->boxCollider);

	this->boxCollider->OnComponentBeginOverlap.AddDynamic(this, &ARotationTrigger::OnTriggerEnter);

}

// Called when the game starts or when spawned
void ARotationTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARotationTrigger::OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr && OtherComp != nullptr)
	{
		ACar* _coche = Cast<ACar>(OtherActor);
		FRotator rotation = FRotator(0, 180, 0);
		_coche->AddActorLocalRotation(FQuat(rotation));	
	}

}

// Called every frame
void ARotationTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

