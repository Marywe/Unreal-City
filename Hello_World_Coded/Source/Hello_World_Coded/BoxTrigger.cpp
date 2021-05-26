// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxTrigger.h"
#include "Visible_Object_Actor.h"

// Sets default values
ABoxTrigger::ABoxTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Se crea el colisionador del objeto
	boxCollider = CreateDefaultSubobject<UBoxComponent>("Collider");

	//Modificar el tamaño del collider
	boxCollider->SetBoxExtent(FVector(50, 50, 50));

	//Se crea la malla del objeto
	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");

	//Se establece la malla como componente raíz del objeto
	SetRootComponent(boxCollider);

	//Se modifca la jerarquía de los componentes
	actorMesh->AttachToComponent(boxCollider, FAttachmentTransformRules::KeepRelativeTransform);



}

// Called when the game starts or when spawned
void ABoxTrigger::BeginPlay()
{
	Super::BeginPlay();

	//Suscripción a los eventos de BeginOverlap
	boxCollider->OnComponentBeginOverlap.AddDynamic(this, &ABoxTrigger::OnTriggerEnter);

	//Suscripción a los eventos de EndOverlap
	boxCollider->OnComponentEndOverlap.AddDynamic(this, &ABoxTrigger::OnTriggerExit);

	//Se oculta la malla del trigger en tiempo de ejecución
	actorMesh->SetVisibility(false);
	
}

// Called every frame
void ABoxTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Comprueba que el objeto sea un AVisible_Object_Actor y detiene al objeto
void ABoxTrigger::OnTriggerEnter(UPrimitiveComponent* otherComp, AActor* otherActor, UPrimitiveComponent* overlappedComponent, int32 OtherIndexBody, bool bFromSweep, const FHitResult& SweepResult)
{
	if (otherActor != nullptr && otherComp != nullptr)
	{
		AVisible_Object_Actor* visibleActor = Cast< AVisible_Object_Actor>(otherActor);

		if (visibleActor != nullptr)
			visibleActor->StopDisplacement();
	}
}

//Da servicio al evento end Overlap
void ABoxTrigger::OnTriggerExit(UPrimitiveComponent* otherComp, AActor* otherActor, UPrimitiveComponent* overlappedComponent, int32 OtherIndexBody)
{
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 10, FColor::Red, "End Overlap");
}

