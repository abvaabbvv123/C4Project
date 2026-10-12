// Fill out your copyright notice in the Description page of Project Settings.


#include "GameSystem/C4GameModeBase.h"
#include "GameSystem/C4PlayerState.h"
#include "GameSystem/C4GameStateBase.h"
#include "GameSystem/C4PlayerController.h"
#include "Net/UnrealNetwork.h"

void AC4GameModeBase::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);
	if (ErrorMessage.IsEmpty() && AllPlayerControllers.Num() >= MaxPlayer) 
	{
		ErrorMessage = C4Type::GetServerFullMessage();
	}
}
void AC4GameModeBase::Logout(AController* Exiting)
{
	AllPlayerControllers.Remove(Cast<AC4PlayerController>(Exiting));
	Super::Logout(Exiting);
	const UWorld* World = GetWorld();
	if (!IsValid(World) || World->bIsTearingDown) return;

	GetWorldTimerManager().ClearTimer(PhaseTimerHandle);
	ResetPlayersForNewRound();
	RefreshPlayerNames();
	SetGamePhase(EC4GamePhase::WaitingPlayer);
	NotifyAll(EC4NotificationType::OpponentLeft);
}
void AC4GameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);


	AC4PlayerController* C4PC = Cast<AC4PlayerController>(NewPlayer);
	if (!IsValid(C4PC)) return;
	AllPlayerControllers.AddUnique(C4PC);
	RefreshPlayerNames();

	if (AllPlayerControllers.Num() < MaxPlayer)
	{
		NotifyPlayer(C4PC, EC4NotificationType::WaitingForOpponent);
		return;
	}
	NotifyAll(EC4NotificationType::PlayerJoined, C4PC->PlayerState->GetPlayerName());
	GetWorldTimerManager().SetTimer(PhaseTimerHandle, this, &ThisClass::StartSecretSetup, SecretSetupDelay, false);
}
void AC4GameModeBase::HandleSecretSubmitted(AC4PlayerController* InPC, const FString& InSecret)
{
	AC4PlayerState* C4PS = IsValid(InPC) ? InPC->GetPlayerState<AC4PlayerState>() : nullptr;
	if (!IsValid(C4PS)) return;
	if (GetGamePhase() != EC4GamePhase::SecretSetup)
	{
		NotifyPlayer(InPC, EC4NotificationType::CannotEnterSecretNow);
		return;
	}
	if (C4PS->IsSecretReady())
	{
		NotifyPlayer(InPC, EC4NotificationType::SecretAlreadySet);
		return;
	}
	if (!IsValidNumberString(InSecret))               
	{
		NotifyPlayer(InPC, EC4NotificationType::InvalidNumber);
		return;
	}

	InPC->SetOwnSecretNumber(InSecret);
	C4PS->SetSecretReady(true);

	if (AreAllSecretsReady())
	{
		StartPlaying();
		return;
	}
	NotifyPlayer(InPC, EC4NotificationType::SecretAccepted);
	NotifyPlayer(GetOpponent(InPC), EC4NotificationType::OpponentReady);
}
bool AC4GameModeBase::IsValidNumberString(const FString& InNumberString) 
{
	if (InNumberString.Len() != 4) return false;
	int32 temp = 0;

	for (const TCHAR C : InNumberString)
	{
		if (C<TEXT('0') || C>TEXT('9')) return false;
		const int32 bit = 1 << (C - TEXT('0'));
		if (temp & bit) return false;
		temp |= bit;
	}
	return true;
}
//FString AC4GameModeBase::GenerateSecretNumber()
//{
//	TArray<int32> Numbers;
//	Numbers.Reserve(10);
//	for (int32 i = 0; i <= 9; ++i) { Numbers.Add(i); }
//	do
//	{
//		Algo::RandomShuffle(Numbers);
//	} while (Numbers[0] == 0);  
//	FString Result;
//	Result.Reserve(4);
//	for (int32 i = 0; i < 4; ++i)
//	{
//		Result.AppendChar(static_cast<TCHAR>(TEXT('0') + Numbers[i]));
//	}
//	return Result;
//}
bool AC4GameModeBase::IsGuessNumberString(const FString& InNumberString)
{
	if (InNumberString.Len() != 4)
	{
		return false;
	}
	if (InNumberString[0] == '0') 
	{
		return false;
	}
	TSet<TCHAR> UniqueDigits;
	for (TCHAR C : InNumberString)
	{
		if (!FChar::IsDigit(C))
		{
			return false;
		}
		UniqueDigits.Add(C);
	}
	
	return UniqueDigits.Num() == 4;
}
FString AC4GameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString)
{
	int32 StrikeCount = 0;
	int32 BallCount = 0;
	const int32 NumDigits = InSecretNumberString.Len();

	for (int32 i = 0; i < NumDigits; ++i)
	{
		const TCHAR GuessChar = InGuessNumberString[i];
		if (InSecretNumberString[i] == GuessChar)
		{
			StrikeCount++;
		}
		else
		{
			int32 OutIndex = INDEX_NONE;
			if (InSecretNumberString.FindChar(GuessChar, OutIndex))
			{
				BallCount++;
			}
		}
	}
	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("OUT");
	}
	return FString::Printf(TEXT("%dS %dB"), StrikeCount, BallCount);
}
void AC4GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	//SecretNumberString = GenerateSecretNumber();
}

