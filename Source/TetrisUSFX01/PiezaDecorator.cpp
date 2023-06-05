// Fill out your copyright notice in the Description page of Project Settings.


#include "PiezaDecorator.h"

// Sets default values
APiezaDecorator::APiezaDecorator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APiezaDecorator::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APiezaDecorator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APiezaDecorator::Rotar()
{
	PiezaBordeInterfaz->Rotar();
}

void APiezaDecorator::SpawnBlocks()
{
	//PiezaBordeInterfaz->SpawnBlocks();
}

