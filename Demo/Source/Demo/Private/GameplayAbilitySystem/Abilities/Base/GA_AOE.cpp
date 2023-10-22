// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/Abilities/Base/GA_AOE.h"

#include "AbilitySystemGlobals.h"
#include "MBlueprintLibrary.h"
#include "Characters/MCharacter.h"
#include "GameplayAbilitySystem/AttributeSets/MAttributeSet.h"

EActivateFailCode UGA_AOE::CanActivateCondition(const FGameplayAbilityActorInfo& ActorInfo) const
{
	const AMCharacter* Caster = Cast<AMCharacter>(ActorInfo.AvatarActor.Get());
	
	// 消耗条件不足
	if (Caster->GetAttributeSet()->Mana.GetCurrentValue() < Mana)
	{
		return EActivateFailCode::NoMana;
	}
	if (Caster->GetAttributeSet()->Energy.GetCurrentValue() < Energy)
	{
		return EActivateFailCode::NoEnergy;
	}
	if (Caster->GetAttributeSet()->Rage.GetCurrentValue() < Rage)
	{
		return EActivateFailCode::NoRage;
	}

	// 支持远程施法，否则就是原地施法
	if (Range > 0)
	{
		{
			// Todo 技能放置距离超出范围
			const float Distance = 0;//(Caster->GetActorLocation() - CurrentTarget->GetActorLocation()).Length();
			if (Distance > Range)
			{
				return EActivateFailCode::OutOfRange;
			}
	
			// Todo 技能放置不在视野中
		}
	}
	
	return EActivateFailCode::Success;
}

bool UGA_AOE::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags,
	FGameplayTagContainer* OptionalRelevantTags) const
{
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags);
}

void UGA_AOE::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* OwnerInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	// Todo 选择目标，施加GE，如果没有配置，则跳过
	Super::ActivateAbility(Handle, OwnerInfo, ActivationInfo, TriggerEventData);
}

void UGA_AOE::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	// Todo 选择目标，施加GE，如果没有配置，则跳过
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

bool UGA_AOE::CheckCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	FGameplayTagContainer* OptionalRelevantTags) const
{
	if (const FGameplayTagContainer* CooldownTags = GetCooldownTags())
	{
		if (CooldownTags->Num() > 0)
		{
			const UAbilitySystemComponent* const AbilitySystemComponent = ActorInfo->AbilitySystemComponent.Get();
			check(AbilitySystemComponent != nullptr);
			if (AbilitySystemComponent->HasAnyMatchingGameplayTags(*CooldownTags))
			{
				const FGameplayTag& CooldownTag = UAbilitySystemGlobals::Get().ActivateFailCooldownTag;

				if (OptionalRelevantTags && CooldownTag.IsValid())
				{
					OptionalRelevantTags->AddTag(CooldownTag);
				}
				
				if (const AMCharacter* Character = Cast<AMCharacter>(ActorInfo->AvatarActor.Get()))
				{
					Character->OnAbilityFailed.Broadcast(EActivateFailCode::Cooldown);
				}
				
				return false;
			}
		}
	}
	
	return true;
}
