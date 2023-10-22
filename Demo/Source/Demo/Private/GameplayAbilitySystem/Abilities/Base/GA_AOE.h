// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MGameplayAbility.h"
#include "Abilities/GameplayAbility.h"
#include "GA_AOE.generated.h"

/**
 * 瞬发型AOE
 */
UCLASS()
class UGA_AOE : public UGameplayAbility
{
	GENERATED_BODY()

public:

	/** 技能等级*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	int32 Level = 1;

	/** 射程, 0为以自身为中心释放*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	int32 Range = 0;
	
	/** 扇形张角, 360为一个圆*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	int32 FanAngle = 360;

	/** 法力消耗*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	int32 Mana = 0;

	/** 怒气消耗*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	int32 Rage = 0;

	/** 能量消耗*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	int32 Energy = 0;
	
	/** 消耗品*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	TArray<int32> NeedItems;

	/** 技能目标类型*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	ETargetType TargetType = ETargetType::HostileOnly;

	/** 技能起手时对目标施加效果*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	TArray<TSubclassOf<UMGameplayEffect>> EffectsToTargetOnStart;

	/** 技能起手时对目标施加效果*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	TArray<TSubclassOf<UMGameplayEffect>> EffectsToTargetOnEnd;
	
	
	UFUNCTION(BlueprintCallable)
	virtual EActivateFailCode CanActivateCondition(const FGameplayAbilityActorInfo& ActorInfo) const;
	
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* OwnerInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	virtual bool CheckCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, FGameplayTagContainer* OptionalRelevantTags) const override;

private:

	UPROPERTY(Transient)
	FVector TargetData = FVector(0, 0, 0);
};
