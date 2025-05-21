#include "MetahumansManager.h"

// Sets default values
AMetahumansManager::AMetahumansManager()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMetahumansManager::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMetahumansManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMetahumansManager::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMetahumansManager::SpawnMetahuman()
{

}
