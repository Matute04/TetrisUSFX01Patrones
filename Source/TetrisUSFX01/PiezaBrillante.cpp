// Fill out your copyright notice in the Description page of Project Settings.


#include "PiezaBrillante.h"
#include "Pieza.h"

// Sets default values
APiezaBrillante::APiezaBrillante()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APiezaBrillante::BeginPlay()
{
	Super::BeginPlay();
	//Spawn the Lodging Actors
	Pieza = GetWorld()->SpawnActor<APieza>(APieza::StaticClass());
	//Attach it to the Builder (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void APiezaBrillante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APiezaBrillante::ConstruirColores()
{
	Pieza->setColors(0);
}

void APiezaBrillante::ConstruirRotacion()
{
	Pieza->setRotacionY(90.0f);
	Pieza->setRotacionZ(0.0f);
}

APieza* APiezaBrillante::GetPieza()
{
	return Pieza;
}