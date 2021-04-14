// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "UEPortfolioRPGCaveCharacter.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(60.f, 60.f);
	TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Trigger Capsule"));
	TriggerCapsule->SetupAttachment(RootComponent);



}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	TriggerCapsule->OnComponentBeginOverlap.AddDynamic(this, &AEnemyCharacter::OnOverlapBegin);
	TriggerCapsule->OnComponentEndOverlap.AddDynamic(this, &AEnemyCharacter::OnOverlapEnd);
	
}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyCharacter::OnInteract()
{
	if (bIsColliding)
	{
		K2_DestroyActor();
	}
}

//DETERMINES THE BEHAVIOUR OF THE ENEMY WHEN START-OVERLAPPING ANOTHER COMPONENT
void AEnemyCharacter::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		AUEPortfolioRPGCaveCharacter* MainCharacter = Cast<AUEPortfolioRPGCaveCharacter>(OtherActor);
		if (MainCharacter) { bIsColliding = true; }
	}
}
//DETERMINES THE BEHAVIOUR OF THE ENEMY WHEN EXIT-OVERLAPPING ANOTHER COMPONENT
void AEnemyCharacter::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		AUEPortfolioRPGCaveCharacter* MainCharacter = Cast<AUEPortfolioRPGCaveCharacter>(OtherActor);
		if (MainCharacter) { bIsColliding = true; }
	}
}

