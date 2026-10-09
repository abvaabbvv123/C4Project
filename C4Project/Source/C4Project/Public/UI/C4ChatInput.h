// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/C4UserWidgetBase.h"
#include "Styling/CoreStyle.h"
#include "C4Type.h"
#include "C4ChatInput.generated.h"

class UEditableTextBox;
class UScrollBox;
/**
 * 
 */
UCLASS()
class C4PROJECT_API UC4ChatInput : public UC4UserWidgetBase
{
	GENERATED_BODY()
protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativePreConstruct() override;

	virtual void BindPlayerController(AC4PlayerController* InPC) override;
	virtual void UnbindAll() override;

	UFUNCTION() void OnChatInputTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);
	UFUNCTION() void HandleChatMessageReceived(const FString& InMessage);

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> EditableTextBox_ChatInput;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UScrollBox> ScrollBox_ChatLog;

	UPROPERTY(EditDefaultsOnly, Category = "Chat")
	int32 MaxChatLines = 50;                      

	UPROPERTY(EditDefaultsOnly, Category = "Chat")
	FSlateFontInfo ChatFont = FCoreStyle::GetDefaultFontStyle("Regular", 14);
};