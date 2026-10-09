// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/C4GuessingEntry.h"
#include "Components/TextBlock.h"
#include "GameFramework/PlayerState.h"

void UC4GuessingEntry::SetRecord(int32 InIndex, const FC4GuessRecord& InRecord, bool bInIsMine)
{
	const FSlateColor& RowColor = bInIsMine ? MyColor : OpponentColor;

	if (TextBlock_Index)
	{
		TextBlock_Index->SetText(FText::AsNumber(InIndex));
		TextBlock_Index->SetColorAndOpacity(RowColor);
	}
	if (TextBlock_Player && IsValid(InRecord.Guesser))
	{
		TextBlock_Player->SetText(FText::FromString(InRecord.Guesser->GetPlayerName()));
		TextBlock_Player->SetColorAndOpacity(RowColor);
	}

	TextBlock_Number->SetText(FText::FromString(InRecord.GuessNumber));
	TextBlock_Number->SetColorAndOpacity(RowColor);

	TextBlock_Result->SetText(FText::FromString(C4Type::FormatStrikeBall(InRecord)));
	TextBlock_Result->SetColorAndOpacity(InRecord.Strike == 4 ? HitColor : RowColor);
}
 