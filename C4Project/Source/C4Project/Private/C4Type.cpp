// Fill out your copyright notice in the Description page of Project Settings.


#include "C4Type.h"

#define LOCTEXT_NAMESPACE "C4Notification"

FText C4Type::GetNotificationText(EC4NotificationType InType, const FString& InValue)
{
	const FText Value = FText::FromString(InValue);
	switch (InType)
	{
		// Connection
	case EC4NotificationType::Connected:            return LOCTEXT("Connected", "Connected to the game server.");
	case EC4NotificationType::PlayerJoined:         return FText::Format(LOCTEXT("PlayerJoined", "{0} has joined the game."), Value);
	case EC4NotificationType::WaitingForOpponent:   return LOCTEXT("WaitingForOpponent", "Waiting for an opponent...");
	case EC4NotificationType::OpponentLeft:         return LOCTEXT("OpponentLeft", "Your opponent has left. Waiting for a new player...");
		// Secret setup
	case EC4NotificationType::EnterSecret: return LOCTEXT("EnterSecret", "Enter your secret number (4 unique digits) in the input box.");
	case EC4NotificationType::InvalidNumber:        return LOCTEXT("InvalidNumber", "Invalid number. Use 4 unique digits (0-9).");
	case EC4NotificationType::SecretAccepted:       return LOCTEXT("SecretAccepted", "Secret number registered. Waiting for your opponent...");
	case EC4NotificationType::SecretAlreadySet:     return LOCTEXT("SecretAlreadySet", "Your secret number is already set.");
	case EC4NotificationType::CannotEnterSecretNow: return LOCTEXT("CannotEnterSecretNow", "You can't enter a secret number right now.");
	case EC4NotificationType::OpponentReady:        return LOCTEXT("OpponentReady", "Your opponent is ready.");
		// Playing
	case EC4NotificationType::GameStart:            return FText::Format(LOCTEXT("GameStart", "Game start! {0} goes first."), Value);
	case EC4NotificationType::YourTurn:             return LOCTEXT("YourTurn", "Your turn.");
	case EC4NotificationType::OpponentTurn:         return LOCTEXT("OpponentTurn", "Opponent's turn.");
	case EC4NotificationType::LastChance:           return FText::Format(LOCTEXT("LastChance", "{0} hit the number! Last chance for the opponent."), Value);
	case EC4NotificationType::GuessResult:          return FText::Format(LOCTEXT("GuessResult", "Your guess: {0}"), Value);
		// GameOVer
	case EC4NotificationType::Win:                  return FText::Format(LOCTEXT("Win", "{0} wins!"), Value);
	case EC4NotificationType::Draw:                 return LOCTEXT("Draw", "Draw!");
	case EC4NotificationType::Restarting:           return FText::Format(LOCTEXT("Restarting", "Restarting in {0} seconds..."), Value);

	case EC4NotificationType::None:
	default:
		return FText::GetEmpty();
	}
}
FString C4Type::GetServerFullMessage()
{
	return TEXT("Server is Full");
}
FString C4Type::FormatGuessRecord(const FC4GuessRecord& InRecord)
{
	return FString::Printf(TEXT("%s | %s"), *InRecord.GuessNumber, *FormatStrikeBall(InRecord));
}
FText C4Type::GetTurnStatusText(bool bIsMyTurn)
{
	return bIsMyTurn
		? LOCTEXT("TurnMine", "YOUR TURN")
		: LOCTEXT("TurnOpponent", "OPPONENT'S TURN");
}

FString C4Type::FormatStrikeBall(const FC4GuessRecord& InRecord)
{
	if (InRecord.Strike == 0 && InRecord.Ball == 0)
	{
		return TEXT("OUT");
	}
	return FString::Printf(TEXT("%dS %dB"), InRecord.Strike, InRecord.Ball);
}
// Ãß°¡ (#undef À§)
FText C4Type::GetInputHintText(bool bNeedsSecret, bool bIsMyTurn)
{
	return LOCTEXT("HintChat", "Enter Here");
}

FText C4Type::GetEmptySecretText()
{
	return LOCTEXT("EmptySecret", "----");
}
FText C4Type::GetInputHintText()
{
	return LOCTEXT("HintInput", "Enter Here");
}
FString C4Type::FormatSystemChat(const FText& InMessage)
{
	return FText::Format(LOCTEXT("SystemChat", "[SYSTEM] {0}"), InMessage).ToString();
}

FText C4Type::GetWinChatText(const FString& InWinnerName)
{
	return FText::Format(LOCTEXT("WinChat", "{0} guessed the number!"), FText::FromString(InWinnerName));
}

FText C4Type::GetDrawChatText()
{
	return LOCTEXT("DrawChat", "Both players guessed the number. It's a draw!");
}

FText C4Type::GetSecretRevealText(const FString& InName1, const FString& InSecret1,
	const FString& InName2, const FString& InSecret2)
{
	return FText::Format(LOCTEXT("SecretReveal", "{0}'s number: {1} / {2}'s number: {3}"),
		FText::FromString(InName1), FText::FromString(InSecret1),
		FText::FromString(InName2), FText::FromString(InSecret2));
}

FText C4Type::GetRestartChatText(int32 InSeconds)
{
	return FText::Format(LOCTEXT("RestartChat", "Restarting in {0} seconds."), FText::AsNumber(InSeconds));
}