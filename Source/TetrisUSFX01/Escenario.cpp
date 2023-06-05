// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenario.h"
#include "EstadoEscenario.h"
#include "EstadoUniverso.h"
#include "EscenarioGalaxia.h"
#include "EscenarioPlaneta.h"

AEscenario::AEscenario()
{
	PrimaryActorTick.bCanEverTick = true;
	MeshEscenario = CreateDefaultSubobject<UStaticMeshComponent>("Escenario Mesh");
	RootComponent = MeshEscenario;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> Escenarios(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
    //StaticMesh'/Game/Mesh/block.block'
    if (Escenarios.Succeeded())
    {
        MeshEscenario->SetStaticMesh(Escenarios.Object);
        MeshEscenario->SetRelativeLocation(FVector(1000.0f, 1000.0f, 1000.0f));
        MeshEscenario->SetWorldScale3D(FVector(5.0f, 3.0f, 2.5f));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("mesh not found"));
    }

    MaterialEscenario = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/MaterialInicio.MaterialInicio'"));
}

void AEscenario::BeginPlay()
{
    Super::BeginPlay();
}

void AEscenario::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

AEscenario* AEscenario::iniciar()
{
    EscenarioPlaneta = GetWorld()->SpawnActor<AEscenarioPlaneta>(AEscenarioPlaneta::StaticClass());
    EscenarioPlaneta->SetEscenario(this);

    //Spanw the No Coin State and set this Slot Machine to it
    EscenarioGalaxia = GetWorld()->SpawnActor<AEscenarioGalaxia>(AEscenarioGalaxia::StaticClass());
    EscenarioGalaxia->SetEscenario(this);

    //Spanw the Coin Inserted State and set this Slot Machine to it
    EstadoUniverso = GetWorld()->SpawnActor<AEstadoUniverso>(AEstadoUniverso::StaticClass());
    EstadoUniverso->SetEscenario(this);


    FTransform SpawnLocation;
    //UPROPERTY()
        //AEscenario* B;
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::White, TEXT("Escenario Inicial Generado"));
    AEscenario* Escenario = GetWorld()->SpawnActor<AEscenario>(AEscenario::StaticClass(), SpawnLocation);
    //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
    Escenario->MeshEscenario->SetMaterial(0, MaterialEscenario);
    //B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
    Escenario->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
    Escenario->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));

    Estado = EscenarioPlaneta;
    return Escenario;
}

void AEscenario::cambiarEscenario(AEscenario* _Escenario)
{
    GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Estableciendo escenario"));
    Estado->EstablecerEscenario(_Escenario);
}

void AEscenario::cambiarEstado(IEstadoEscenario* _Estado)
{
    Estado = _Estado;
}

IEstadoEscenario* AEscenario::getEscenarioPlaneta()
{
    return EscenarioPlaneta;
}
IEstadoEscenario* AEscenario::getEstadoUniverso()
{
    return EstadoUniverso;
}

IEstadoEscenario* AEscenario::getEscenarioGalaxia()
{
	return EscenarioGalaxia;
}

IEstadoEscenario* AEscenario::getEstado()
{
	return Estado;
}
