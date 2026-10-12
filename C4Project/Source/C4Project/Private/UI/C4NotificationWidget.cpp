// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/C4NotificationWidget.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "GameSystem/C4PlayerController.h"
#include "GameSystem/C4GameStateBase.h"

void UC4NotificationWidget::BindPlayerController(AC4PlayerController* InPC)
{
	InPC->OnNotificationChanged.AddUniqueDynamic(this, &ThisClass::HandleNotificationChanged);
}
void UC4NotificationWidget::UnbindAll()
{
	if (BoundPC.IsValid()) BoundPC->OnNotificationChanged.RemoveDynamic(this, &ThisClass::HandleNotificationChanged);
}
void UC4NotificationWidget::OnAllBound()
{
	TextBlock_Notification->SetText(BoundPC->NotificationText);
}
void UC4NotificationWidget::OnGameFlowChanged()
{
	if (TextBlock_TurnStatus)
	{
		TextBlock_TurnStatus->SetText(GetCurrentPhase() == EC4GamePhase::Playing ? C4Type::GetTurnStatusText(IsMyTurn()) : FText::GetEmpty());
	}
	if (Widget_LastChance)
	{
		Widget_LastChance->SetVisibility(BoundGS->IsLastChance() ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
	}
}
void UC4NotificationWidget::HandleNotificationChanged(const FText& InText)
{
	TextBlock_Notification->SetText(InText);
}
