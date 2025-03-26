#include "Items/ExplosiveItem.h"
#include "Components/StaticMeshComponent.h"
#include "Components/AudioComponent.h"

AExplosiveItem::AExplosiveItem()
{
    PrimaryActorTick.bCanEverTick = false;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    ExplosiveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ExplosiveMesh"));
    ExplosiveMesh->SetupAttachment(RootComponent);

    ExplosionSound = CreateDefaultSubobject<UAudioComponent>(TEXT("ExplosionSound"));
    ExplosionSound->SetupAttachment(RootComponent);
}

void AExplosiveItem::BeginPlay()
{
    Super::BeginPlay();
}
