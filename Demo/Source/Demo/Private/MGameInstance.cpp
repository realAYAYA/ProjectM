// Fill out your copyright notice in the Description page of Project Settings.


#include "MGameInstance.h"

#include "AbilitySystemGlobals.h"
#include "Demo.h"
#include "Developer/MSaveGame.h"
#include "Kismet/GameplayStatics.h"

#include "MGameTables/MGameTables.h"

void UMGameInstance::Init()
{
	Super::Init();

	UAbilitySystemGlobals::Get().InitGlobalData();

	GetMGameTables();
	
}

void UMGameInstance::BeginDestroy()
{
	if (SaveGame)
	{
		if (!UGameplayStatics::SaveGameToSlot(SaveGame, UserID, 0))
		{
			UE_LOG(LogProjectM, Error, TEXT("SaveGame Failed."));
		}
	}
	
	Super::BeginDestroy();
}

UMGameInstance* UMGameInstance::GetMGameInstance(const UWorld* World)
{
	return World ? Cast<UMGameInstance>(World->GetGameInstance()) : nullptr;
}

void UMGameInstance::SetLoginInfo(const FString& InUserID, const FString& InUserName)
{
	// Todo 从Steam获取信息
	UserID = InUserID;
	UserName = InUserName;

	if (!UGameplayStatics::DoesSaveGameExist(UserID, 0))
	{
		SaveGame = NewObject<UMSaveGame>(this);
	}
	else
	{
		SaveGame = Cast<UMSaveGame>(UGameplayStatics::LoadGameFromSlot(UserID, 0));
		if (!SaveGame)
			SaveGame = NewObject<UMSaveGame>(this);
	}

	if (const FRoleData* Data = SaveGame->GetRoleDataRef(UserID, SaveGame->LastPlayRole))
	{
		SelectedRoleData = *Data;
	}
}

UMGameTables* UMGameInstance::GetMGameTables()
{
	if (!GameTables)
	{
		UMGameTables* NewOne = NewObject<UMGameTables>();
		NewOne->AddToRoot();
		NewOne->Init();
		GameTables = NewOne;
	}
	
	return GameTables;
}
