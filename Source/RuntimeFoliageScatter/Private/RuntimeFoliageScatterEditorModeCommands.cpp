// Copyright Epic Games, Inc. All Rights Reserved.

#include "RuntimeFoliageScatterEditorModeCommands.h"
#include "RuntimeFoliageScatterEditorMode.h"
#include "EditorStyleSet.h"

#define LOCTEXT_NAMESPACE "RuntimeFoliageScatterEditorModeCommands"

FRuntimeFoliageScatterEditorModeCommands::FRuntimeFoliageScatterEditorModeCommands()
	: TCommands<FRuntimeFoliageScatterEditorModeCommands>("RuntimeFoliageScatterEditorMode",
		NSLOCTEXT("RuntimeFoliageScatterEditorMode", "RuntimeFoliageScatterEditorModeCommands", "RuntimeFoliageScatter Editor Mode"),
		NAME_None,
		FEditorStyle::GetStyleSetName())
{
}

void FRuntimeFoliageScatterEditorModeCommands::RegisterCommands()
{
	TArray <TSharedPtr<FUICommandInfo>>& ToolCommands = Commands.FindOrAdd(NAME_Default);

	UI_COMMAND(SimpleTool, "Show Actor Info", "Opens message box with info about a clicked actor", EUserInterfaceActionType::Button, FInputChord());
	ToolCommands.Add(SimpleTool);

	UI_COMMAND(InteractiveTool, "Measure Distance", "Measures distance between 2 points (click to set origin, shift-click to set end point)", EUserInterfaceActionType::ToggleButton, FInputChord());
	ToolCommands.Add(InteractiveTool);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> FRuntimeFoliageScatterEditorModeCommands::GetCommands()
{
	return FRuntimeFoliageScatterEditorModeCommands::Get().Commands;
}

#undef LOCTEXT_NAMESPACE
