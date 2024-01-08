#include "SinOscillation.h"

USinOscillation::USinOscillation()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void USinOscillation::BeginPlay()
{
	Super::BeginPlay();
	InitialLocation = GetOwner()->GetActorLocation();
}

void USinOscillation::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Oscillate();
}

void USinOscillation::Oscillate() const
{
	const float Time = GetWorld()->GetTimeSeconds();

	const float NewX = Amplitudes.X * FMath::Sin(Time * Frequencies.X);
	const float NewY = Amplitudes.Y * FMath::Sin(Time * Frequencies.Y);
	const float NewZ = Amplitudes.Z * FMath::Sin(Time * Frequencies.Z);

	const FVector NewLocation = InitialLocation + FVector(NewX, NewY, NewZ);
	GetOwner()->SetActorLocation(NewLocation);
}
