// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/C4SecretInput.h"
#include "Components/TextBlock.h"
#include "GameSystem/C4PlayerController.h"
#include "C4Type.h"

void UC4SecretInput::BindPlayerController(AC4PlayerController* InPC)
{
	InPC->OnOwnSecretChanged.AddUniqueDynamic(this, &ThisClass::HandleOwnSecretChanged);
}
void UC4SecretInput::UnbindAll()
{
	if (BoundPC.IsValid())
	{
		BoundPC->OnOwnSecretChanged.RemoveDynamic(this, &ThisClass::HandleOwnSecretChanged);
	}
}
void UC4SecretInput::OnAllBound()
{
	RefreshView(BoundPC->GetOwnSecretNumber());
}
// Server approve this
void UC4SecretInput::HandleOwnSecretChanged(const FString& InSecret)
{
	RefreshView(InSecret);
}
// Show number logic 
void UC4SecretInput::RefreshView(const FString& InSecret)
{
	TextBlock_MySecret->SetText(InSecret.IsEmpty() ? C4Type::GetEmptySecretText() : FText::FromString(InSecret));
}
