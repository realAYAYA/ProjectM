// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "AbilitySystemInterface.h"
#include "MGameTypes.h"
#include "Abilities/GameplayAbility.h"
#include "MCharacter.generated.h"

class AMPlayerController;
class AMPlayerState;
class USpringArmComponent;
class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
class USoundBase;

class UMAbilitySystemComponent;
class UMAttributeSet;

class UGameplayAbility;
class UGameplayEffect;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoleNameChanged, FName, NewName);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoleCampChanged, ECamp, NewCamp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoleRaceChanged, ERace, NewRace);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrentChanged, AMCharacter*, Target);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAbilityFailed, EActivateFailCode, FailCode);

UCLASS()
class DEMO_API AMCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
	/** Third person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* ThirdPersonCameraComponent;

	/** Third person camera arm */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArmComponent;

	/**
	 * Default
	 */
public:
	
	// Sets default values for this character's properties
	AMCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	virtual void PossessedBy(AController* NewController) override;
	
	virtual void OnRep_PlayerState() override;

	virtual void PostInitializeComponents() override;

	UCameraComponent* GetThirdPersonCameraComponent() const { return ThirdPersonCameraComponent; }
	
protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/**
	 * Network
	*/
public:
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_RoleName, Category = "ProjectM")
	FName RoleName;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_RoleCamp, Category = "ProjectM")
	ECamp Camp;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_RoleRace, Category = "ProjectM")
	ERace Race;

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "ProjectM")
	ERoleClass RoleClass;

	/** 当前锁定目标*/
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CurrentTarget, Category = "ProjectM")
	AMCharacter* CurrentTarget;

	UFUNCTION(BlueprintCallable, Server, Reliable, Category = "ProjectM")
	void SetCurrentTarget(AMCharacter* NewTarget);
	
	UPROPERTY(BlueprintAssignable, Category = "ProjectM")
	FOnRoleNameChanged OnRoleNameChanged;
	
	UPROPERTY(BlueprintAssignable, Category = "ProjectM")
	FOnRoleCampChanged OnRoleCampChanged;

	UPROPERTY(BlueprintAssignable, Category = "ProjectM")
	FOnRoleRaceChanged OnRoleRaceChanged;

	UPROPERTY(BlueprintAssignable, Category = "ProjectM")
	FOnCurrentChanged OnCurrentChanged;

	UFUNCTION()
	void SetRoleName(const FString& InName);

	UFUNCTION()
	void SetRoleCamp(const ECamp& InCamp);
	
protected:
	
	UFUNCTION()
	void OnRep_RoleName() const;

	UFUNCTION()
	void OnRep_RoleCamp() const;

	UFUNCTION()
	void OnRep_RoleRace() const;

	UFUNCTION()
	void OnRep_CurrentTarget() const;

private:
	
	/**
	 * GameAbilitySystem
	 */
public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UMAbilitySystemComponent* AbilitySystemComponent;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	bool ApplyGameplayEffectToSelf(
		const TSubclassOf<UGameplayEffect> Effect,
		const FGameplayEffectContextHandle& InEffectContext) const;

	UFUNCTION(BlueprintCallable, Category = "ProjectM")
	const UMAttributeSet* GetAttributeSet() const;

	UFUNCTION(BlueprintCallable, Category = "ProjectM")
	const UMAbilitySystemComponent* GetASC() const { return AbilitySystemComponent; }

	UPROPERTY(BlueprintAssignable, Category = "ProjectM")
	FOnAbilityFailed OnAbilityFailed;

	// 初始化技能系统，职业|天赋|种族|出身|
	UFUNCTION()
	void GiveAbilities();
	
protected:

	UPROPERTY(Replicated)
	FCharacterData CharacterData;

	UPROPERTY(EditDefaultsOnly)
	class UMCharacterDataAsset* CharacterDataAsset;
	
	void ApplyStartupEffects();

	//FDelegateHandle MaxMovementSpeedChangedDelegatedHandle;
	void OnMaxMovementSpeedChanged(const FOnAttributeChangeData& Data);

private:

	UPROPERTY(Transient)
	UMAttributeSet* AttributeSet;
	
	/**
	 * Input & Control
	 */
public:
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;
	
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	/** Sprint Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* SprintAction;

	/** Sprint Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* InputAction1;

	/** Sprint Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* InputAction2;

	/** Sprint Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* InputAction3;

	/** Sprint Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* InputAction4;

protected:

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	/** Called for movement input */
	void Move(const FInputActionValue& Value);
	void MoveEnd(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	/** Called for jump input */
	void TryJump(const FInputActionValue& Value);

	virtual void Landed(const FHitResult& Hit) override;
	
	/** Skill */
	void TryActiveAbility(const FInputActionValue& Value);

	UPROPERTY()
	TMap<int32, FGameplayTag> InputSkillMap;

};
