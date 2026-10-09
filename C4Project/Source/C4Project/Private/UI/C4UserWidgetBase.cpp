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

void UC4UserWidgetBase::NativeDestruct()
{
	if (UWorld* World = GetWorld()) World->GetTimerManager().ClearTimer(BindRetryHandle);
	if (WatchesGameFlow()) UnbindGameFlow();
	UnbindAll();
	BoundPC.Reset(); BoundGS.Reset(); BoundPS.Reset();
	bAllBound = false;
	Super::NativeDestruct();
}

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
	const bool bReady = BoundPC.IsValid() && (!NeedsGS() || BoundGS.IsValid()) && (!NeedsPS() || BoundPS.IsValid());
	FTimerManager& TimerManager = World->GetTimerManager();
	if (bReady)
	{
		TimerManager.ClearTimer(BindRetryHandle);
		if (WatchesGameFlow()) BindGameFlow();
		bAllBound = true;
		OnAllBound();
		if (WatchesGameFlow()) OnGameFlowChanged();
	}
	else if (!TimerManager.IsTimerActive(BindRetryHandle))
	{
		TimerManager.SetTimer(BindRetryHandle, this, &ThisClass::TryBind, BindRetryInterval, true);
	}
}

void UC4UserWidgetBase::BindGameFlow()
{
	BoundPC->OnOwnSecretChanged.AddUniqueDynamic(this, &ThisClass::HandleFlowOwnSecret);
	BoundGS->OnPhaseChanged.AddUniqueDynamic(this, &ThisClass::HandleFlowPhase);
	BoundGS->OnTurnChanged.AddUniqueDynamic(this, &ThisClass::HandleFlowTurn);
	BoundGS->OnLastChanceChanged.AddUniqueDynamic(this, &ThisClass::HandleFlowLastChance);
}

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

bool UC4UserWidgetBase::IsMyTurn() const
{
	return GetCurrentPhase() == EC4GamePhase::Playing
		&& BoundPS.IsValid()
		&& BoundGS->IsPlayersTurn(BoundPS.Get());
}
