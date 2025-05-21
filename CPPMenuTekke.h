#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Engine/TargetPoint.h"
#include "NavigationSystem.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "Animation/AnimationAsset.h" 
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Blueprint/UserWidget.h"
#include "Components/CanvasPanel.h"
#include "Components/Button.h"
#include "MetahumansManager.h"
#include "CPPMenuTekke.generated.h"

UCLASS()
class APPVIDEOS_API UCPPMenuTekke : public UUserWidget
{
    GENERATED_BODY()

public:
    // Eventuali metodi pubblici se necessari

protected:
    // Questo metodo viene chiamato quando il widget viene creato ed è il posto ideale per
    // inizializzare variabili e fare il binding degli eventi.
    virtual void NativeConstruct() override;

    AMetahumansManager* Metahuman; // VARIABILE PER IL CAST E RIFERIMENTO ALLA CLASSE MetahumanManager
    TSubclassOf<ACharacter> MetahumanElement; // VARIABILE PER L'ELEMENTO DELL'ARRAY DI METAHUMAN
    
    UPROPERTY(BlueprintReadOnly)
    ACharacter* MetahumanActiveRef; // VARIABILE USATA PER RIFERIMENTO AL METAHUMAN SPAWNATO

    UPROPERTY(BlueprintReadOnly)
    AActor* HatchbackRef; // VARIABILE PER RIFERIMENTO ALL'AUTOVETTURA

    TArray<AActor*> FoundActors; // ARRAY PER GLI ATTORI TROVATI CON IL TAG

    FName Tag; // TAG PER RIFERIMENTO ALL'AUTOVETTURA

//*** VARIABILI PER LE POSIZIONI ***
    UPROPERTY(BlueprintReadOnly)
    FVector HousePosMetahuman; // POSZIONE METAHUMAN IN CASA

    UPROPERTY(BlueprintReadOnly) 
    FVector HousePosHatchback; // POSIZONE AUTOVETTURA IN CASA

    UPROPERTY(BlueprintReadOnly)
    FVector UrbanPosMetahuman; // POSIZIONE METAHUMAN AMBIENTE URBANO

    UPROPERTY(BlueprintReadOnly)
    FVector UrbanPosHatchback; // POSIOZNE AUTOVETTURA AMBIENTE URBANO

    FVector StartPosition; // POSIZIONE NEL BEGIN PLAY

    FVector TPPos; // VARIABILE PER MEMORIZZARE LA POSIZIONE DEL METAHUMAN

    FVector CheckPosition; // VARIABILE PER L'ACCESSO ALLA POSIZIONE DEL METAHUMAN
    
    FVector Pos; // POSIZIONE DELLO SPAWN
    
    FRotator Rot; // ROTAZIONE DELLO SPAWN
    
    FVector RightCameraPosition; // POSIZIONE DEL METAHUMAN RISPETTO ALLA DASHCAMERA DI DESTRA

    //*************************************************************************************************************************
    
    ACharacter* CurrentMetahuman; // VARIABILE PER IL PASSAGGIO DEL METAHUMAN
    int32 Index; // INDICE PER CERCARE NELL'ARRAY DEI METAHUMAN
    ATargetPoint* TargetPoint; // TARGET POINT ACTOR IN SCENA
    USkeletalMeshComponent* SkeletalMeshComponent; // VARIABILE PER IL RIFERIMENTO AL SKELETAL MESH COMPONENT
    TArray<USkeletalMeshComponent*> ComponentsArray; // ARRAY DI SKELETAL MESH COMPONENT
    AAIController* AIController; // VARIABILE PER RIFERIMENTO AI CONTROLLER

    //***************************************************** BINDING AI BOTTONI *************************************************
    
    UPROPERTY(meta = (BindWidget))
    UButton* Button_HousePos;
    
    UPROPERTY(meta = (BindWidget))
    UButton* Button_UrbanPos;

    UPROPERTY(meta = (BindWidget)) 
    UButton* Button_Alessandro;
   
