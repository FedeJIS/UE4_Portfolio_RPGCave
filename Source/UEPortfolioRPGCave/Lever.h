// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactive.h"
#include "Components/BoxComponent.h"
#include "Lever.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPulledLever, int, ID);
UCLASS()
class UEPORTFOLIORPGCAVE_API ALever : public AActor, public IInteractive
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALever();
	UPROPERTY(EditAnywhere)
		int ID;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	bool bIsColliding;

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* CollisionMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnInteract() override;
	void Pull();
	
	//Delegate handle
	UPROPERTY(BlueprintAssignable, Category = "EventDispatchers")
	FOnPulledLever PulledLever;
	UFUNCTION()
		virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		virtual void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


};