//void AC4GameModeBase::PrintChatMessageString(AC4PlayerController* InChattingPlayerController, const FString& InChatMessageString)
//{
//	const FString GuessNumberString = InChatMessageString.Right(4);
//	FString MessageToSend = InChatMessageString;
//	int32 StrikeCount = -1;  
//
//	if (IsGuessNumberString(GuessNumberString))
//	{
//		const FString JudgeResultString = JudgeResult(SecretNumberString, GuessNumberString);
//		MessageToSend += TEXT(" -> ") + JudgeResultString;
//		StrikeCount = FCString::Atoi(*JudgeResultString.Left(1));  
//
//		if (AC4PlayerState* C4PS = InChattingPlayerController->GetPlayerState<AC4PlayerState>())
//		{
//			++C4PS->CurrentGuessCount;
//		}
//	}
//	for (AC4PlayerController* C4PC : AllPlayerControllers)
//	{
//		if (IsValid(C4PC))
//		{
//			C4PC->ClientRPCReceiveChatMessage(MessageToSend);
//		}
//	}
//
//	if (StrikeCount >= 0)
//	{
//		JudgeGame(InChattingPlayerController, StrikeCount);   // 1È¸¸¸
//	}
//}
//void AC4GameModeBase::ResetGame()
//{
//	//SecretNumberString = GenerateSecretNumber();
//
//	for (const auto& C4PlayerController : AllPlayerControllers)
//	{
//		AC4PlayerState* C4PS = C4PlayerController->GetPlayerState<AC4PlayerState>();
//		if (IsValid(C4PS))
//		{
//			C4PS->CurrentGuessCount = 0;
//		}
//	}
//}
//void AC4GameModeBase::JudgeGame(AC4PlayerController* InChattingPlayerController, int InStrikeCount)
//{
//	if (4 == InStrikeCount)
//	{
//		AC4PlayerState* C4PS = InChattingPlayerController->GetPlayerState<AC4PlayerState>();
//		for (const auto& CXPlayerController : AllPlayerControllers)
//		{
//			if (IsValid(C4PS))
//			{
//				FString CombinedMessageString = C4PS->PlayerNameString + TEXT(" has won the game.");
//				CXPlayerController->NotificationText = FText::FromString(CombinedMessageString);
//
//				ResetGame();
//			}
//		}
//	}
//	else
//	{
//		bool bIsDraw = true;
//		for (const auto& CXPlayerController : AllPlayerControllers)
//		{
//			AC4PlayerState* C4PS = CXPlayerController->GetPlayerState<AC4PlayerState>();
//			if (IsValid(C4PS))
//			{
//				if (C4PS->CurrentGuessCount < C4PS->MaxGuessCount)
//				{
//					bIsDraw = false;
//					break;
//				}
//			}
//		}
//
//		if (true == bIsDraw)
//		{
//			for (const auto& CXPlayerController : AllPlayerControllers)
//			{
//				CXPlayerController->NotificationText = FText::FromString(TEXT("Draw..."));
//
//				ResetGame();
//			}
//		}
//	}
//}

