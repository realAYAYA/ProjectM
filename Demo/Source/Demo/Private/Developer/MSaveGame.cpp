#include "MSaveGame.h"


int32 UMSaveGame::CreateUser(const FString& InID, const FString& InName)
{
	if (INDEX_NONE != FindUserIndex(InID))
		return INDEX_NONE;

	FMUserData Data;
	Data.UserID = InID;
	Data.UserName = InName;
	Data.CreateDate = FDateTime::Now().GetTicks();

	return UserData.Add(Data);
}

void UMSaveGame::RemoveUser(const FString& InID)
{
	const int32 Index = FindUserIndex(InID);
	if (INDEX_NONE != Index)
		UserData.RemoveAt(Index);
}

bool UMSaveGame::FindUserData(const FString& InID, FMUserData& Result)
{
	if (const FMUserData* Data = GetUserDataRef(InID))
		Result = *Data;

	return false;
}

FMUserData* UMSaveGame::GetUserDataRef(const FString& InID)
{
	const int32 Index = FindUserIndex(InID);
	if (INDEX_NONE == Index)
		return nullptr;

	return &UserData[Index];
}

bool UMSaveGame::FindRoleData(const FString& InID, const FString& InName, FRoleData& Result)
{
	if (const FRoleData* Data = GetRoleDataRef(InID, InName))
	{
		Result = *Data;
		return true;
	}
	
	return false;
}

FRoleData* UMSaveGame::GetRoleDataRef(const FString& InID, const FString& InName)
{
	const int32 Index = FindUserIndex(InID);
	if (INDEX_NONE == Index)
		return nullptr;

	const int32 Index1 = FindRoleIndex(Index, InName);
	if (INDEX_NONE == Index1)
		return nullptr;

	return &UserData[Index].RoleData[Index1];
}

int32 UMSaveGame::GetRoleNum(const FString& InID)
{
	const FMUserData* Data =  GetUserDataRef(InID);
	if (!Data)
		return 0;

	return Data->RoleData.Num();
}

bool UMSaveGame::UpdateRoleName(const FString& InID, const FString& OldName, const FString& NewName)
{
	const int32 Index = FindUserIndex(InID);
	if (INDEX_NONE == Index)
		return false;

	const int32 Index1 = FindRoleIndex(Index, OldName);
	if (INDEX_NONE == Index1)
		return false;

	UserData[Index].RoleData[Index1].RoleName = NewName;
	return true;
}

bool UMSaveGame::CreateRole(const FString& InID, const FCreateRoleParams& InParams)
{
	int32 Index = FindUserIndex(InID);
	if (INDEX_NONE == Index)
	{
		Index = CreateUser(InID, TEXT(""));
		if (Index == INDEX_NONE)
			return false;
	}
	
	const int32 Index1 = FindRoleIndex(Index, InParams.RoleName);
	if (INDEX_NONE != Index1)
		return false;

	FRoleData NewRole;
	NewRole.RoleName = InParams.RoleName;
	NewRole.Camp = InParams.Camp;
	NewRole.Race = InParams.Race;
	NewRole.RaceBranch = InParams.RaceBranch;
	NewRole.Gender = InParams.Gender;
	NewRole.Birth = InParams.Birth;
	NewRole.Class = InParams.Class;
	NewRole.Level = 1;
	NewRole.CreateDate = FDateTime::Now().GetTicks();

	UserData[Index].RoleData.Add(NewRole);
	return true;
}

bool UMSaveGame::UpdateRole(const FString& InID, const FString& InName, const FRoleData& InData)
{
	const int32 Index = FindUserIndex(InID);
	if (INDEX_NONE == Index)
		return false;

	const int32 Index1 = FindRoleIndex(Index, InName);
	if (INDEX_NONE == Index1)
		return false;

	UserData[Index].RoleData[Index1] = InData;
	return true;
}

void UMSaveGame::RemoveRole(const FString& InID, const FString& InName)
{
	const int32 Index = FindUserIndex(InID);
	if (INDEX_NONE == Index)
		return;

	const int32 Index1 = FindRoleIndex(Index, InName);
	if (INDEX_NONE == Index1)
		return;

	UserData[Index].RoleData.RemoveAt(Index1);
}

void UMSaveGame::PostLoad()
{
	Super::PostLoad();
	
}

int32 UMSaveGame::FindUserIndex(const FString& InID)
{
	for (int32 i = 0; i < UserData.Num(); i++)
	{
		const FMUserData& Data = UserData[i];
		if (Data.UserID == InID)
		{
			return i;
		}
	}

	return INDEX_NONE;
}

int32 UMSaveGame::FindRoleIndex(const FString& InID, const FString& InName)
{
	const int32 Index = FindUserIndex(InID);
	if (INDEX_NONE == Index)
		return INDEX_NONE;

	for (int32 i = 0; i < UserData.Num(); i++)
	{
		const FRoleData& Data = UserData[Index].RoleData[i];
		if (Data.RoleName == InName)
			return i;
	}

	return INDEX_NONE;
}

int32 UMSaveGame::FindRoleIndex(const int32 Index, const FString& InName)
{
	for (int32 i = 0; i < UserData[Index].RoleData.Num(); i++)
	{
		const FRoleData& Data = UserData[Index].RoleData[i];
		if (Data.RoleName == InName)
			return i;
	}

	return INDEX_NONE;
}
