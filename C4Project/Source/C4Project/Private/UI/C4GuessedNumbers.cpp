// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/C4GuessedNumbers.h"
#include "UI/C4GuessingEntry.h"
#include "Components/ScrollBox.h"
#include "GameSystem/C4GameStateBase.h"
#include "GameSystem/C4PlayerState.h"

void UC4GuessedNumbers::BindGameState(AC4GameStateBase* InGS)
{
	InGS->OnGuessLogChanged.AddUniqueDynamic(this, &ThisClass::HandleGuessLogChanged);
}
void UC4GuessedNumbers::UnbindAll()
{
	if (BoundGS.IsValid())
	{
		BoundGS->OnGuessLogChanged.RemoveDynamic(this, &ThisClass::HandleGuessLogChanged);
	}
}
void UC4GuessedNumbers::OnAllBound() { RefreshHistory(); }
void UC4GuessedNumbers::HandleGuessLogChanged() { RefreshHistory(); }

// when it restart, reset all
void UC4GuessedNumbers::RefreshHistory()
{
	if (!BoundGS.IsValid() || !BoundPS.IsValid() || !EntryWidgetClass) return;

	const TArray<FC4GuessRecord>& Log = BoundGS->GetGuessLog();

	// Log shrank = round reset -> rebuild
	if (Log.Num() < RenderedCount)
	{
		ScrollBox_History->ClearChildren();
		RenderedCount = 0;
	}
	// Create only newly added entries
	for (int32 i = RenderedCount; i < Log.Num(); ++i)
	{
		if (UC4GuessingEntry* Entry = CreateWidget<UC4GuessingEntry>(this, EntryWidgetClass))
		{
			const bool bIsMine = (Log[i].Guesser == BoundPS.Get());
			Entry->SetRecord(i + 1, Log[i], bIsMine);
			ScrollBox_History->AddChild(Entry);
		}
	}
	RenderedCount = Log.Num();
	ScrollBox_History->ScrollToEnd();
}