void AC4GameModeBase::StartSecretSetup()
{
	if (AllPlayerControllers.Num() < 2) return;
	ResetPlayersForNewRound();
	SetGamePhase(EC4GamePhase::SecretSetup);
	NotifyAll(EC4NotificationType::EnterSecret);
}
void AC4GameModeBase::StartPlaying()
{
	SetGamePhase(EC4GamePhase::Playing);

	AC4PlayerController* FirstPC = AllPlayerControllers[0]; // 0 -> Player 1
	SetTurnPlayer(FirstPC); // host go first 

	const FString FirstName = (IsValid(FirstPC) && IsValid(FirstPC->PlayerState))
		? FirstPC->PlayerState->GetPlayerName() : FString();
	NotifyAll(EC4NotificationType::GameStart, FirstName);
}
void AC4GameModeBase::ResetPlayersForNewRound()
{
	SetTurnPlayer(nullptr);
	if (AC4GameStateBase* C4GS = GetGameState<AC4GameStateBase>())
	{
		C4GS->SetLastChance(false);
		C4GS->ClearGuessLog();
	}
	for (AC4PlayerController* PC : AllPlayerControllers)
	{
		if (!IsValid(PC)) continue;
		PC->SetOwnSecretNumber(FString());
		if (AC4PlayerState* C4PS = PC->GetPlayerState<AC4PlayerState>())
		{
			C4PS->SetSecretReady(false);
		}
	}
}
void AC4GameModeBase::RefreshPlayerNames()
{
	for (int32 i = 0; i < AllPlayerControllers.Num(); i++)
	{
		const AC4PlayerController* PC = AllPlayerControllers[i];
		if (IsValid(PC) && IsValid(PC->PlayerState))
		{
			PC->PlayerState->SetPlayerName(FString::Printf(TEXT("Player %d"), i + 1));
		}
	}
}
bool AC4GameModeBase::AreAllSecretsReady() const
{
	{
		if (AllPlayerControllers.Num() < MaxPlayer)
		{
			return false;
		}
		for (const AC4PlayerController* PC : AllPlayerControllers)
		{
			const AC4PlayerState* C4PS = IsValid(PC) ? PC->GetPlayerState<AC4PlayerState>() : nullptr;
			if (!IsValid(C4PS) || !C4PS->IsSecretReady())
			{
				return false;
			}
		}
		return true;
	}
}
AC4PlayerController* AC4GameModeBase::GetOpponent(const AC4PlayerController* InPC) const
{
	for (AC4PlayerController* PC : AllPlayerControllers)
	{
		if (IsValid(PC) && PC != InPC) return PC;
	}
	return nullptr;
}
EC4GamePhase AC4GameModeBase::GetGamePhase() const
{
	const AC4GameStateBase* C4GS = GetGameState<AC4GameStateBase>();
	return IsValid(C4GS) ? C4GS->GetGamePhase() : EC4GamePhase::WaitingPlayer;
}
void AC4GameModeBase::SetGamePhase(EC4GamePhase NewPhase) 
{
	if (AC4GameStateBase* C4GS = GetGameState<AC4GameStateBase>())
	{
		C4GS->SetGamePhase(NewPhase);
	}
}

void AC4GameModeBase::NotifyPlayer(AC4PlayerController* InPC, EC4NotificationType InType, const FString& InValue)
{
	if (IsValid(InPC)) InPC->SetNotification(InType, InValue);
}
void AC4GameModeBase::NotifyAll(EC4NotificationType InType, const FString& InValue)
{
	for (AC4PlayerController* C4PC : AllPlayerControllers) NotifyPlayer(C4PC, InType, InValue);
}

