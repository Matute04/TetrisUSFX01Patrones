// Fill out your copyright notice in the Description page of Project Settings.


#include "EscenarioPlaneta.h"
#include "Escenario.h"

// Sets default values
AEscenarioPlaneta::AEscenarioPlaneta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaterialEscenario = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/MaterialPlaneta.MaterialPlaneta'"));
}

// Called when the game starts or when spawned
void AEscenarioPlaneta::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscenarioPlaneta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEscenarioPlaneta::EstablecerEscenario(AEscenario* _Escenario)
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, TEXT("Escenario Planeta Generado"));
	_Escenario->MeshEscenario->SetMaterial(0, MaterialEscenario);
	Escenario->cambiarEstado(Escenario->getEscenarioGalaxia());
}

void AEscenarioPlaneta::SetEscenario(AEscenario* _Escenario)
{
	Escenario = _Escenario;
}

