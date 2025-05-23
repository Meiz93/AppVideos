#include "CPPMenuTekke.h"

void UCPPMenuTekke::NativeConstruct()
{
    Super::NativeConstruct();
    //********************************* BOTTONI METAHUMAN *********************************************************************
    // QUANDO VIENE CLICCATO IL BOTTONE RICHIAMA IL METODO ASSEGNATO
    Button_Alessandro->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedAlessandro);
    Button_Alessio->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedAlessio);
    Button_Anna->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedAnna);
    Button_Annie->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedAnnie);
    Button_Bryan->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedBryan);
    Button_Chad->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedChad);
    Button_Daniel->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedDaniel);
    Button_Daniela->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedDaniela);
    Button_Domenico->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedDomenicoParrisi);
    Button_Emanuel->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedEmanuel);
    Button_Enzo->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedEnzo);
    Button_Ettore->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedEttore);
    Button_Fabrizio->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedFabrizio);
    Button_Giada->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedGiada);
    Button_Giuseppe->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedGiuseppeTodaro);
    Button_Irene->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedIrene);
    Button_Jacopo->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedJacopo);
    Button_Jonny->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedJonny);
    Button_Kristofer->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedKristofer);
    Button_Lapo->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedLapo);
    Button_Lia->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedLia);
    Button_Lino->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedLino);
    Button_Lucien->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedLucien);
    Button_Luigi->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedLuigi);
    Button_Marco->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedMarco);
    Button_MariaRosa->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedMariaRosa);
    Button_Marika->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedMarika);
    Button_Marta->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedMarta);
    Button_Mauro->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedMauro);
    Button_Mihao->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedMihao);
    Button_Monia->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedMonia);
    Button_Rassell->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedRassell);
    Button_Rita->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedRita);
    Button_Sara->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedSara);
    Button_Sing->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedSing);
    Button_Stefano->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedStefano);
    Button_Sulemani->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedSulemani);
    Button_Valentina->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedValentina);
    Button_Vince->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedVince);
    Button_Vincenzo->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedVincenzo);
    Button_Viviana->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedViviana); 

    //*****************************************************************************************************************************
    //***************************************** BOTTONI DELLE ANIMAZIONI **********************************************************

    Walk_1->OnClicked.AddDynamic(this, &UCPPMenuTekke::OnClickedWalk_1);

    //*****************************************************************************************************************************
    //***************************************** ALTRI BOTTONI *********************************************************************
    Button_UrbanPos->OnClicked.AddDynamic(this, &UCPPMenuTekke::UrbanPosition);
    Button_HousePos->OnClicked.AddDynamic(this, &UCPPMenuTekke::HousePosition);
    //*****************************************************************************************************************************
    //************** Posizioni Metahuman e HatchBack ****************************************************************************
    RightCameraPosition = FVector(-3528.0f, 677.0f, 90.0);
    LeftCameraPosition = FVector(1109.0f, -4171.0f, 92.0f);
    BackCameraPosition = FVector(1109.0f, -4642.0f, 92.0f);
    FrontCameraPosition = FVector(-520.0f, -3370.0f, 92.0f);
    HousePosHatchback = FVector(630.0f, 9660.0f, -10); 
    HousePosMetahuman = FVector(468.0f, 9000.0f, 75.0f);
    UrbanPosHatchback = FVector(-170.0f, -4526.0f, -15.0f);
    UrbanPosMetahuman = FVector(-520.0f, -3370.0f, 92.0f);
    Rot = FRotator(0.0f, -62.0f, 0.0f);
    //*****************************************************************************************************************************

    // Tag dell'autovettura
    Tag = TEXT("Car");

    // ESEGUE IL CAST SUL BP_MetahumansManager PRESENTE NELLA SCENA E SUI ACTOR CON TAG "Car"
    Metahuman = Cast<AMetahumansManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AMetahumansManager::StaticClass()));
    UGameplayStatics::GetAllActorsWithTag(GetWorld(),Tag,FoundActors);
    HatchbackRef = FoundActors[0];
    
    // SPAWNA IL PRIMO ELEMENTO DELL'ARRAY DI METAHUMAN
    MetahumanActiveRef = GetWorld()->SpawnActor<ACharacter>(Metahuman->MetahumanArray[0], HousePosMetahuman, Rot);

    // ESEGUE IL CAST SUL Target Point PRESENTE IN SCENA
    TargetPoint = Cast<ATargetPoint>(UGameplayStatics::GetActorOfClass(GetWorld(), ATargetPoint::StaticClass()));
    TPPos = TargetPoint->GetActorLocation();

    // Definito L'array delle posizioni
    Positions = {HousePosMetahuman,UrbanPosMetahuman,RightCameraPosition,LeftCameraPosition,BackCameraPosition,FrontCameraPosition};
}


