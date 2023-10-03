// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MGameTypes.h"
#include "Engine/GameInstance.h"
#include "MGameInstance.generated.h"

class AMPlayerState;
class UMGameTables;
class UMSaveGame;

/**
 * 
 */
UCLASS()
class DEMO_API UMGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	/**
	 * 在最终发布版中这些参数会自动填充，早期方便测试进行手动填写
	 * @param InUserID Steam ID
	 * @param InUserName Steam 用户名
	 */
	UFUNCTION(BlueprintCallable, Category = "ProjectM")
	void SetLoginInfo(const FString& InUserID, const FString& InUserName);

	// Steam, Epic, PS4 : ID
	UPROPERTY()
	FString UserID;
	
	// Steam, Epic, PS4 : USerName
	UPROPERTY()
	FString UserName;
	

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ProjectM")
	UMSaveGame* SaveGame;

	UFUNCTION()
	UMGameTables* GetMGameTables();
	
	virtual void Init() override;

	virtual void BeginDestroy() override;

	static UMGameInstance* GetMGameInstance(const UWorld* World);

	UPROPERTY(BlueprintReadOnly, Transient, Category = "ProjectM")
	FRoleData SelectedRoleData;
	
private:
	
	UPROPERTY()
	UMGameTables* GameTables;
};
