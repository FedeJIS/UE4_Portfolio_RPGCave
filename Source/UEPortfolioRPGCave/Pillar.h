// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactive.h"
#include "Pillar.generated.h"

UCLASS()
class UEPORTFOLIORPGCAVE_API APillar : public AActor, public IInteractive
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APillar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnInteract() override;

};