void UCPPMenuTekke::OnClickedWalk_1() // Parte l'animazione di camminata Walk_1
{
    // Esegue il cast sul AI Controller e il SkeletalMeshComponent
    AIController = Cast<AAIController>(MetahumanActiveRef->GetController());
    MetahumanActiveRef->GetComponents<USkeletalMeshComponent>(ComponentsArray);
    SkeletalMeshComponent = ComponentsArray[1];

    // Controlla la posizione del Metahuman
    CheckPosition = MetahumanActiveRef->GetActorLocation();

    // Per ogni elemento dell'array Positions controlla se sono uguali a CheckPosition  
    for (const FVector& Pos : Positions)
    {
        if (CheckPosition.Equals(Pos, 5.0f)) // Nel caso True parte l'animazione
        {
            SkeletalMeshComponent->PlayAnimation(Metahuman->AnimsArray[0], true);
            AIController->MoveToActor(TargetPoint);
            Position = Pos;
        }
        else // Nel caso False ferma animazione e movimento, resetta la posizione e fa ripartire 
        {
            SkeletalMeshComponent->Stop();
            SkeletalMeshComponent->SetAnimation(nullptr);
            AIController->StopMovement();
            MetahumanActiveRef->SetActorLocationAndRotation(Position, FRotator(0.0, 80.0, 0.0));
            SkeletalMeshComponent->PlayAnimation(Metahuman->AnimsArray[0], true);
            AIController->MoveToActor(TargetPoint);
        }
    }
}

// Funzione che spwana il Metahuman e Hactback in postazione Urbana
void UCPPMenuTekke::UrbanPosition()
{
    AIController = Cast<AAIController>(MetahumanActiveRef->GetController());
    MetahumanActiveRef->GetComponents<USkeletalMeshComponent>(ComponentsArray);
    SkeletalMeshComponent = ComponentsArray[1];
    SkeletalMeshComponent->Stop();
    SkeletalMeshComponent->SetAnimation(nullptr);
    AIController->StopMovement();
    MetahumanActiveRef->SetActorLocationAndRotation(UrbanPosMetahuman, FRotator(0.0f, 80.0f, 0.0f));
    HatchbackRef->SetActorLocationAndRotation(UrbanPosHatchback, FRotator(0.0f, 142.0f, 0.0f));
}

// Funzione che spwana il Metahuman e Hactback in postazione Residenziale
void UCPPMenuTekke::HousePosition()
{
    AIController = Cast<AAIController>(MetahumanActiveRef->GetController());
    MetahumanActiveRef->GetComponents<USkeletalMeshComponent>(ComponentsArray);
    SkeletalMeshComponent = ComponentsArray[1];
    SkeletalMeshComponent->Stop();
    SkeletalMeshComponent->SetAnimation(nullptr);
    AIController->StopMovement();
    MetahumanActiveRef->SetActorLocationAndRotation(HousePosMetahuman, FRotator(0.0, 80.0, 0.0));
    HatchbackRef->SetActorLocationAndRotation(HousePosHatchback, FRotator(0.0f, -90.0f, 0.0f));
}

// Premuto il bottone elimina il Metahuman precedende e spwana quello nuovo in base a index
void UCPPMenuTekke::OnClickedAlessandro()
{
    Index = 0;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedAlessio()
{
    Index = 1;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedAnna()
{
    Index = 2;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedAnnie()
{
    Index = 3;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}


void UCPPMenuTekke::OnClickedBryan()
{
    Index = 4;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedChad()
{
    Index = 5;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedDaniel()
{
    Index = 6;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedDaniela()
{
    Index = 7;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedDomenicoParrisi()
{
    Index = 8;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedEmanuel()
{
    Index = 9;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedEnzo()
{
    Index = 10;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedEttore()
{
    Index = 11;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}


void UCPPMenuTekke::OnClickedFabrizio()
{
    Index = 12;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedGiada()
{
    Index = 13;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedGiuseppeTodaro()
{
    Index = 14;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedIrene()
{
    Index = 15;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedJacopo()
{
    Index = 16;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedJason()
{
    Index = 17;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedJonny()
{
    Index = 18;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedKristofer()
{
    Index = 19;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}


void UCPPMenuTekke::OnClickedLapo()
{
    Index = 20;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedLia()
{
    Index = 21;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedLino()
{
    Index = 22;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedLucien()
{
    Index = 23;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedLuigi()
{
    Index = 24;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedMarco()
{
    Index = 25;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedMariaRosa()
{
    Index = 26;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedMarika()
{
    Index = 27;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}


void UCPPMenuTekke::OnClickedMarta()
{
    Index = 28;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedMauro()
{
    Index = 29;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedMihao()
{
    Index = 30;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedMonia()
{
    Index = 31;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedRassell()
{
    Index = 32;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedRita()
{
    Index = 33;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedSara()
{
    Index = 34;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedSing()
{
    Index = 35;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}


void UCPPMenuTekke::OnClickedStefano()
{
    Index = 36;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedSulemani()
{
    Index = 37;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedValentina()
{
    Index = 38;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedVince()
{
    Index = 39;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedVincenzo()
{
    Index = 40;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}

void UCPPMenuTekke::OnClickedViviana()
{
    Index = 41;
    MetahumanElement = Metahuman->MetahumanArray[Index];
    MetahumanActiveRef->Destroy();
    CurrentMetahuman = GetWorld()->SpawnActor<ACharacter>(MetahumanElement, HousePosMetahuman, Rot);
    MetahumanActiveRef = CurrentMetahuman;
}
