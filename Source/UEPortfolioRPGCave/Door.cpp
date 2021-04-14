// Fill out your copyright notice in the Description page of Project Settings.

#include "Lever.h"
#include "Kismet/GameplayStatics.h"
#include "Door.h"


// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	TArray<AActor*> Actors;
	FString MyLever= "Lever_" + FString::FromInt(LeverID);
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName(*MyLever), Actors);
	if (Actors.Num() > 0)
	{
		ALever* MyLeverActor = Cast<ALever>(Actors[0]);
		if (MyLeverActor) {
			MyLeverActor->PulledLever.AddDynamic(this, &ADoor::OpenDoor);
			//UE_LOG(LogTemp, Warning, TEXT("Lever assigned to %s!"), *GetName());
		}
	}
	TArray<UStaticMeshComponent*> Components;
	GetComponents<UStaticMeshComponent>(Components);
	if (Components.Num()>0)
	{
		if (bIsDoubleDoor) {
			Right_Door = Components[1];
			Left_Door = Components[2];
			Right_Door->SetCollisionProfileName(FName("BlockAll"));
			Left_Door->SetCollisionProfileName(FName("BlockAll"));
		}
		else {
			Left_Door = Components[1];
			Left_Door->SetCollisionProfileName(FName("BlockAll"));
		}
	}
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Allows a Door to be opened by rotating and changing collisions profiles.
void ADoor::OpenDoor(int ID)
{
	if (ID == LeverID)
	{
		bIsClosed = false;
		Left_Door->SetCollisionProfileName(FName("OverlapAll"));
		Left_Door->SetWorldRotation(FRotator(0.f, LeftDoor_YawValue + GetActorRotation().Yaw, 0.f));
		if (bIsDoubleDoor) {
			Right_Door->SetCollisionProfileName(FName("OverlapAll"));
			Right_Door->SetWorldRotation(FRotator(0.f, RightDoor_YawValue + GetActorRotation().Yaw, 0.f));
		}
	}
}


//IInteractive implementation
void ADoor::OnInteract()
{
	if(!bIsClosed)
		OpenDoor(LeverID);
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("The Door is closed! Find a lever to open it."));
	}
}


