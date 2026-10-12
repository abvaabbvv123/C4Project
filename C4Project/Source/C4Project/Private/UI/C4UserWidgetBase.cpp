// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/C4UserWidgetBase.h"
#include "GameSystem/C4PlayerController.h"
#include "GameSystem/C4GameStateBase.h"
#include "GameSystem/C4PlayerState.h"
#include "TimerManager.h"


void UC4UserWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();
	TryBind();
}
// after unbind PC&GS, destroy Widget -> stop timerhandle + unbind + reset weakobjectptr
void UC4UserWidgetBase::NativeDestruct()
{
	if (UWorld* World = GetWorld()) World->GetTimerManager().ClearTimer(BindRetryHandle);
	if (WatchesGameFlow()) UnbindGameFlow();
	UnbindAll();
	BoundPC.Reset(); BoundGS.Reset(); BoundPS.Reset();
	bAllBound = false;
	Super::NativeDestruct();
}
// Late binding, Try until other all stuff bind
void UC4UserWidgetBase::TryBind()
{
	UWorld* World = GetWorld();
	if (!World) return;

	if (!BoundPC.IsValid())
	{
		if (AC4PlayerController* PC = Cast<AC4PlayerController>(GetOwningPlayer()))
		{
			BoundPC = PC;
			BindPlayerController(PC);
		}
	}
	if (NeedsGS() && !BoundGS.IsValid())
		{
		if (AC4GameStateBase* GS = World->GetGameState<AC4GameStateBase>())
		{
			BoundGS = GS;
			BindGameState(GS);
		}
	}
	if (NeedsPS() && !BoundPS.IsValid())
	{
		if (AC4PlayerState* PS = GetOwningPlayerState<AC4PlayerState>())
		{
			BoundPS = PS;
			BindPlayerState(PS);
		}
	}
	//check is it all binded
	const bool bReady = BoundPC.IsValid() && (!NeedsGS() || BoundGS.IsValid()) && (!NeedsPS() || BoundPS.IsValid());
	FTimerManager& TimerManager = World->GetTimerManager();
	if (bReady)
	{
		//after all binded -> clear timer
		TimerManager.ClearTimer(BindRetryHandle);
		if (WatchesGameFlow()) BindGameFlow();
		bAllBound = true;
		OnAllBound();
		if (WatchesGameFlow()) OnGameFlowChanged();
	}
	else if (!TimerManager.IsTimerActive(BindRetryHandle))
	{
		//if something didnt bind -> try again
		TimerManager.SetTimer(BindRetryHandle, this, &ThisClass::TryBind, BindRetryInterval, true);
	}
}
// bing all events for game flow
// (PC - my secret number  GS: turn)
void UC4UserWidgetBase::BindGameFlow()
{
	BoundPC->OnOwnSecretChanged.AddUniqueDynamic(this, &ThisClass::HandleFlowOwnSecret);
	BoundGS->OnPhaseChanged.AddUniqueDynamic(this, &ThisClass::HandleFlowPhase);
	BoundGS->OnTurnChanged.AddUniqueDynamic(this, &ThisClass::HandleFlowTurn);
	BoundGS->OnLastChanceChanged.AddUniqueDynamic(this, &ThisClass::HandleFlowLastChance);
}
// unbind
void UC4UserWidgetBase::UnbindGameFlow()
{
	if (BoundPC.IsValid()) BoundPC->OnOwnSecretChanged.RemoveDynamic(this, &ThisClass::HandleFlowOwnSecret);
	if (BoundGS.IsValid())
	{
		BoundGS->OnPhaseChanged.RemoveDynamic(this, &ThisClass::HandleFlowPhase);
		BoundGS->OnTurnChanged.RemoveDynamic(this, &ThisClass::HandleFlowTurn);
		BoundGS->OnLastChanceChanged.RemoveDynamic(this, &ThisClass::HandleFlowLastChance);
	}
}
EC4GamePhase UC4UserWidgetBase::GetCurrentPhase() const
{
	return BoundGS.IsValid() ? BoundGS->GetGamePhase() : EC4GamePhase::WaitingPlayer;
}
// Server check who's turn -> dupe Gamestate to each client
bool UC4UserWidgetBase::IsMyTurn() const
{
	return GetCurrentPhase() == EC4GamePhase::Playing
		&& BoundPS.IsValid()
		&& BoundGS->IsPlayersTurn(BoundPS.Get());
}
