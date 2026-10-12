// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "C4Type.h"
#include "Blueprint/UserWidget.h"
#include "C4UserWidgetBase.generated.h"
class AC4PlayerController;
class AC4GameStateBase;
class AC4PlayerState;


UCLASS(Abstract)
class C4PROJECT_API UC4UserWidgetBase : public UUserWidget
{
	GENERATED_BODY()
protected:
	// When widget created / destroyed
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

	// When need GS / PS
	virtual bool NeedsGameState() const { return false; }
	virtual bool NeedsPlayerState() const { return false; }

	// Bing need things, child only do delegate
	virtual void BindPlayerController(AC4PlayerController* InPC) {}
	virtual void BindGameState(AC4GameStateBase* InGS) {}
	virtual void BindPlayerState(AC4PlayerState* InPS) {}

	TWeakObjectPtr<AC4PlayerController> BoundPC;
	TWeakObjectPtr<AC4GameStateBase> BoundGS;
	TWeakObjectPtr<AC4PlayerState> BoundPS;

	// call when it destroyed, child UI -> call RemoveDynamic
	virtual void UnbindAll() {}

	// Call After binded all other things
	virtual void OnAllBound() {}

	// true -> when turn func worked, call OnGameFLowchanged 
	virtual bool WatchesGameFlow() const { return false; }
	// Calcualted when something changed 
	virtual void OnGameFlowChanged() {}

	// Check Turn
	EC4GamePhase GetCurrentPhase() const;
	bool IsMyTurn() const;

private:
	// WatchesGameFlow true -> Unbind all delegate
	void BindGameFlow();
	void UnbindGameFlow();

	// Check what bases need to wait (child + GameFlow check)
	bool NeedsGS() const { return NeedsGameState() || WatchesGameFlow(); }
	bool NeedsPS() const { return NeedsPlayerState() || WatchesGameFlow(); }   // fir IsMyTurn

	// GameFlow delegate -> all same work, seperated per each task
	UFUNCTION()
	void HandleFlowPhase(EC4GamePhase NewPhase) { NotifyGameFlowChanged(); }
	UFUNCTION()
	void HandleFlowTurn(APlayerState* InTurnPlayer) { NotifyGameFlowChanged(); }
	UFUNCTION()
	void HandleFlowLastChance(bool bInLastChance) { NotifyGameFlowChanged(); }
	UFUNCTION()
	void HandleFlowOwnSecret(const FString& InSecret) { NotifyGameFlowChanged(); }
	// only call after everything binding -> send to other child
	void NotifyGameFlowChanged() { if (bAllBound) OnGameFlowChanged(); }
	bool bAllBound = false;
	// try bind PC / GS / PS, try until all stuff bind per bindretryinterval
	void TryBind();

	FTimerHandle BindRetryHandle;
	static constexpr float BindRetryInterval = 0.1f;   // ry interval for trybind
};
