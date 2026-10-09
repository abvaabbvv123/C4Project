// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/C4ChatInput.h"
#include "Components/EditableTextBox.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"
#include "Blueprint/WidgetTree.h"
#include "GameSystem/C4PlayerController.h"

void UC4ChatInput::NativeConstruct()
{
	Super::NativeConstruct();
	EditableTextBox_ChatInput->OnTextCommitted.AddUniqueDynamic(this, &ThisClass::OnChatInputTextCommitted);
}
void UC4ChatInput::NativeDestruct()
{
	EditableTextBox_ChatInput->OnTextCommitted.RemoveDynamic(this, &ThisClass::OnChatInputTextCommitted);
	Super::NativeDestruct();
}
void UC4ChatInput::NativePreConstruct()
{
	Super::NativePreConstruct();
	EditableTextBox_ChatInput->SetHintText(C4Type::GetInputHintText());
}
void UC4ChatInput::BindPlayerController(AC4PlayerController* InPC)
{
	InPC->OnChatMessageReceived.AddUniqueDynamic(this, &ThisClass::HandleChatMessageReceived);
}

void UC4ChatInput::UnbindAll()
{
	if (BoundPC.IsValid()) BoundPC->OnChatMessageReceived.RemoveDynamic(this, &ThisClass::HandleChatMessageReceived);
}

void UC4ChatInput::OnChatInputTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	if (CommitMethod != ETextCommit::OnEnter || !BoundPC.IsValid()) return;

	const FString Input = Text.ToString().TrimStartAndEnd();
	EditableTextBox_ChatInput->SetText(FText::GetEmpty());

	if (!Input.IsEmpty())
	{
		BoundPC->SubmitChatInput(Input);
	}
}
void UC4ChatInput::HandleChatMessageReceived(const FString& InMessage)
{
	UTextBlock* Line = nullptr;

	if (ScrollBox_ChatLog->GetChildrenCount() >= MaxChatLines)
	{
		Line = Cast<UTextBlock>(ScrollBox_ChatLog->GetChildAt(0));   // reuse oldest line
		ScrollBox_ChatLog->RemoveChildAt(0);
	}
	if (!Line)
	{
		Line = WidgetTree->ConstructWidget<UTextBlock>();
		Line->SetAutoWrapText(true);
		if (ChatFont.HasValidFont()) Line->SetFont(ChatFont);
	}

	Line->SetText(FText::FromString(InMessage));
	ScrollBox_ChatLog->AddChild(Line);
	ScrollBox_ChatLog->ScrollToEnd();
}