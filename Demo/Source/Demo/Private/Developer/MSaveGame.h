// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"

#include "MGameTypes.h"

#include "MSaveGame.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class DEMO_API UMSaveGame : public USaveGame
{
	GENERATED_BODY()

public:

	/**
	 *	@see UGameplayStatics::CreateSaveGameObject
	 *	@see UGameplayStatics::SaveGameToSlot
	 *	@see UGameplayStatics::DoesSaveGameExist
	 *	@see UGameplayStatics::LoadGameFromSlot
	 *	@see UGameplayStatics::DeleteGameInSlot
	 */
	
	UFUNCTION(BlueprintCallable, Category = "ProjectM")
	int32 CreateUser(const FString& InID, const FString& InName);

	UFUNCTION(BlueprintCallable, Category = "ProjectM")
	void RemoveUser(const FString& InID);

	UFUNCTION(BlueprintCallable, Category = "ProjectM")
	bool FindUserData(const FString& InID, FMUserData& Result);
	
	FMUserData* GetUserDataRef(const FString& InID);

	UFUNCTION(BlueprintCallable, Category = "ProjectM")
	bool FindRoleData(const FString& InID, const FString& InName, FRoleData& Result);

	FRoleData* GetRoleDataRef(const FString& InID, const FString& InName);

	UFUNCTION(BlueprintCallable, Category = "ProjectM")
	int32 GetRoleNum(const FString& InID);

	UFUNCTION(BlueprintCallable, Category = "ProjectM")
	bool UpdateRoleName(const FString& InID, const FString& OldName, const FString& NewName);

	UFUNCTION(BlueprintCallable, Category = "ProjectM")
	bool CreateRole(const FString& InID, const FCreateRoleParams& InParams);
	
	UFUNCTION(BlueprintCallable, Category = "ProjectM")
	bool UpdateRole(const FString& InID, const FString& InName, const FRoleData& InData);

	UFUNCTION(BlueprintCallable, Category = "ProjectM")
	void RemoveRole(const FString& InID, const FString& InName);

	UFUNCTION(BlueprintCallable, Category = "ProjectM")
	TArray<FRoleData> GetAllRole(const FString& InID);

	// 记录上次游玩角色的名称
	UPROPERTY()
	FString LastPlayRole;

protected:

	virtual void PostLoad() override;
	
private:
	
	int32 FindUserIndex(const FString& InID);
	
	int32 FindRoleIndex(const FString& InID, const FString& InName);
	int32 FindRoleIndex(const int32 Index, const FString& InName);
	
	UPROPERTY()
	TArray<FMUserData> UserData;// SteamID, SteamName
	
	// Todo 游戏进度
	
	// Todo 成就，收集
};

inline TArray<FRoleData> UMSaveGame::GetAllRole(const FString& InID)
{
	if (const FMUserData* Data = GetUserDataRef(InID))
		return Data->RoleData;

	return TArray<FRoleData>();
}
