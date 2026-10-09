// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "C4Type.h"
#include "C4GameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class C4PROJECT_API AC4GameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifeTimeProp) const override;
	void SetGamePhase(EC4GamePhase NewPhase);  
	void SetCurrentTurnPlayer(APlayerState* InPlayerState);                
	APlayerState* GetCurrentTurnPlayer() const { return CurrentTurnPlayer; }
	bool IsPlayersTurn(const APlayerState* InPlayerState) const;
	EC4GamePhase GetGamePhase() const { return GamePhase; }
	UPROPERTY(BlueprintAssignable)
	FOnC4PhaseChanged OnPhaseChanged;
	UPROPERTY(BlueprintAssignable)
	FOnC4TurnChanged OnTurnChanged;
	//UFUNCTION(NetMulticast, Reliable)
	//void MulticastRPCBroadcastLoginMessage(const FString& InNameString = FString(TEXT("XXXXXXX")));
	//last change -> when initialize player get guessnumber, give a last chance to second player. if guess right -> draw
	void SetLastChance(bool bInLastChance);
	bool IsLastChance() const { return bLastChance; }

	UPROPERTY(BlueprintAssignable)
	FOnC4BoolChanged OnLastChanceChanged;

	void AddGuessRecord(const FC4GuessRecord& InRecord);
	void ClearGuessLog();
	const TArray<FC4GuessRecord>& GetGuessLog() const { return GuessLog; }

	UPROPERTY(BlueprintAssignable)
	FOnC4GuessHistoryChanged OnGuessLogChanged;
protected:
	UPROPERTY(ReplicatedUsing = OnRepGamePhase, BlueprintReadOnly)
	EC4GamePhase GamePhase = EC4GamePhase::WaitingPlayer;

	UFUNCTION()
	void OnRepGamePhase();

	UPROPERTY(ReplicatedUsing = OnRepCurrentTurnPlayer, BlueprintReadOnly)
	TObjectPtr<APlayerState> CurrentTurnPlayer;

	UFUNCTION()
	void OnRepCurrentTurnPlayer();

	UPROPERTY(ReplicatedUsing = OnRepLastChance, BlueprintReadOnly)
	bool bLastChance = false;

	UFUNCTION()
	void OnRepLastChance();

	UPROPERTY(ReplicatedUsing = OnRepGuessLog, BlueprintReadOnly)
	TArray<FC4GuessRecord> GuessLog;
	UFUNCTION()
	void OnRepGuessLog();
};
