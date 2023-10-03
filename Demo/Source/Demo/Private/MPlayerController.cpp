// Fill out your copyright notice in the Description page of Project Settings.


#include "MPlayerController.h"

#include "Demo.h"
#include "DemoGameMode.h"
#include "MGameInstance.h"
#include "MPlayerState.h"
#include "Characters/MCharacter.h"
#include "Developer/MSaveGame.h"
#include "Net/UnrealNetwork.h"

AMPlayerController::AMPlayerController(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
}

bool AMPlayerController::IsOnline() const
{
	const AMPlayerState* PS = GetMPlayerState();
	if (PS && PS->IsOnline())
	{
		return true;
	}

	return false;
}

AMPlayerState* AMPlayerController::GetMPlayerState() const
{
 	return Cast<AMPlayerState>(PlayerState);
}

FString AMPlayerController::K2_GetUserID() const
{
	if (const AMPlayerState* PS = GetMPlayerState())
	{
		return PS->UserID;
	}

	return TEXT("");
}

void AMPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMPlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	
}

void AMPlayerController::K2_Login()
{
	Login();
}

void AMPlayerController::K2_Spawn()
{
	//SpawnActor
}

bool AMPlayerController::K2_CreateRole(const FCreateRoleParams& InParam)
{
	UMGameInstance* GameInstance = Cast<UMGameInstance>(GetGameInstance());
	if (GameInstance && GameInstance->SaveGame)
	{
		UMSaveGame* SaveGame = GameInstance->SaveGame;
		if (SaveGame->CreateRole(GameInstance->UserID, InParam))
		{
			const FRoleData* Data = SaveGame->GetRoleDataRef(GameInstance->UserID, InParam.RoleName);
			
			GameInstance->SelectedRoleData = *Data;
			SaveGame->LastPlayRole = InParam.RoleName;

			return true;
		}
	}

	return false;
}

void AMPlayerController::K2_ChooseRole(const FString& InName)
{
	UMGameInstance* GameInstance = Cast<UMGameInstance>(GetGameInstance());
	if (!GameInstance)
		return;
	
	UMSaveGame* SaveGame = GameInstance->SaveGame;

	// 如果名字没输入就默认上次游玩
	if (InName.IsEmpty())
	{
		if (const FRoleData* Data = SaveGame->GetRoleDataRef(K2_GetUserID(), SaveGame->LastPlayRole))
		{
			GameInstance->SelectedRoleData = *Data;
			SaveGame->LastPlayRole = Data->RoleName;
		}
		
		return;
	}
	
	if (const FRoleData* Data = SaveGame->GetRoleDataRef(K2_GetUserID(), InName))
	{
		GameInstance->SelectedRoleData = *Data;
		SaveGame->LastPlayRole = InName;
	}
}

void AMPlayerController::Login()
{
	if (const UMGameInstance* GameInstance = Cast<UMGameInstance>(GetGameInstance()))
	{
		LoginReq(GameInstance->UserID, GameInstance->UserName, GameInstance->SelectedRoleData);
	}
}

void AMPlayerController::LoginReq_Implementation(const FString& UserID, const FString& UserName, const FRoleData& RoleData)
{
	AMPlayerState* PS = GetMPlayerState();
	
	// 玩家在线
	if (PS->IsOnline())
	{
		LoginAck(ELoginCode::DuplicateLogin);
		return;
	}

	PS->UserID = UserID;
	PS->UserName = UserName;
	PS->SetRoleData(RoleData);

	LoginAck(ELoginCode::Ok);

	UE_LOG(LogProjectM, Log, TEXT("Server: User: %s enter the game"), *UserName);
}

void AMPlayerController::LoginAck_Implementation(const ELoginCode Code)
{
	const UMGameInstance* GameInstance = Cast<UMGameInstance>(GetGameInstance());
	AMPlayerState* PS = GetMPlayerState();
	if (GameInstance && PS)
	{
		PS->SetRoleData(GameInstance->SelectedRoleData);
	}
	
	OnFinishedLogin.Broadcast(Code);
}
