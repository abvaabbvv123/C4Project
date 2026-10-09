// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "C4Type.h"
#include "GameFramework/GameModeBase.h"
#include "C4GameModeBase.generated.h"
class AC4PlayerController;
/**
 * 
 */
UCLASS()
class C4PROJECT_API AC4GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;
	//mani join
	////
	virtual void PreLogin(const FString& Options, const FString& Address,const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
	virtual void Logout(AController* Exiting) override;
	virtual void OnPostLogin(AController* NewPlayer) override;
	////
	//input
	void HandleSecretSubmitted(AC4PlayerController* InPC, const FString& InSecret); // Making secret num
	void HandlePlayerInput(AC4PlayerController* InPC, const FString& InRawInput);
	//void PrintChatMessageString(AC4PlayerController* InChattingPlayerController, const FString& InChatMessageString); // chat
	////
	//check inputs
	static bool IsAllDigits(const FString& InString);
	static bool IsFourDigits(const FString& InString);                // Check is it 4 numbers
	static bool IsValidNumberString(const FString& InNumberString);   //Valid is it right 4 numbers
	static FC4GuessRecord JudgeGuess(const FString& InSecret, const FString& InGuess);
	////
	static constexpr int32 MaxPlayer = 2;
	//FString GenerateSecretNumber();
	bool IsGuessNumberString(const FString& InNumberString);
	FString JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString);

	void ResetGame();
	void JudgeGame(AC4PlayerController* InChattingPlayerController, int InStrikeCount);
	//Notify
	void NotifyPlayer(AC4PlayerController* InPC, EC4NotificationType InType, const FString& InValue = FString());
	void NotifyAll(EC4NotificationType InType, const FString& InValue = FString());
	//game result/restart
	bool ResolveGuessOutcome(AC4PlayerController* InPC, const FC4GuessRecord& InRecord); // true 
	void EndGame(AC4PlayerController* InWinnerPC);          // nullptr -> draw

	bool IsFirstPlayer(const AC4PlayerController* InPC) const;
	FString GetPlayerNameOf(const AC4PlayerController* InPC) const;

	void AnnounceGameResult(AC4PlayerController* InWinnerPC);
	void BroadcastSystemChat(const FText& InMessage);
	void SendChatToAll(const FString& InMessage);

	UPROPERTY(EditDefaultsOnly, Category = "Rule")
	int32 RestartDelaySeconds = 3;
protected:
	//progressing
	void StartSecretSetup();
	void StartPlaying();
	void ProcessGuess(AC4PlayerController* InPC, const FString& InGuess);
	void AdvanceTurn(AC4PlayerController* InGuessedPC, const FC4GuessRecord& InRecord);
	void BroadcastChat(AC4PlayerController* InPC, const FString& InMessage);
	////
	//helper
	////
	void ResetPlayersForNewRound();
	void RefreshPlayerNames();
	bool AreAllSecretsReady() const;
	AC4PlayerController* GetOpponent(const AC4PlayerController* InPC) const;
	bool IsPlayersTurn(const AC4PlayerController* InPC) const; 
	void SetTurnPlayer(AC4PlayerController* InPC);
	EC4GamePhase GetGamePhase() const;
	void SetGamePhase(EC4GamePhase NewPhase);
	UPROPERTY()
	TArray<TObjectPtr<AC4PlayerController>> AllPlayerControllers;

	UPROPERTY(EditDefaultsOnly, Category = "Rule")
	float SecretSetupDelay = 2.0f;             

	FTimerHandle PhaseTimerHandle;

	FString SecretNumberString;
};
