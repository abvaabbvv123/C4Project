// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/C4UserWidgetBase.h"
#include "C4GuessedNumbers.generated.h"

class UScrollBox;
class UC4GuessingEntry;

// the box for guessing entry -> data is in Guess log in GameState
UCLASS()
class C4PROJECT_API UC4GuessedNumbers : public UC4UserWidgetBase
{
	GENERATED_BODY()

protected:
	// Need GS, data in the GS
	virtual bool NeedsGameState() const override { return true; }
	// need ps, each data that can check is it mine in the PS
	virtual bool NeedsPlayerState() const override { return true; }
	// when GS changed -> delegate
	virtual void BindGameState(AC4GameStateBase* InGS) override;
	virtual void UnbindAll() override;
	virtual void OnAllBound() override;

	UFUNCTION() void HandleGuessLogChanged();
	void RefreshHistory();

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UScrollBox> ScrollBox_History;
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UC4GuessingEntry> EntryWidgetClass;

	int32 RenderedCount = 0;
};
