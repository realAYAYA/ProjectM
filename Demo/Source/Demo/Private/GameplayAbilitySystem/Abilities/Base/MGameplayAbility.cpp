// Fill out your copyright notice in the Description page of Project Settings.


#include "MGameplayAbility.h"

#include "AbilitySystemGlobals.h"
#include "AbilitySystemLog.h"
#include "MBlueprintLibrary.h"

#include "Characters/MCharacter.h"
#include "GameplayAbilitySystem/AttributeSets/MAttributeSet.h"
#include "GameplayAbilitySystem/Components/MAbilitySystemComponent.h"
#include "GameplayAbilitySystem/GameplayEffects/MGameplayEffect.h"
#include "Kismet/KismetMathLibrary.h"

bool UMGameplayAbility::CanActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayTagContainer* SourceTags,
	const FGameplayTagContainer* TargetTags,
	FGameplayTagContainer* OptionalRelevantTags) const
{
	const AMCharacter* Character = Cast<AMCharacter>(ActorInfo->AvatarActor.Get());
	if (!Character)
		return false;
	
	if (!Cast<UMAbilitySystemComponent>(Character->GetAbilitySystemComponent()))
	{
		Character->OnAbilityFailed.Broadcast(EActivateFailCode::BadMemory);
		return false;
	}

	if (CanActivateCondition(*ActorInfo) != EActivateFailCode::Success)
		return false;
	
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags);
}

void UMGameplayAbility::ActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* OwnerInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	// Note: 确保在进入该函数之前，一切指针变量所指向的内存是安全的
	
	// 根据目标位置，计算冲锋的目的地
	AMCharacter* Caster = Cast<AMCharacter>(OwnerInfo->AvatarActor);
	
	if (TargetType == ETargetType::SelfOnly)
	{
		Target = Caster;
	}
	else if (TargetType == ETargetType::SelfOrFriendly && !Caster->CurrentTarget)
	{
		Target = Caster;
	}
	else
	{
		Target = Cast<AMCharacter>(OwnerInfo->AvatarActor)->CurrentTarget;
	}
	
	Super::ActivateAbility(Handle, OwnerInfo, ActivationInfo, TriggerEventData);
	
	UAbilitySystemComponent* AbilitySystemComponent = OwnerInfo->AbilitySystemComponent.Get();

	const FGameplayEffectContextHandle EffectContext = OwnerInfo->AbilitySystemComponent->MakeEffectContext();

	// 处理技能开始时施加效果
	for (TSubclassOf<UGameplayEffect>& GameplayEffect : OngoingEffectsToJustApplyOnStart)
	{
		if (!GameplayEffect.Get())
			continue;
		
		const FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, 1, EffectContext);
		if (!SpecHandle.IsValid())
			continue;

		FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		if (!ActiveGEHandle.WasSuccessfullyApplied())
			ABILITY_LOG(Log, TEXT("Ability %s faild to apply Startup Effect %s"), *GetName(), *GetNameSafe(GameplayEffect));
	}

	if (!this->IsInstantiated())
		return;

	// 处理技能结束时施加效果
	for (TSubclassOf<UGameplayEffect>& GameplayEffect : OngoingEffectsToRemoveOnEnd)
	{
		if (!GameplayEffect.Get())
			continue;

		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, 1, EffectContext);
		if (!SpecHandle.IsValid())
			continue;
		
		FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		if (ActiveGEHandle.WasSuccessfullyApplied())
			RemoveOnEndEffectHandles.Add(ActiveGEHandle);
		else
			ABILITY_LOG(Log, TEXT("Ability %s faild to apply startup effect %s"), *GetName(), *GetNameSafe(GameplayEffect));
	}
	
	// 对目标施加效果
	UAbilitySystemComponent* TargetComponent = Target->GetAbilitySystemComponent();
	for (const TSubclassOf<UMGameplayEffect>& Effect : EffectsToTargetOnStart)
	{
		if (!Effect.Get())
			continue;

		const FGameplayEffectContextHandle TargetEffectContext = TargetComponent->MakeEffectContext();
		const FGameplayEffectSpecHandle SpecHandle = TargetComponent->MakeOutgoingSpec(Effect, 1, TargetEffectContext);
		if (SpecHandle.IsValid())
		{
			const FActiveGameplayEffectHandle ActiveGEHandle = TargetComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
			if (!ActiveGEHandle.WasSuccessfullyApplied())
				ABILITY_LOG(Log, TEXT("Ability %s faild to apply Effect to Target %s"), *GetName(), *GetNameSafe(Effect));
		}
	}
}

