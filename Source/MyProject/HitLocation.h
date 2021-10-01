#pragma once

#include "CoreMinimal.h"
#include "HitLocation.generated.h"

UENUM(BlueprintType)
enum class HitLocation : uint8 {
	HEAD,
	BODY,
	LARM,
	RARM,
	LLeg,
	RLeg
};