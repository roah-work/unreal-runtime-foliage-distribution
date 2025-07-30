// Copyright Epic Games, Inc. All Rights Reserved.

#include "RuntimeFoliageScatterEditorModeToolkit.h"
#include "RuntimeFoliageScatterEditorMode.h"
#include "Engine/Selection.h"

#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "EditorModeManager.h"

#define LOCTEXT_NAMESPACE "RuntimeFoliageScatterEditorModeToolkit"

FRuntimeFoliageScatterEditorModeToolkit::FRuntimeFoliageScatterEditorModeToolkit()
{
}

void FRuntimeFoliageScatterEditorModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost, TWeakObjectPtr<UEdMode> InOwningMode)
{
	FModeToolkit::Init(InitToolkitHost, InOwningMode);
}

void FRuntimeFoliageScatterEditorModeToolkit::GetToolPaletteNames(TArray<FName>& PaletteNames) const
{
	PaletteNames.Add(NAME_Default);
}


FName FRuntimeFoliageScatterEditorModeToolkit::GetToolkitFName() const
{
	return FName("RuntimeFoliageScatterEditorMode");
}

FText FRuntimeFoliageScatterEditorModeToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("DisplayName", "RuntimeFoliageScatterEditorMode Toolkit");
}

#undef LOCTEXT_NAMESPACE
