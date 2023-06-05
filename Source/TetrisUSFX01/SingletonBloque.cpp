// Fill out your copyright notice in the Description page of Project Settings.


#include "SingletonBloque.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ASingletonBloque::ASingletonBloque()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TArray<AActor*> Bloques; UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASingletonBloque::StaticClass(), Bloques);
	if (Bloques.Num() > 1)
	{
		Bloque = Cast<ASingletonBloque>(Bloques[0]);
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Se alcanzo el limite de bloques creados"), *Bloque->GetName()));
		//Then Destroy this Actor
		Destroy();
	}
	else {
		BloqueMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BloqueMesh"));
		RootComponent = BloqueMesh;

		static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("StaticMesh'/Game/Mesh/block.block'"));

		if (BlockMeshAsset.Succeeded())
		{
			BloqueMesh->SetStaticMesh(BlockMeshAsset.Object);
			BloqueMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Block"));
		}
	}
}

// Called when the game starts or when spawned
void ASingletonBloque::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASingletonBloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

