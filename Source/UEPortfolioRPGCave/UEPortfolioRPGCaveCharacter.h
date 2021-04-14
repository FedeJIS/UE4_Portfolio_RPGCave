// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UEPortfolioRPGCaveCharacter.generated.h"
UCLASS(Blueprintable)
class AUEPortfolioRPGCaveCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AUEPortfolioRPGCaveCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;
	UPROPERTY(BlueprintReadWrite, Category = Attack)
		bool bIsAttacking = false;
	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns CursorToWorld subobject **/
	FORCEINLINE class UDecalComponent* GetCursorToWorld() { return CursorToWorld; }
	UFUNCTION(BlueprintCallable, Category = Getters)
	bool IsAttacking() const;
	UFUNCTION(BlueprintCallable, Category = Setters)
	void SetIsAttacking(bool value);
	void Attack();

private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** A decal that projects to the cursor location. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UDecalComponent* CursorToWorld;

	void ResetAttack();

	

};

