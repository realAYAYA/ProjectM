// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "MGameplayAbility.generated.h"

class AMCharacter;
class UMAbilitySystemComponent;
class UMGameplayEffect;

UENUM(BlueprintType)
enum class ETargetType : uint8
{
	HostileOnly		UMETA(Displayname = "只能敌对"),
	SelfOnly		UMETA(Displayname = "只对自己"),
	FriendlyOnly	UMETA(Displayname = "只对友军"),
	SelfOrFriendly	UMETA(Displayname = "自己或友军"),
	Any				UMETA(Displayname = "任何目标"),
};

UENUM(BlueprintType)
enum class EActivateFailCode : uint8
{
	Success			UMETA(Displayname = "成功"),
	Cooldown		UMETA(Displayname = "冷却中"),
	OutOfRange		UMETA(Displayname = "超出距离"),
	TooClose		UMETA(Displayname = "太近了"),
	NoToward		UMETA(Displayname = "面向对方"),
	NoMana			UMETA(Displayname = "法力不足"),
	NoEnergy		UMETA(Displayname = "能量不足"),
	NoRage			UMETA(Displayname = "怒气不足"),
	InValidTarget	UMETA(Displayname = "无效的目标"),
	NoTarget		UMETA(Displayname = "需要一个目标"),
	NoItem			UMETA(Displayname = "道具不足"),
	
	BadMemory		UMETA(Displayname = "内存错误")
};

/**
 * 
 */
UCLASS()
class UMGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:

	/** 技能等级*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	int32 Level = 1;
	
	/** 射程*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	int32 Range = 1500;

	/** 最低射程*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	int32 MinRange = 0;

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

	/** 技能结束时对目标施加效果*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	TArray<TSubclassOf<UMGameplayEffect>> EffectsToTargetOnEnd;

	/** 技能激活时赋予效果，结束时主动移除，配合CancelAbility()，适合技能及其效果同时存在的情况*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	TArray<TSubclassOf<UGameplayEffect>> OngoingEffectsToRemoveOnEnd;

	/** 技能激活时赋予效果，但结束时并不会主动移除*/
	UPROPERTY(EditDefaultsOnly, Category = "ProjectM")
	TArray<TSubclassOf<UGameplayEffect>> OngoingEffectsToJustApplyOnStart;

protected:

	UPROPERTY(Transient)
	TObjectPtr<AMCharacter> Target = nullptr;
	
private:
	
	TArray<FActiveGameplayEffectHandle> RemoveOnEndEffectHandles;

public:
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	AMCharacter* GetMCharacterFromActorInfo() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	UMAbilitySystemComponent* GetMAbilitySystemComponent() const;

	UFUNCTION(BlueprintCallable)
	virtual EActivateFailCode CanActivateCondition(const FGameplayAbilityActorInfo& ActorInfo) const;
	
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* OwnerInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	virtual bool CheckCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, FGameplayTagContainer* OptionalRelevantTags) const override;
};
