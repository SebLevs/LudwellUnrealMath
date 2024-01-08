#pragma once

#include "CoreMinimal.h"
#include "SinOscillation.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class LUDWELLUNREALMATH_API USinOscillation : public UActorComponent
{
	GENERATED_BODY()

public:
	USinOscillation();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Ludwell|Math")
	void Oscillate() const;

private:
	FVector InitialLocation;

	UPROPERTY(Category = "Values", EditAnywhere)
	FVector Amplitudes = FVector(1.0f, 1.0f, 1.0f);

	UPROPERTY(Category = "Values", EditAnywhere)
	FVector Frequencies = FVector(1.0f, 1.0f, 1.0f);
};
