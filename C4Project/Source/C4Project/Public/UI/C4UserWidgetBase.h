// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "C4Type.h"  
#include "Blueprint/UserWidget.h"
#include "C4UserWidgetBase.generated.h"
class AC4PlayerController;
class AC4GameStateBase;
class AC4PlayerState;

/**
 * 
 */
UCLASS(Abstract)
class C4PROJECT_API UC4UserWidgetBase : public UUserWidget
{
	GENERATED_BODY()
protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual bool NeedsGameState() const { return false; }
	virtual bool NeedsPlayerState() const { return false; }
	// call once when it ready, location to delegate
	virtual void BindPlayerController(AC4PlayerController* InPC) {}
	virtual void BindGameState(AC4GameStateBase* InGS) {}
	virtual void BindPlayerState(AC4PlayerState* InPS) {}
	// unbind when widget gone
	virtual void UnbindAll() {}
	// call itself when all ready
	virtual void OnAllBound() {}
	virtual bool WatchesGameFlow() const { return false; }
	virtual void OnGameFlowChanged() {}
	EC4GamePhase GetCurrentPhase() const;
	bool IsMyTurn() const;

	TWeakObjectPtr<AC4PlayerController> BoundPC;
	TWeakObjectPtr<AC4GameStateBase> BoundGS;
	TWeakObjectPtr<AC4PlayerState> BoundPS;

private:
	void BindGameFlow();
	void UnbindGameFlow();
	bool NeedsGS() const { return NeedsGameState() || WatchesGameFlow(); }
	bool NeedsPS() const { return NeedsPlayerState() || WatchesGameFlow(); }
	UFUNCTION() void HandleFlowPhase(EC4GamePhase NewPhase) { NotifyGameFlowChanged(); }
	UFUNCTION() void HandleFlowTurn(APlayerState* InTurnPlayer) { NotifyGameFlowChanged(); }
	UFUNCTION() void HandleFlowLastChance(bool bInLastChance) { NotifyGameFlowChanged(); }
	UFUNCTION() void HandleFlowOwnSecret(const FString& InSecret) { NotifyGameFlowChanged(); }
	void NotifyGameFlowChanged() { if (bAllBound) OnGameFlowChanged(); }

	bool bAllBound = false;
	void TryBind();

	FTimerHandle BindRetryHandle;
	static constexpr float BindRetryInterval = 0.1f;
};