// if 4 number -> Guess / other - > chat
void AC4GameModeBase::HandlePlayerInput(AC4PlayerController* InPC, const FString& InRawInput)
{
	if (!IsValid(InPC)) return;
	const FString Input = InRawInput.TrimStartAndEnd();
	if (Input.IsEmpty()) return;

	const EC4GamePhase Phase = GetGamePhase();

	// secret number input -> dont send to chat
	if (Phase == EC4GamePhase::SecretSetup && IsAllDigits(Input))
	{
		HandleSecretSubmitted(InPC, Input); // checking
		return;
	}

	// myturn + 4 number -> send guessing
	if (Phase == EC4GamePhase::Playing && IsPlayersTurn(InPC) && IsFourDigits(Input))
	{
		if (!IsValidNumberString(Input))
		{
			NotifyPlayer(InPC, EC4NotificationType::InvalidNumber);
			return;
		}
		ProcessGuess(InPC, Input);
		return;
	}
	BroadcastChat(InPC, Input);
}

void AC4GameModeBase::ProcessGuess(AC4PlayerController* InPC, const FString& InGuess)
{
	AC4PlayerController* OpponentPC = GetOpponent(InPC);
	if (!IsValid(OpponentPC)) return;

	// Oppoent number is only for server not client
	const FString& OpponentSecret = OpponentPC->GetOwnSecretNumber();
	if (OpponentSecret.Len() != 4) return;     

	FC4GuessRecord Record = JudgeGuess(OpponentSecret, InGuess);
	Record.Guesser = InPC->PlayerState;

	if (AC4GameStateBase* C4GS = GetGameState<AC4GameStateBase>())
	{
		C4GS->AddGuessRecord(Record);
	}

	if (ResolveGuessOutcome(InPC, Record)) return;
	AdvanceTurn(InPC, Record);
}
//check strike / ball
FC4GuessRecord AC4GameModeBase::JudgeGuess(const FString& InSecret, const FString& InGuess)
{
	FC4GuessRecord Record;
	Record.GuessNumber = InGuess;

	int32 SecretMask = 0;
	for (const TCHAR C : InSecret)
	{
		SecretMask |= 1 << (C - TEXT('0'));
	}
	for (int32 i = 0; i < 4; ++i)
	{
		const TCHAR G = InGuess[i];
		if (InSecret[i] == G)
		{
			++Record.Strike;
		}
		else if (SecretMask & (1 << (G - TEXT('0'))))
		{
			++Record.Ball;
		}
	}
	return Record;
}
//check is it all numbers 
bool AC4GameModeBase::IsAllDigits(const FString& InString)
{
	if (InString.IsEmpty()) return false;
	for (const TCHAR C : InString)
	{
		if (C < TEXT('0') || C > TEXT('9')) return false;
	}
	return true;
}

//check is it 4 number
bool AC4GameModeBase::IsFourDigits(const FString& InString)
{
	return InString.Len() == 4 && IsAllDigits(InString);
}
//turn base system
void AC4GameModeBase::AdvanceTurn(AC4PlayerController* InGuessedPC, const FC4GuessRecord& InRecord)
{
	AC4PlayerController* NextPC = GetOpponent(InGuessedPC);
	SetTurnPlayer(NextPC);
	// notify each player
	NotifyPlayer(InGuessedPC, EC4NotificationType::GuessResult, C4Type::FormatGuessRecord(InRecord));
	NotifyPlayer(NextPC, EC4NotificationType::YourTurn);
}
bool AC4GameModeBase::IsPlayersTurn(const AC4PlayerController* InPC) const
{
	const AC4GameStateBase* C4GS = GetGameState<AC4GameStateBase>();
	return IsValid(C4GS) && IsValid(InPC) && C4GS->IsPlayersTurn(InPC->PlayerState);
}
void AC4GameModeBase::SetTurnPlayer(AC4PlayerController* InPC)
{
	if (AC4GameStateBase* C4GS = GetGameState<AC4GameStateBase>())
	{
		C4GS->SetCurrentTurnPlayer(IsValid(InPC) ? InPC->PlayerState.Get() : nullptr);
	}
}

