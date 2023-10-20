// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySystem/Abilities/Base/MGameplayAbility.h"
#include "GA_Melee.generated.h"

/**
 * 
 */
UCLASS()
class UGA_Melee : public UMGameplayAbility
{
	GENERATED_BODY()

public:

	UGA_Melee();

	virtual EActivateFailCode CanActivateCondition(const FGameplayAbilityActorInfo& ActorInfo) const override;
	
};
