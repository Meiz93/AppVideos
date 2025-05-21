#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimationAsset.h" 
#include "GameFramework/Character.h"
#include "MetahumansManager.generated.h"

UCLASS()
class APPVIDEOS_API AMetahumansManager : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMetahumansManager();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Metahumans")
	TArray<TSubclassOf<ACharacter>> MetahumanArray;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Animations")
	TArray<UAnimationAsset*> AnimsArray;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void SpawnMetahuman();
}