void UMGameplayAbility::EndAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateEndAbility,
	bool bWasCancelled)
{
	if (IsInstantiated())
	{
		for (FActiveGameplayEffectHandle& ActiveGEHandle : RemoveOnEndEffectHandles)
		{
			if (ActiveGEHandle.IsValid())
				ActorInfo->AbilitySystemComponent->RemoveActiveGameplayEffect(ActiveGEHandle);
		}

		RemoveOnEndEffectHandles.Empty();
	}

	// 对目标施加效果
	UAbilitySystemComponent* TargetComponent = Target->GetAbilitySystemComponent();
	for (const TSubclassOf<UMGameplayEffect>& Effect : EffectsToTargetOnEnd)
	{
		if (!Effect.Get())
			continue;

		const FGameplayEffectContextHandle TargetEffectContext = TargetComponent->MakeEffectContext();
		const FGameplayEffectSpecHandle SpecHandle = TargetComponent->MakeOutgoingSpec(Effect, 1, TargetEffectContext);
		if (SpecHandle.IsValid())
		{
			const FActiveGameplayEffectHandle ActiveGEHandle = TargetComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
			if (!ActiveGEHandle.WasSuccessfullyApplied())
				ABILITY_LOG(Log, TEXT("Ability %s faild to apply Effect to Target %s"), *GetName(), *GetNameSafe(Effect));
		}
	}
		
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

bool UMGameplayAbility::CheckCooldown(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, FGameplayTagContainer* OptionalRelevantTags) const
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

EActivateFailCode UMGameplayAbility::CanActivateCondition(const FGameplayAbilityActorInfo& ActorInfo) const
{
	const AMCharacter* Caster = Cast<AMCharacter>(ActorInfo.AvatarActor.Get());
	const AMCharacter* CurrentTarget = Caster->CurrentTarget;

	// 根据目标类型检查是否可以释放技能
	switch (TargetType)
	{
	default:break;
	case ETargetType::FriendlyOnly:
		{
			// 目标如果不存在或不是友军
			if (!CurrentTarget || Caster == CurrentTarget || !UMBlueprintLibrary::IsFriendly(Caster, CurrentTarget))
				return EActivateFailCode::InValidTarget;
		}
	case ETargetType::SelfOrFriendly:
		{
			// 如果目标是敌对的则选择自己
			if (!UMBlueprintLibrary::IsFriendly(Caster, CurrentTarget))
				return EActivateFailCode::InValidTarget;
		}
	case ETargetType::HostileOnly:
		{
			if (UMBlueprintLibrary::IsFriendly(Caster, CurrentTarget))
				return EActivateFailCode::InValidTarget;
			
			CurrentTarget = Caster->CurrentTarget;
		}
	}
	
	if (!CurrentTarget || !CurrentTarget->GetAbilitySystemComponent())
	{
		return EActivateFailCode::NoTarget;
	}
	
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
	
	// Out of range
	const float Distance = (Caster->GetActorLocation() - CurrentTarget->GetActorLocation()).Length();
	if (Distance > Range)
	{
		return EActivateFailCode::OutOfRange;
	}

	// 目标过近
	if (Distance < MinRange)
	{
		return EActivateFailCode::TooClose;
	}
	
	// 如果是目标敌对，需要面向对方，友方增益buff则不需要
	if (TargetType == ETargetType::HostileOnly)
	{
		const FVector Dir = UKismetMathLibrary::Normal(CurrentTarget->GetActorLocation() - Caster->GetActorLocation(), 0.0001);
		if (UKismetMathLibrary::Dot_VectorVector(Dir, Caster->GetActorForwardVector()) < 0.5f)
		{
			return EActivateFailCode::NoToward;
		}
	}
	
	// Todo 不在视野中
	
	return EActivateFailCode::Success;
}

AMCharacter* UMGameplayAbility::GetMCharacterFromActorInfo() const
{
	return Cast<AMCharacter>(GetAvatarActorFromActorInfo());
}

UMAbilitySystemComponent* UMGameplayAbility::GetMAbilitySystemComponent() const
{
	if (const AMCharacter* Character = Cast<AMCharacter>(GetAvatarActorFromActorInfo()))
		return Cast<UMAbilitySystemComponent>(Character->GetAbilitySystemComponent());

	return nullptr;
}
