// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HealingActor.generated.h"

class AFortniteCloneCharacter;

UCLASS()
class FORTNITECLONE_API AHealingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHealingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(Replicated)
	AFortniteCloneCharacter* Holder;

	UPROPERTY(EditDefaultsOnly, Category = "Health")
	float Health;

	virtual bool IsSupportedForNetworking() const override
	{
		return true;
	}
};
