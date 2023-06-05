// Fill out your copyright notice in the Description page of Project Settings.


#include "EscenarioGalaxia.h"
#include "Escenario.h"

// Sets default values
AEscenarioGalaxia::AEscenarioGalaxia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaterialEscenario = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/MaterialGalaxia.MaterialGalaxia'"));
}

// Called when the game starts or when spawned
void AEscenarioGalaxia::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscenarioGalaxia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEscenarioGalaxia::EstablecerEscenario(AEscenario* _Escenario)
{
	FTransform SpawnLocation;
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, TEXT("Escenario Galaxia Generado"));
	_Escenario->MeshEscenario->SetMaterial(0, MaterialEscenario);
	Escenario->cambiarEstado(Escenario->getEstadoUniverso());
}

void AEscenarioGalaxia::SetEscenario(AEscenario* _Escenario)
{
	Escenario = _Escenario;
}

