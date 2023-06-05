// Fill out your copyright notice in the Description page of Project Settings.

#include "PiezaDecoratorIzquierda.h"

void APiezaDecoratorIzquierda::Rotar()
{
	UE_LOG(LogTemp, Warning, TEXT("now can rotate Estructura multirotacional"));
	FRotator NewRotation = this->GetActorRotation() + FRotator(0.0, Rotacion, 45.0);
	this->SetActorRelativeRotation(NewRotation);
}

void APiezaDecoratorIzquierda::SpawnBlocks()
{
	//SpawnBlocks();
}

void APiezaDecoratorIzquierda::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (TiempoAcumulado >= 0.5)
	{
		UE_LOG(LogTemp, Warning, TEXT("now can move Estructura concreta"));
		//this->SetActorLocation(this->GetActorLocation() + FVector(0.0, 0.0, -100.0));
		Rotar();
		TiempoAcumulado = 0.0;
	}
	else
	{
		TiempoAcumulado += DeltaTime;
	}
}
