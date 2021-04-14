// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactive.h"
#include "Door.generated.h"



UCLASS()
class UEPORTFOLIORPGCAVE_API ADoor : public AActor, public IInteractive
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();
	UPROPERTY(EditAnywhere)
		int LeverID = 0;
	UPROPERTY(EditAnywhere)
		float LeftDoor_YawValue =0.f;
	UPROPERTY(EditAnywhere)
		float RightDoor_YawValue = 0.f;
	UPROPERTY(EditAnywhere)
		bool bIsDoubleDoor = false;
	UPROPERTY(EditAnywhere)
		bool bIsClosed = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UStaticMeshComponent* Right_Door;
	UStaticMeshComponent* Left_Door;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OpenDoor(int ID);
	virtual void OnInteract() override;


};
