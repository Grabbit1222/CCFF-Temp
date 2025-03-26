#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExplosiveItem.generated.h"

UCLASS()
class CCFF_API AExplosiveItem : public AActor
{
	GENERATED_BODY()

public:
	AExplosiveItem();

protected:
	virtual void BeginPlay() override;

public:

private:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* ExplosiveMesh;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UAudioComponent* ExplosionSound;
};