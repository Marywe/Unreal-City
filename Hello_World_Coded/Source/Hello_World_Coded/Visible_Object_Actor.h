// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Visible_Object_Actor.generated.h"

UCLASS()
class HELLO_WORLD_CODED_API AVisible_Object_Actor : public AActor
{
	GENERATED_BODY()
	
public:	

	//Malla del objeto
	UPROPERTY(EditAnyWhere, Category = "Added Mesh")
		class UStaticMeshComponent* actorMesh;

	//Colisionador del objeto
	UPROPERTY(EditAnyWhere, Category = "Added Collider")
		class UBoxComponent* boxCollider;

	//Velocidad de desplazamiento
	UPROPERTY(EditAnyWhere, Category = "Speed")
		float displacementSpeed = 10;

	// Sets default values for this actor's properties
	AVisible_Object_Actor();

private:
	//Indica si el objeto se está desplazando
	bool isDisplacing;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Método que desplaza al objeto
	void Displace(float DeltaTime);

	UFUNCTION()
		//Callback del evento clic sobre este actor
		void OnClic(AActor* actor, FKey keyname);

	UFUNCTION()
		//Callback del evento de pulsación de una tecla
		void OnActionKeyPressed();

	//Detiene el desplazamiento del objeto
	void StopDisplacement();
};
