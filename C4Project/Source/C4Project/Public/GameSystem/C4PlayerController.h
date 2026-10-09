// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "C4Type.h"
#include "C4PlayerController.generated.h"

class UC4ChatInput;
class UC4SecretInput;
class UUserWidget;
/**
 * 
 */
UCLASS()
class C4PROJECT_API AC4PlayerController : public APlayerController
{
	GENERATED_BODY()
public:

	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	//Notifications
	////
	void SetNotification(EC4NotificationType InType, const FString& InValue = FString()); // for server
	void ShowLocalNotification(EC4NotificationType InType, const FString& InValue = FString()); // for client
	UPROPERTY(BlueprintReadOnly)
	FText NotificationText;
	UPROPERTY(BlueprintAssignable)
	FOnC4TextEvent OnNotificationChanged;
	////
	//SetSecretNums
	void SetOwnSecretNumber(const FString& InSecret);                                         
	const FString& GetOwnSecretNumber() const { return OwnSecretNumber; }
	UPROPERTY(BlueprintAssignable)
	FOnC4StringChanged OnOwnSecretChanged;
	//UFUNCTION(Server, Reliable)
	//void ServerRPCSubmitSecret(const FString& InSecret);
	UFUNCTION(Server, Reliable)
	void ServerRPCSubmitInput(const FString& InRawInput);
	////
	void SubmitChatInput(const FString& InChatMessageString);
	//Server
	UFUNCTION(Client, Reliable)
	void ClientRPCReceiveChatMessage(const FString& InChatMessageString);
	//UFUNCTION(Server, Reliable)
	//void ServerRPCPrintChatMessageString(const FString& InChatMessageString);
	UPROPERTY(BlueprintAssignable)
	FOnC4StringChanged OnChatMessageReceived;
protected:
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UC4ChatInput> ChatInputWidgetClass;
	UPROPERTY()
	TObjectPtr<UC4ChatInput> ChatInputWidgetInstance;
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> NotificationTextWidgetClass;
	UPROPERTY()
	TObjectPtr<UUserWidget> NotificationTextWidgetInstance;
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UC4SecretInput> SecretInputWidgetClass;
	UPROPERTY()
	TObjectPtr<UC4SecretInput> SecretInputWidgetInstance;
protected:
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> MainHUDWidgetClass;
	UPROPERTY()
	TObjectPtr<UUserWidget> MainHUDWidgetInstance;

	UPROPERTY(ReplicatedUsing = OnRepNotification)
	FC4Notification Notification;
	UFUNCTION()
	void OnRepNotification();
	UPROPERTY(ReplicatedUsing = OnRepOwnSecretNumber)
	FString OwnSecretNumber;
	UFUNCTION()
	void OnRepOwnSecretNumber();
	void ApplyNotification(EC4NotificationType InType, const FString& InValue);
};
