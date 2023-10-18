// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "Characters/MCharacter.h"
#include "MAbilitySystemComponent.generated.h"

class AMCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGEAppliedDelegate, const FGameplayTag&, Tag, const float, TimeRemaining);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGERemovedDelegate, const FGameplayTag&, Tag);

/**
 * 
 */
UCLASS()
class DEMO_API UMAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:

	virtual void InitializeComponent() override;

	UPROPERTY(BlueprintAssignable, Category = "ProjectM")
	FOnGEAppliedDelegate OnBufferAppliedCallback;

	UPROPERTY(BlueprintAssignable, Category = "ProjectM")
	FOnGERemovedDelegate OnBufferRemovedCallback;
	
	// 受到近战攻击时触发的效果
	
	// 受到近战攻击时给对方施加效果

	// 受到法术伤害时给对方施加效果

	// 近战攻击敌人时触发的效果

	// 攻击敌人时给对方施加效果

	// 施放法术时触发的效果

	const AMCharacter* GetOwnerCharacter() const { return Cast<AMCharacter>(GetOwnerActor()); }

	/**
	 * 主动键入触发的技能，这些技能往往有着如下特点，暂时只能手动实现
	 * 1.键入触发，但不知道何时停止，比如移动，需要侦听键位回调后手动取消
	 * 2.结束时机由其它模块来决定，比如跳跃，需要依赖移动组件的回调
	 */
	
	void Move();
	void MoveEnd();

	void Jump();
	void JumpEnd();

protected:

	void OnBufferApplied(UAbilitySystemComponent* ASC, const FGameplayEffectSpec& Spec, FActiveGameplayEffectHandle Handle) const;

	void OnBufferRemoved(const FActiveGameplayEffect& Effect) const;
};
