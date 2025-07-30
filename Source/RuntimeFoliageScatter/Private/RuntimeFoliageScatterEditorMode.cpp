// Copyright Epic Games, Inc. All Rights Reserved.

#include "RuntimeFoliageScatterEditorMode.h"
#include "RuntimeFoliageScatterEditorModeToolkit.h"
#include "EdModeInteractiveToolsContext.h"
#include "InteractiveToolManager.h"
#include "RuntimeFoliageScatterEditorModeCommands.h"


//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
// AddYourTool Step 1 - include the header file for your Tools here
//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
#include "Tools/RuntimeFoliageScatterSimpleTool.h"
#include "Tools/RuntimeFoliageScatterInteractiveTool.h"

// step 2: register a ToolBuilder in FRuntimeFoliageScatterEditorMode::Enter() below


#define LOCTEXT_NAMESPACE "RuntimeFoliageScatterEditorMode"

const FEditorModeID URuntimeFoliageScatterEditorMode::EM_RuntimeFoliageScatterEditorModeId = TEXT("EM_RuntimeFoliageScatterEditorMode");

FString URuntimeFoliageScatterEditorMode::SimpleToolName = TEXT("RuntimeFoliageScatter_ActorInfoTool");
FString URuntimeFoliageScatterEditorMode::InteractiveToolName = TEXT("RuntimeFoliageScatter_MeasureDistanceTool");


URuntimeFoliageScatterEditorMode::URuntimeFoliageScatterEditorMode()
{
	FModuleManager::Get().LoadModule("EditorStyle");

	// appearance and icon in the editing mode ribbon can be customized here
	Info = FEditorModeInfo(URuntimeFoliageScatterEditorMode::EM_RuntimeFoliageScatterEditorModeId,
		LOCTEXT("ModeName", "RuntimeFoliageScatter"),
		FSlateIcon(),
		true);
}


URuntimeFoliageScatterEditorMode::~URuntimeFoliageScatterEditorMode()
{
}


void URuntimeFoliageScatterEditorMode::ActorSelectionChangeNotify()
{
}

void URuntimeFoliageScatterEditorMode::Enter()
{
	UEdMode::Enter();

	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	// AddYourTool Step 2 - register the ToolBuilders for your Tools here.
	// The string name you pass to the ToolManager is used to select/activate your ToolBuilder later.
	//////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////// 
	const FRuntimeFoliageScatterEditorModeCommands& SampleToolCommands = FRuntimeFoliageScatterEditorModeCommands::Get();

	RegisterTool(SampleToolCommands.SimpleTool, SimpleToolName, NewObject<URuntimeFoliageScatterSimpleToolBuilder>(this));
	RegisterTool(SampleToolCommands.InteractiveTool, InteractiveToolName, NewObject<URuntimeFoliageScatterInteractiveToolBuilder>(this));

	// active tool type is not relevant here, we just set to default
	GetToolManager()->SelectActiveToolType(EToolSide::Left, SimpleToolName);
}

void URuntimeFoliageScatterEditorMode::CreateToolkit()
{
	Toolkit = MakeShareable(new FRuntimeFoliageScatterEditorModeToolkit);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> URuntimeFoliageScatterEditorMode::GetModeCommands() const
{
	return FRuntimeFoliageScatterEditorModeCommands::Get().GetCommands();
}

#undef LOCTEXT_NAMESPACE
