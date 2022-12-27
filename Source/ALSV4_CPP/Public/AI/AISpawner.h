// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AISpawner.generated.h"

UCLASS()
class ALSV4_CPP_API AAISpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAISpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// The mesh to use for the capsules
	UPROPERTY(EditAnywhere)
		UStaticMesh* CapsuleMesh;

	// Function to spawn a cluster of capsules
	UFUNCTION(BlueprintCallable)
		void SpawnNPCs(int NumCapsules, float MinX, float MaxX, float MinY, float MaxY, float MinZ, float MaxZ);

};
