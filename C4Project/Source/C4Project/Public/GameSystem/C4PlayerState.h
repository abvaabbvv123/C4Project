// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "C4Type.h"
#include "C4PlayerState.generated.h"

/**
 * 
 */
UCLASS()
class C4PROJECT_API AC4PlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	//AC4PlayerState();
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
	void SetSecretReady(bool bInReady);
	bool IsSecretReady() const { return bSecretReady; }
	UPROPERTY(BlueprintAssignable)
	FOnC4BoolChanged OnSecretReadyChanged;

//	UPROPERTY(Replicated)
//	FString PlayerNameString;
//	UPROPERTY(Replicated)
//	int32 CurrentGuessCount;
//	UPROPERTY(Replicated)
//	int32 MaxGuessCount;
protected:
	UPROPERTY(ReplicatedUsing = OnRepSecretReady, BlueprintReadOnly)
	bool bSecretReady = false;
	UFUNCTION()
	void OnRepSecretReady();

};
