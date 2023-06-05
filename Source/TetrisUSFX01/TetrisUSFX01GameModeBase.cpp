// Copyright Epic Games, Inc. All Rights Reserved.


#include "TetrisUSFX01GameModeBase.h"
#include "Board.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"

ATetrisUSFX01GameModeBase::ATetrisUSFX01GameModeBase() {
     // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    DefaultPawnClass = ABoard::StaticClass();
    siguientePosicionZ = 0;
}
INivelFactory* INivelFactory::getNivel(int numeroNivel)
{
    if (numeroNivel == 1)
    {
        return NewObject<ANivelBasico>();
    }
    else if (numeroNivel == 2)
    {
        return NewObject<ANivelAvanzado>();
    }
    else
    {
        return nullptr;
    }
}
void ATetrisUSFX01GameModeBase::BeginPlay()
{
    // Call the parent class version of this function
    Super::BeginPlay();

    FVector Location3(0.0f, 5.0f, 5.0f);
    FRotator Rotation3(0.0f, 0.0f, 0.0f);
    FVector Location4(0.0f, -5.0f, 95.0f);
    FRotator Rotation4(0.0f, 0.0f, 0.0f);

    numeroNivel = FMath::RandRange(1, 2);
    if (numeroNivel == 1)
    {
        NivelNuevo1 = GetWorld()->SpawnActor<ANivelBasico>(Location3, Rotation3);
    }
    else
    {
        NivelNuevo2 = GetWorld()->SpawnActor<ANivelAvanzado>(Location4, Rotation4);
    }

    for (TActorIterator<ACameraActor> it(GetWorld()); it; ++it)
    {
        UE_LOG(LogTemp, Warning, TEXT("Find camera: %s"), *(it->GetFName().ToString()));
        if (it->GetFName() == TEXT("BoardCamera"))
        {
            APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
            PC->SetViewTargetWithBlend(*it, 0.5);
            break;
        }
    }

}

// Called every frame
void ATetrisUSFX01GameModeBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

   /* FTransform SpawnLocation;

    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Spawning un Piece"));
    SpawnedPiece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass(), SpawnLocation);
    SpawnedPiece->SetActorRelativeLocation(FVector(0.0, 100.0, 0.0));
    SpawnedPiece->SpawnBlocks();*/ 

}


void ATetrisUSFX01GameModeBase::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
   {
      // Displays a red message on the screen for 10 seconds
      GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Block destruido"));
      SpawnedActor->Destroy();
   }
}
