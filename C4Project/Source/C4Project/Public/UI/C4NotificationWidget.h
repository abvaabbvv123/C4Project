// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/C4UserWidgetBase.h"
#include "C4NotificationWidget.generated.h"
class UTextBlock;
class UWidget;
class UWidgetAnimation;
class USoundBase;

UCLASS()
class C4PROJECT_API UC4NotificationWidget : public UC4UserWidgetBase
{
	GENERATED_BODY()
protected:
	// react changed turn or on last change turn, need to bind GameFlow
	virtual bool WatchesGameFlow() const override { return true; }
	// Changed Notify delegate
	virtual void BindPlayerController(AC4PlayerController* InPC) override;
	// unbind all Binded things
	virtual void UnbindAll() override;
	virtual void OnAllBound() override;
	// Renew turn and LastChange banner
	virtual void OnGameFlowChanged() override;

	
	UFUNCTION() void HandleNotificationChanged(const FText& InText);

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_Notification;
	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_TurnStatus;
	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UWidget> Widget_LastChance;
};
