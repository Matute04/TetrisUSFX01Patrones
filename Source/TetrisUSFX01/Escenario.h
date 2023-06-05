// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadoEscenario.h"
#include "Escenario.generated.h"

UCLASS()
class TETRISUSFX01_API AEscenario : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscenario();

private:

	IEstadoEscenario* EscenarioPlaneta;
	IEstadoEscenario* EstadoUniverso;
	IEstadoEscenario* EscenarioGalaxia;
	IEstadoEscenario* Estado;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MeshEscenario;

	UMaterialInterface* MaterialEscenario;

	AEscenario* iniciar();
	void cambiarEscenario(AEscenario* _Escenario);
	void cambiarEstado(IEstadoEscenario* _Estado);

	IEstadoEscenario* getEscenarioPlaneta();
	IEstadoEscenario* getEstadoUniverso();
	IEstadoEscenario* getEscenarioGalaxia();
	IEstadoEscenario* getEstado();
};
