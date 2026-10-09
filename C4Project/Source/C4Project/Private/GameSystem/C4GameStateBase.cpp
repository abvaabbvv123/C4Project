// Fill out your copyright notice in the Description page of Project Settings.

//onrep~ <- is for listen server host

#include "GameSystem/C4GameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "GameSystem//C4PlayerController.h"
#include "GameFramework/PlayerState.h"

//void AC4GameStateBase::MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString)
//{
//	if (HasAuthority() == false)
//	{
//		APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
//		if (IsValid(PC) == true)
//		{
//			AC4PlayerController* C4PC = Cast<AC4PlayerController>(PC);
//			if (IsValid(C4PC) == true)
//			{
//				FString NotificationString = InNameString + TEXT(" has joined the game.");
//				C4PC->PrintChatMessageString(NotificationString);
//			}
//		}
//	}
//}
void AC4GameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, GamePhase);
	DOREPLIFETIME(ThisClass, CurrentTurnPlayer);
	DOREPLIFETIME(ThisClass, bLastChance);
	DOREPLIFETIME(ThisClass, GuessLog);

}
void AC4GameStateBase::SetCurrentTurnPlayer(APlayerState* InPlayerState)
{
	if (!HasAuthority() || CurrentTurnPlayer == InPlayerState) return;
	CurrentTurnPlayer = InPlayerState;
	OnRepCurrentTurnPlayer();                    
}
void AC4GameStateBase::OnRepCurrentTurnPlayer()
{
	OnTurnChanged.Broadcast(CurrentTurnPlayer);
}
void AC4GameStateBase::SetGamePhase(EC4GamePhase NewPhase)
{
	if (!HasAuthority() || GamePhase == NewPhase) return;
	GamePhase = NewPhase;
	OnRepGamePhase(); // for listen server, call manual for listen server hose
}
void AC4GameStateBase::OnRepGamePhase()
{
	OnPhaseChanged.Broadcast(GamePhase);
}
bool AC4GameStateBase::IsPlayersTurn(const APlayerState* InPlayerState) const
{
	return IsValid(InPlayerState) && CurrentTurnPlayer == InPlayerState;
}
void AC4GameStateBase::SetLastChance(bool bInLastChance)
{
	if (!HasAuthority() || bLastChance == bInLastChance) return;
	bLastChance = bInLastChance;
	OnRepLastChance();
}
void AC4GameStateBase::OnRepLastChance()
{
	OnLastChanceChanged.Broadcast(bLastChance);
}
void AC4GameStateBase::AddGuessRecord(const FC4GuessRecord& InRecord)
{
	if (!HasAuthority()) return;
	GuessLog.Add(InRecord);
	OnRepGuessLog();
}

void AC4GameStateBase::ClearGuessLog()
{
	if (!HasAuthority() || GuessLog.IsEmpty()) return;
	GuessLog.Reset();
	OnRepGuessLog();
}

void AC4GameStateBase::OnRepGuessLog()
{
	OnGuessLogChanged.Broadcast();
}