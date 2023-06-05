// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoAleatorioCA.h"

// Sets default values for this component's properties
UMovimientoAleatorioCA::UMovimientoAleatorioCA()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	RadioMovimiento = 10.0f;
	AnchoMovimiento = 15.0f;
	AltoMovimiento = 15.0f;
	ProfundidadMovimiento = 0.0f;
	TiempoAcumulado = 0.0;
	TiempoLimite = 0.2;
	TiempoTotal = 0.0f;
	MovimientoLoco = true;
}


// Called when the game starts
void UMovimientoAleatorioCA::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMovimientoAleatorioCA::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	TiempoTotal += DeltaTime;
	if (MovimientoLoco && TiempoTotal >= TiempoLimite)
	{
		TiempoAcumulado += TiempoTotal;
		AActor* Padre = GetOwner();
		if (Padre)
		{
			int XAleatorio = FMath::RandRange(-1, 1);
			int YAleatorio = FMath::RandRange(-1, 1);
			int ZAleatorio = FMath::RandRange(-1, 1);
			// Find a new position for the object to go to 
			auto NuevaPosicion = Padre->GetActorLocation() +
				FVector
				(
					XAleatorio * ProfundidadMovimiento,
					YAleatorio * AnchoMovimiento,
					ZAleatorio * AltoMovimiento
				);
			Padre->SetActorLocation(NuevaPosicion);
		}
		TiempoTotal = 0.0f;
	}
	if (TiempoAcumulado >= 3.0f)
	{
		MovimientoLoco = false;
	}
}

