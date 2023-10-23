// Fill out your copyright notice in the Description page of Project Settings.

#include "GameplayAbilitySystem/Abilities/Base/GA_AOE.h"

#include "AbilitySystemGlobals.h"
#include "AbilitySystemLog.h"
#include "MBlueprintLibrary.h"
#include "Characters/MCharacter.h"
#include "GameplayAbilitySystem/AttributeSets/MAttributeSet.h"
#include "GameplayAbilitySystem/GameplayEffects/MGameplayEffect.h"

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

bool UGA_AOE::CanActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayTagContainer* SourceTags,
	const FGameplayTagContainer* TargetTags,
	FGameplayTagContainer* OptionalRelevantTags) const
{
	if (CanActivateCondition(*ActorInfo) != EActivateFailCode::Success)
		return false;
	
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags);
}

void UGA_AOE::ActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* OwnerInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, OwnerInfo, ActivationInfo, TriggerEventData);
	
	if (EffectsToFriendOnEnd.Num() <= 0 && EffectsToHostileOnEnd.Num() <= 0)
		return;
	
	// Todo 检测AOE目标, 检测敌友，施加效果
	TArray<AMCharacter*> Friends, Enemies;
	
	UAbilitySystemComponent* ASC = OwnerInfo->AbilitySystemComponent.Get();

	const FGameplayEffectContextHandle EffectContext = OwnerInfo->AbilitySystemComponent->MakeEffectContext();

	// 对目标施加效果
	for (const AMCharacter* Target : Friends)
	{
		UAbilitySystemComponent* TargetComponent = Target->GetAbilitySystemComponent();
		for (const TSubclassOf<UMGameplayEffect>& Effect : EffectsToFriendOnStart)
		{
			if (!Effect.Get())
				continue;

			const FGameplayEffectContextHandle TargetEffectContext = ASC->MakeEffectContext();
			const FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(Effect, Level, TargetEffectContext);
			if (SpecHandle.IsValid())
			{
				const FActiveGameplayEffectHandle ActiveGEHandle = ASC->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), TargetComponent);
				if (!ActiveGEHandle.WasSuccessfullyApplied())
					ABILITY_LOG(Log, TEXT("Ability %s faild to apply Effect to Target %s"), *GetName(), *GetNameSafe(Effect));
			}
		}
	}

	// 对目标施加效果
	for (const AMCharacter* Target : Enemies)
	{
		UAbilitySystemComponent* TargetComponent = Target->GetAbilitySystemComponent();
		for (const TSubclassOf<UMGameplayEffect>& Effect : EffectsToHostileOnStart)
		{
			if (!Effect.Get())
				continue;

			const FGameplayEffectContextHandle TargetEffectContext = ASC->MakeEffectContext();
			const FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(Effect, Level, TargetEffectContext);
			if (SpecHandle.IsValid())
			{
				const FActiveGameplayEffectHandle ActiveGEHandle = ASC->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), TargetComponent);
				if (!ActiveGEHandle.WasSuccessfullyApplied())
					ABILITY_LOG(Log, TEXT("Ability %s faild to apply Effect to Target %s"), *GetName(), *GetNameSafe(Effect));
			}
		}
	}
}

void UGA_AOE::EndAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateEndAbility,
	bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	
	if (!IsInstantiated())
		return;

	if (EffectsToFriendOnEnd.Num() <= 0 && EffectsToHostileOnEnd.Num() <= 0)
		return;
	
	UAbilitySystemComponent* ASC = ActorInfo->AbilitySystemComponent.Get();

	TArray<AMCharacter*> Friends, Enemies;
	// Todo 
	
	// 对目标施加效果
	for (const AMCharacter* Target : Friends)
	{
		UAbilitySystemComponent* TargetComponent = Target->GetAbilitySystemComponent();
		for (const TSubclassOf<UMGameplayEffect>& Effect : EffectsToFriendOnEnd)
		{
			if (!Effect.Get())
				continue;

			const FGameplayEffectContextHandle TargetEffectContext = ASC->MakeEffectContext();
			const FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(Effect, Level, TargetEffectContext);
			if (SpecHandle.IsValid())
			{
				const FActiveGameplayEffectHandle ActiveGEHandle = ASC->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), TargetComponent);
				if (!ActiveGEHandle.WasSuccessfullyApplied())
					ABILITY_LOG(Log, TEXT("Ability %s faild to apply Effect to Target %s"), *GetName(), *GetNameSafe(Effect));
			}
		}
	}

	// 对目标施加效果
	for (const AMCharacter* Target : Enemies)
	{
		UAbilitySystemComponent* TargetComponent = Target->GetAbilitySystemComponent();
		for (const TSubclassOf<UMGameplayEffect>& Effect : EffectsToHostileOnEnd)
		{
			if (!Effect.Get())
				continue;

			const FGameplayEffectContextHandle TargetEffectContext = ASC->MakeEffectContext();
			const FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(Effect, Level, TargetEffectContext);
			if (SpecHandle.IsValid())
			{
				const FActiveGameplayEffectHandle ActiveGEHandle = ASC->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), TargetComponent);
				if (!ActiveGEHandle.WasSuccessfullyApplied())
					ABILITY_LOG(Log, TEXT("Ability %s faild to apply Effect to Target %s"), *GetName(), *GetNameSafe(Effect));
			}
		}
	}
}
