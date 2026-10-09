// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "C4Type.h"
#include "C4GuessingEntry.generated.h"
class UTextBlock;
/**
 * 
 */
UCLASS()
class C4PROJECT_API UC4GuessingEntry : public UUserWidget
{
	GENERATED_BODY()
public:
	void SetRecord(int32 InIndex, const FC4GuessRecord& InRecord, bool bInIsMine);

protected:
	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_Index;
	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_Player;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_Number;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_Result;

	UPROPERTY(EditAnywhere, Category = "Style")
	FSlateColor MyColor = FSlateColor(FLinearColor(0.2f, 0.9f, 0.3f));

	UPROPERTY(EditAnywhere, Category = "Style")
	FSlateColor OpponentColor = FSlateColor(FLinearColor(0.95f, 0.25f, 0.25f));

	UPROPERTY(EditAnywhere, Category = "Style")
	FSlateColor HitColor = FSlateColor(FLinearColor(1.f, 0.8f, 0.2f));
};

