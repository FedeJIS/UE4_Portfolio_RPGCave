// Fill out your copyright notice in the Description page of Project Settings.


#include "Lever.h"
#include "UEPortfolioRPGCaveCharacter.h"


// Sets default values
ALever::ALever()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CollisionMesh = CreateDefaultSubobject<UBoxComponent>(FName("Collision Mesh"));
	

}

// Called when the game starts or when spawned
void ALever::BeginPlay()
{
	Super::BeginPlay();
	bIsColliding = false;
	
	CollisionMesh->OnComponentBeginOverlap.AddDynamic(this, &ALever::OnOverlapBegin);
	CollisionMesh->OnComponentEndOverlap.AddDynamic(this, &ALever::OnOverlapEnd);
	
	
}

// Called every frame
void ALever::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALever::OnInteract()
{
	Pull();
}

//Allows the player to Open Doors by pulling the Lever
void ALever::Pull()
{
	if (bIsColliding)
	{
		TArray<UStaticMeshComponent*> Components;
		GetComponents<UStaticMeshComponent>(Components);
		if (Components.Num() > 0)
		{
			UStaticMeshComponent* Lever = Components[1];
			if (Lever)
				Lever->SetWorldRotation(FRotator(40.f, 0.f, 0.f));
		}
		PulledLever.Broadcast(ID);
	}
}
//DETERMINES THE BEHAVIOUR OF THE LEVER WHEN START-OVERLAPPING ANOTHER COMPONENT
void ALever::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		AUEPortfolioRPGCaveCharacter* MainCharacter = Cast<AUEPortfolioRPGCaveCharacter>(OtherActor);
		if (MainCharacter) { bIsColliding = true;}
	}
}
//DETERMINES THE BEHAVIOUR OF THE LEVER WHEN EXIT-OVERLAPPING ANOTHER COMPONENT
void ALever::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		AUEPortfolioRPGCaveCharacter* MainCharacter = Cast<AUEPortfolioRPGCaveCharacter>(OtherActor);
		if (MainCharacter) { bIsColliding = true;}
	}
}


