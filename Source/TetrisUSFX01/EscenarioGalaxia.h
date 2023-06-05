// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadoEscenario.h"
#include "EscenarioGalaxia.generated.h"

UCLASS()
class TETRISUSFX01_API AEscenarioGalaxia : public AActor, public IEstadoEscenario
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscenarioGalaxia();

private:

	UPROPERTY()
		class AEscenario* Escenario;

	UMaterialInterface* MaterialEscenario;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void EstablecerEscenario(class AEscenario* _Escenario) override;
	virtual void SetEscenario(class AEscenario* _Escenario) override;
};