void AC4GameModeBase::BroadcastChat(AC4PlayerController* InPC, const FString& InMessage)
{
	if (!IsValid(InPC) || !IsValid(InPC->PlayerState)) return;
	SendChatToAll(InPC->PlayerState->GetPlayerName() + TEXT(": ") + InMessage);
}

//game result
bool AC4GameModeBase::ResolveGuessOutcome(AC4PlayerController* InPC, const FC4GuessRecord& InRecord)
{
	AC4GameStateBase* C4GS = GetGameState<AC4GameStateBase>();
	if (!IsValid(C4GS)) return false;

	const bool bHit = (InRecord.Strike == 4);
	if (C4GS->IsLastChance())
	{
		if (bHit)
		{
			EndGame(nullptr); // draw
		}
		else
		{
			EndGame(GetOpponent(InPC));
		}
		return true;
	}

	// if didnt right, return false
	if (!bHit)
	{
		return false;
	}

	// when first player guess right, give a last change to opponent player
	if (IsFirstPlayer(InPC))
	{
		C4GS->SetLastChance(true);
		SetTurnPlayer(GetOpponent(InPC));
		NotifyAll(EC4NotificationType::LastChance, GetPlayerNameOf(InPC));
		return true;
	}
	// when second player guess right, finish
	EndGame(InPC);
	return true;
}

void AC4GameModeBase::EndGame(AC4PlayerController* InWinnerPC)
{
	GetWorldTimerManager().ClearTimer(PhaseTimerHandle);

	SetTurnPlayer(nullptr);
	SetGamePhase(EC4GamePhase::GameOver);

	// Top banner (restored)
	if (IsValid(InWinnerPC))
	{
		NotifyAll(EC4NotificationType::Win, GetPlayerNameOf(InWinnerPC));
	}
	else
	{
		NotifyAll(EC4NotificationType::Draw);
	}
	AnnounceGameResult(InWinnerPC);
	GetWorldTimerManager().SetTimer(PhaseTimerHandle, this, &ThisClass::StartSecretSetup,
		static_cast<float>(RestartDelaySeconds), false);
}

bool AC4GameModeBase::IsFirstPlayer(const AC4PlayerController* InPC) const
{
	// index 0 = Player 1 = first player
	return AllPlayerControllers.Num() > 0 && AllPlayerControllers[0] == InPC;
}
FString AC4GameModeBase::GetPlayerNameOf(const AC4PlayerController* InPC) const
{
	return (IsValid(InPC) && IsValid(InPC->PlayerState)) ? InPC->PlayerState->GetPlayerName() : FString();
}
void AC4GameModeBase::AnnounceGameResult(AC4PlayerController* InWinnerPC)
{
	BroadcastSystemChat(IsValid(InWinnerPC)
		? C4Type::GetWinChatText(GetPlayerNameOf(InWinnerPC))
		: C4Type::GetDrawChatText());

	if (AllPlayerControllers.Num() >= MaxPlayer)
	{
		const AC4PlayerController* P1 = AllPlayerControllers[0];
		const AC4PlayerController* P2 = AllPlayerControllers[1];
		if (IsValid(P1) && IsValid(P2))
		{
			BroadcastSystemChat(C4Type::GetSecretRevealText(
				GetPlayerNameOf(P1), P1->GetOwnSecretNumber(),
				GetPlayerNameOf(P2), P2->GetOwnSecretNumber()));
		}
	}
	BroadcastSystemChat(C4Type::GetRestartChatText(RestartDelaySeconds));
}

void AC4GameModeBase::BroadcastSystemChat(const FText& InMessage)
{
	SendChatToAll(C4Type::FormatSystemChat(InMessage));
}

void AC4GameModeBase::SendChatToAll(const FString& InMessage)
{
	for (AC4PlayerController* PC : AllPlayerControllers)
	{
		if (IsValid(PC))
		{
			PC->ClientRPCReceiveChatMessage(InMessage);
		}
	}
}