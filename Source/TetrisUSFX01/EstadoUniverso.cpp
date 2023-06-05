// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoUniverso.h"
#include "Escenario.h"

// Sets default values
AEstadoUniverso::AEstadoUniverso()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaterialEscenario = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/MaterialUniverso.MaterialUniverso'"));
}

// Called when the game starts or when spawned
void AEstadoUniverso::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoUniverso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoUniverso::EstablecerEscenario(AEscenario* _Escenario)
{
	FTransform SpawnLocation;
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, TEXT("Escenario Universo Generado"));
	_Escenario->MeshEscenario->SetMaterial(0, MaterialEscenario);
	Escenario->cambiarEstado(Escenario->getEscenarioPlaneta());
}

void AEstadoUniverso::SetEscenario(AEscenario* _Escenario)
{
	Escenario = _Escenario;
}

