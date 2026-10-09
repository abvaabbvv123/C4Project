// Fill out your copyright notice in the Description page of Project Settings.


#include "GameSystem/C4PlayerController.h"
#include "GameSystem/C4GameModeBase.h"
#include "UI/C4ChatInput.h"
#include "UI/C4SecretInput.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"


void AC4PlayerController::BeginPlay()
{
	Super::BeginPlay();
	if (IsLocalController() == false) return;

	FInputModeUIOnly InputModeUIOnly;
	SetInputMode(InputModeUIOnly);
	bShowMouseCursor = true;

	if (IsValid(MainHUDWidgetClass))
	{
		MainHUDWidgetInstance = CreateWidget<UUserWidget>(this, MainHUDWidgetClass);
		if (IsValid(MainHUDWidgetInstance))
		{
			MainHUDWidgetInstance->AddToViewport();
		}
	}
}
void AC4PlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ThisClass, Notification, COND_OwnerOnly);
	DOREPLIFETIME_CONDITION(ThisClass, OwnSecretNumber, COND_OwnerOnly);
}
//print chat
////
void AC4PlayerController::SubmitChatInput(const FString& InChatMessageString)
{
	if (IsLocalController())
	{
		ServerRPCSubmitInput(InChatMessageString);
	}
}
void AC4PlayerController::ServerRPCSubmitInput_Implementation(const FString& InRawInput)
{
	if (InRawInput.IsEmpty() || InRawInput.Len() > 64) return;
	if (AC4GameModeBase* C4GM = GetWorld()->GetAuthGameMode<AC4GameModeBase>())
	{
		C4GM->HandlePlayerInput(this, InRawInput);
	}
}
void AC4PlayerController::ClientRPCReceiveChatMessage_Implementation(const FString& InChatMessageString)
{
	OnChatMessageReceived.Broadcast(InChatMessageString);
}
////
//Notification
////
void AC4PlayerController::SetNotification(EC4NotificationType InType, const FString& InValue)
{ // GameMode Call, Save ID + make Serial
	if (!HasAuthority()) return;

	Notification.Type = InType;
	Notification.Value = InValue;
	++Notification.Serial; 

	if (IsLocalController()) OnRepNotification();
}
void AC4PlayerController::ShowLocalNotification(EC4NotificationType InType, const FString& InValue) 
{ // Client alert, no server check
	if (IsLocalController())
	{
		ApplyNotification(InType, InValue);
	}
}
void AC4PlayerController::OnRepNotification() 
{
	ApplyNotification(Notification.Type, Notification.Value);
}
void AC4PlayerController::ApplyNotification(EC4NotificationType InType, const FString& InValue) 
{
	NotificationText = C4Type::GetNotificationText(InType, InValue);
	OnNotificationChanged.Broadcast(NotificationText);
}
////
void AC4PlayerController::SetOwnSecretNumber(const FString& InSecret)
{
	if (!HasAuthority() || OwnSecretNumber == InSecret) return;
	OwnSecretNumber = InSecret;
	if (IsLocalController()) OnRepOwnSecretNumber();
}
void AC4PlayerController::OnRepOwnSecretNumber()
{
	OnOwnSecretChanged.Broadcast(OwnSecretNumber);
}
