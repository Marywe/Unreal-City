// Fill out your copyright notice in the Description page of Project Settings.


#include "Baliza.h"

// Sets default values
ABaliza::ABaliza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Se crea el colisionador
	collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	collider->SetSphereRadius(128);
	RootComponent = collider;

	//Se crea la luz
	light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
	light->AttachToComponent(collider, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called when the game starts or when spawned
void ABaliza::BeginPlay()
{
	Super::BeginPlay();

	//Estado inicial de la luz
	state = State::Off;
	//Inicialización del número de parpadeos
	currentNumSwitchs = 0;

	//World es equivalente al nivel
	UWorld* world = GetWorld();

	//Establece el timer pasándole el tiempo de parpadeo y la función que atiende a la expiración del timer
	if (world != nullptr)
		//https://docs.unrealengine.com/en-US/API/Runtime/Engine/FTimerManager/index.html
		world->GetTimerManager().SetTimer(timerID, this, &ABaliza::Switch, switchTime, true);
	

	
}

// Called every frame
void ABaliza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Establece si se enciende o apaga
void ABaliza::SetLight(bool lighting)
{
	light->SetVisibility(lighting);
}

//Callback para el timer
void ABaliza::Switch()
{
	if (state == State::Off)
	{
		//Se cambia el estado de la baliza y del propio componente UPointLight
		state = State::On;
		SetLight(true);
		//Incrementar el número actual de parpadeos
		currentNumSwitchs++;


		//if (GEngine != nullptr)
		//	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, "On");
	}
	else
	{
		//Se cambia el estado de la baliza y del propio componente UPointLight
		state = State::Off;
		SetLight(false);
		//Incrementar el número actual de parpadeos
		currentNumSwitchs++;


		//if (GEngine != nullptr)
		//	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, "Off");

	}

	//Comprueba si se ha llegado al número máximo de parpadeos
	if (currentNumSwitchs >= totalNumSwitchs)
	{
		currentNumSwitchs = 0;
		GetWorldTimerManager().ClearTimer(timerID);
	}

}

