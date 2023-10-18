// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/Components/MAbilitySystemComponent.h"

void UMAbilitySystemComponent::InitializeComponent()
{
	Super::InitializeComponent();

	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UMAbilitySystemComponent::OnBufferApplied);
	ActiveGameplayEffects.OnActiveGameplayEffectRemovedDelegate.AddUObject(this, &UMAbilitySystemComponent::OnBufferRemoved);
}

void UMAbilitySystemComponent::Move()
{
	FGameplayTagContainer Container;
	Container.AddTag(FGameplayTag::RequestGameplayTag(FName("GAS.Ability.Movement.Move")));
	
	TryActivateAbilitiesByTag(Container, true);
}

void UMAbilitySystemComponent::MoveEnd()
{
	FGameplayTagContainer Container;
	Container.AddTag(FGameplayTag::RequestGameplayTag(FName("GAS.Ability.Movement.Move")));
	
	CancelAbilities(&Container);
}

void UMAbilitySystemComponent::Jump()
{
	FGameplayTagContainer Container;
	Container.AddTag(FGameplayTag::RequestGameplayTag(FName("GAS.Ability.Movement.Jump")));
	
	TryActivateAbilitiesByTag(Container, true);
}

void UMAbilitySystemComponent::JumpEnd()
{
	FGameplayTagContainer Container;
	Container.AddTag(FGameplayTag::RequestGameplayTag(FName("GAS.Ability.Movement.Jump")));
	
	CancelAbilities(&Container);
}

void UMAbilitySystemComponent::OnBufferApplied(
	UAbilitySystemComponent* ASC,
	const FGameplayEffectSpec& Spec,
	FActiveGameplayEffectHandle Handle) const
{
	OnBufferAppliedCallback.Broadcast(Spec.Def->GetAssetTags().First(), Spec.Duration);
}

void UMAbilitySystemComponent::OnBufferRemoved(const FActiveGameplayEffect& Effect) const
{
	OnBufferRemovedCallback.Broadcast(Effect.Spec.Def->GetAssetTags().First());
}
