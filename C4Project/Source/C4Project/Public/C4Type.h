// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "C4Type.generated.h"
class APlayerState;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnC4TurnChanged, APlayerState*, TurnPlayer);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnC4GuessHistoryChanged);
/**
 * 
 */
UENUM(BlueprintType)
enum class EC4GamePhase : uint8
{
	WaitingPlayer,
	SecretSetup,
	Playing,
	GameOver
};
UENUM(BlueprintType)
enum class EC4NotificationType : uint8
{
	None UMETA(Hidden),
	// Connection
	Connected,             // Connected to the game server.
	PlayerJoined,          // {0} has joined the game.
	WaitingForOpponent,    // Waiting for an opponent...
	OpponentLeft,          // Your opponent has left. Waiting for a new player...
	// Secret setup
	EnterSecret,           // Enter your secret number (4 unique digits).
	InvalidNumber,         // Invalid number. Use 4 unique digits (0-9).
	SecretAccepted,        // Secret number registered. Waiting for your opponent...
	SecretAlreadySet,      // Your secret number is already set.
	CannotEnterSecretNow,  // You can't enter a secret number right now.
	OpponentReady,         // Your opponent is ready.
	// Playing 
	GameStart,             // Game start! {0} goes first.
	YourTurn,              // Your turn.
	OpponentTurn,          // Opponent's turn.
	LastChance,            // {0} hit the number! Last chance for the opponent.
	GuessResult,          // Your guess: {0}
	// GameOver
	Win,                   // {0} wins!
	Draw,                  // Draw!
	Restarting             // Restarting in {0} seconds...
};
USTRUCT(BlueprintType)
struct FC4Notification
{
	GENERATED_BODY()

	UPROPERTY()
	EC4NotificationType Type = EC4NotificationType::None;
	UPROPERTY()
	FString Value;                 // {0}
	UPROPERTY()
	uint8 Serial = 0;
};
USTRUCT(BlueprintType)
struct FC4GuessRecord
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly) FString GuessNumber;
	UPROPERTY(BlueprintReadOnly) int32 Strike = 0;
	UPROPERTY(BlueprintReadOnly) int32 Ball = 0;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<APlayerState> Guesser = nullptr;
};

// delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnC4PhaseChanged, EC4GamePhase, NewPhase);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnC4TextEvent, const FText&, Text);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnC4StringChanged, const FString&, Value);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnC4BoolChanged, bool, bValue);
class C4PROJECT_API C4Type
{
public:
	static FText GetNotificationText(EC4NotificationType InType, const FString& InValue = FString());
	static FString GetServerFullMessage(); 
	static FString FormatGuessRecord(const FC4GuessRecord& InRecord);
	static FText GetTurnStatusText(bool bIsMyTurn);  // "YOUR TURN" / "OPPONENT'S TURN"
	static FString FormatStrikeBall(const FC4GuessRecord& InRecord);  // "1S 2B" / "OUT"
	static FText GetInputHintText(bool bNeedsSecret, bool bIsMyTurn);
	static FText GetEmptySecretText();
	static FText GetInputHintText();
	static FString FormatSystemChat(const FText& InMessage);     
	static FText GetWinChatText(const FString& InWinnerName);  // "{0} guessed the number!"
	static FText GetDrawChatText(); 
	static FText GetSecretRevealText(const FString& InName1, const FString& InSecret1,const FString& InName2, const FString& InSecret2);
	static FText GetRestartChatText(int32 InSeconds);
};

