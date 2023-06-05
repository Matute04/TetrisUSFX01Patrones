// Fill out your copyright notice in the Description page of Project Settings.


#include "PiezaMulticolor.h"
#include "Pieza.h"

// Sets default values
APiezaMulticolor::APiezaMulticolor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APiezaMulticolor::BeginPlay()
{
	Super::BeginPlay();
	//Spawn the Lodging Actors
	Pieza = GetWorld()->SpawnActor<APieza>(APieza::StaticClass());
	//Attach it to the Builder (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void APiezaMulticolor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APiezaMulticolor::ConstruirColores()
{
	Pieza->setColors(5);
}

void APiezaMulticolor::ConstruirRotacion()
{
	Pieza->setRotacionY(0.0f);
	Pieza->setRotacionZ(90.0f);
}

APieza* APiezaMulticolor::GetPieza()
{
	return Pieza;
}