    UPROPERTY(meta = (BindWidget))
    UButton* Button_Alessio;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Anna;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Annie;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Bryan;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Chad;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Daniel;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Daniela;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Domenico;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Emanuel;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Enzo;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Ettore;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Fabrizio;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Giada; 
    
    UPROPERTY(meta = (BindWidget))
    UButton* Button_Giuseppe;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Irene;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Jacopo;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Jason;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Jonny;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Kristofer;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Lapo;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Lia;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Lino;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Lucien;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Luigi;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Marco;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_MariaRosa;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Marika;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Marta;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Mauro;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Mihao;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Monia;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Rassell;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Rita;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Sara;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Sing;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Stefano;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Sulemani;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Valentina;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Vince;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Vincenzo;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Viviana;

    //************************************************ FUNZIONI ONCLICKED DEI METAHUMAN *********************************************************
    UFUNCTION()
    void OnClickedAlessandro();

    UFUNCTION()
    void OnClickedAlessio();

    UFUNCTION()
    void OnClickedAnna();

    UFUNCTION()
    void OnClickedAnnie();

    UFUNCTION()
    void OnClickedBryan();

    UFUNCTION()
    void OnClickedChad();

    UFUNCTION()
    void OnClickedDaniel();

    UFUNCTION()
    void OnClickedDaniela();

    UFUNCTION()
    void OnClickedDomenicoParrisi();

    UFUNCTION()
    void OnClickedEmanuel();

    UFUNCTION()
    void OnClickedEnzo();

    UFUNCTION()
    void OnClickedEttore();

    UFUNCTION()
    void OnClickedFabrizio();

    UFUNCTION()
    void OnClickedGiada();

    UFUNCTION()
    void OnClickedGiuseppeTodaro();

    UFUNCTION()
    void OnClickedIrene();

    UFUNCTION()
    void OnClickedJacopo();

    UFUNCTION()
    void OnClickedJason();

    UFUNCTION()
    void OnClickedJonny();

    UFUNCTION()
    void OnClickedKristofer();

    UFUNCTION()
    void OnClickedLapo();

    UFUNCTION()
    void OnClickedLia();

    UFUNCTION()
    void OnClickedLino();

    UFUNCTION()
    void OnClickedLucien();

    UFUNCTION()
    void OnClickedLuigi();

    UFUNCTION()
    void OnClickedMarco();

    UFUNCTION()
    void OnClickedMariaRosa();

    UFUNCTION()
    void OnClickedMarika();

    UFUNCTION()
    void OnClickedMarta();

    UFUNCTION()
    void OnClickedMauro();

    UFUNCTION()
    void OnClickedMihao();

    UFUNCTION()
    void OnClickedMonia();

    UFUNCTION()
    void OnClickedRassell();

    UFUNCTION()
    void OnClickedRita();

    UFUNCTION()
    void OnClickedSara();

    UFUNCTION()
    void OnClickedSing();

    UFUNCTION()
    void OnClickedStefano();

    UFUNCTION()
    void OnClickedSulemani();

    UFUNCTION()
    void OnClickedValentina();

    UFUNCTION()
    void OnClickedVince();

    UFUNCTION()
    void OnClickedVincenzo();

    UFUNCTION()
    void OnClickedViviana();

    //************************************** RIFERIMENTI BOTTONI ANIMAZIONI **************************************************
    UPROPERTY(meta = (BindWidget)) // ESEGUE IL BINDING SUL BOTTONE CHIAMATO Walk_1
    UButton* Walk_1;

    //************************************** FUNZIONI ANIMAZIONI E CAMBIO ZONA ***********************************************
    UFUNCTION()
    void OnClickedWalk_1(); // PARTE L'ANIMAZIONE Walk_1 QUANDO VIENE PREMUTO IL BOTTONE WALK_1

    UFUNCTION()
    void UrbanPosition(); // CAMBIA POSIZIONE DEL METAHUMAN E DELL'AUTOVETTURA NELLA ZONA URBANA

    UFUNCTION()
    void HousePosition(); // CAMBIA POSIZIONE DEL METAHUMAN E DELL'AUTOVETTURA NELLA ZONA RESIDENZIALE
};
