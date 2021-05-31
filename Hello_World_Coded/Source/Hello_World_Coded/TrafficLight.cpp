// Fill out your copyright notice in the Description page of Project Settings.


#include "TrafficLight.h"

// Sets default values
ATrafficLight::ATrafficLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	this->boxCollider = CreateDefaultSubobject<UBoxComponent>("Collider");

	SetRootComponent(this->boxCollider);


	this->light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
	this->light->AttachToComponent(this->boxCollider, FAttachmentTransformRules::KeepRelativeTransform);

	this->boxCollider->OnComponentBeginOverlap.AddDynamic(this, &ATrafficLight::OnTriggerEnter);

	isGreen = true;
}

// Called when the game starts or when spawned
void ATrafficLight::BeginPlay()
{
	Super::BeginPlay();
	

	this->boxCollider->OnComponentEndOverlap.AddDynamic(this, &ATrafficLight::OnTriggerExit);

	SetLightColor();
	
}

// Called every frame
void ATrafficLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATrafficLight::OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if (OtherActor != nullptr && OtherComp != nullptr) 
	{	
		UE_LOG(LogTemp, Warning, TEXT("ENTRO"));

		ACar* _coche = Cast<ACar>(OtherActor);
		cars.Add(_coche);

		if (isGreen)
		{
			isGreen = false;
			SetLightColor();		
		}
		else
		{
			_coche->SetCanMove(false);
		}

	}
	
}

void ATrafficLight::OnTriggerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{	
	UE_LOG(LogTemp, Warning, TEXT("SALGO"));
	if (OtherActor != nullptr && OtherComp != nullptr)
	{
		cars.RemoveAt(0);
		if (cars.Num() == 0)
		{
			isGreen = true;
			SetLightColor();
		}
		else
		{
			cars[0]->SetCanMove(true);
		}
	}
	
}

void ATrafficLight::SetLightColor()
{
	if (isGreen) light->SetLightColor(FColor::Green);
	else light->SetLightColor(FColor::Red);

}

