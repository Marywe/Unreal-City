// Fill out your copyright notice in the Description page of Project Settings.


#include "Visible_Object_Actor.h"

// Sets default values
AVisible_Object_Actor::AVisible_Object_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Se crea el colisionador del objeto
	boxCollider = CreateDefaultSubobject<UBoxComponent>("Collider");

	//Modificar el tamaño del collider
	boxCollider->SetBoxExtent(FVector(100, 100, 100));

	//Se crea la malla del objeto
	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");

	//Se establece la malla como componente raíz del objeto
	SetRootComponent(boxCollider);

	//Se modifca la jerarquía de los componentes
	actorMesh->AttachToComponent(boxCollider, FAttachmentTransformRules::SnapToTargetIncludingScale);

	//Suscripción al evento clic sobre este actor
	OnClicked.AddDynamic(this, &AVisible_Object_Actor::OnClic);

}

// Called when the game starts or when spawned
void AVisible_Object_Actor::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine != nullptr)
	{
		//Equivalente al nivel dinde se está jugando
		UWorld* world = GetWorld();

		if (world != nullptr)
		{
			//Player Controller
			APlayerController* playerController = GEngine->GetFirstLocalPlayerController(world);

			if (playerController != nullptr)
			{
				//Muestra el cursor del ratón
				playerController->bShowMouseCursor = true;

				//Permite los eventos del clic ratón
				playerController->bEnableClickEvents = true;

				//Permite que el playerController le envíe a este actor enventos relacionados con los inputs
				EnableInput(playerController);

				//Enlaza una acción de input determinada
				InputComponent->BindAction(FName("Displace_AK"), EInputEvent::IE_Pressed, this, &AVisible_Object_Actor::OnActionKeyPressed);
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(INDEX_NONE, 10, FColor::Yellow, "No hay player controller");
			}
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(INDEX_NONE, 10, FColor::Blue, "No hay mundo");
		}

	}

	isDisplacing = false;
	
}

// Called every frame
void AVisible_Object_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Ivoca al métodod e desplazamiento
	Displace(DeltaTime);

}

//Método que desplaza al objeto
void AVisible_Object_Actor::Displace(float DeltaTime)
{
	//Desplaza actor
	if(isDisplacing)
		SetActorLocation(GetActorLocation() + GetActorForwardVector() * DeltaTime * displacementSpeed);
}

//Callback del evento clic sobre este actor
void AVisible_Object_Actor::OnClic(AActor* actor, FKey keyname)
{
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 10, FColor::Red, "Mouse clicked");
	isDisplacing = !isDisplacing;
}

//Callback de una acción de entrada (pulsación de una tecla)
void AVisible_Object_Actor::OnActionKeyPressed()
{
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 10, FColor::Red, "Key pressed");
	isDisplacing = !isDisplacing;
}

//Detiene el desplazamiento del objeto
void AVisible_Object_Actor::StopDisplacement()
{
	isDisplacing = false;
}


