// Fill out your copyright notice in the Description page of Project Settings.


#include "GameSystem/C4PlayerState.h"
#include "Net/UnrealNetwork.h"

void AC4PlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, bSecretReady);

//	DOREPLIFETIME(ThisClass, PlayerNameString);
//  DOREPLIFETIME(ThisClass, CurrentGuessCount);
//	DOREPLIFETIME(ThisClass, MaxGuessCount); 
}
void AC4PlayerState::SetSecretReady(bool bInReady)
{
	if (!HasAuthority() || bSecretReady == bInReady) return;
	bSecretReady = bInReady;
	OnRepSecretReady();
}
void AC4PlayerState::OnRepSecretReady()
{
	OnSecretReadyChanged.Broadcast(bSecretReady);
}
