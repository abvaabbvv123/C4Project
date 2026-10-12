// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/C4UserWidgetBase.h"
#include "C4SecretInput.generated.h"


class UTextBlock;


UCLASS()
class C4PROJECT_API UC4SecretInput : public UC4UserWidgetBase
{
	GENERATED_BODY()
protected:
	// override bind PC func
	virtual void BindPlayerController(AC4PlayerController* InPC) override;
	virtual void UnbindAll() override;
	virtual void OnAllBound() override;

	// Sever check secret, Restart -> clear
	UFUNCTION() 
	void HandleOwnSecretChanged(const FString& InSecret);
	// after enter secret number -> show Own screen / else -> ---- 
	void RefreshView(const FString& InSecret);
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_MySecret; 
};
