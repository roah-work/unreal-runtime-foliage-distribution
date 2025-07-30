// Copyright Epic Games, Inc. All Rights Reserved.

#include "RuntimeFoliageScatterModule.h"
#include "RuntimeFoliageScatterEditorModeCommands.h"

#define LOCTEXT_NAMESPACE "RuntimeFoliageScatterModule"

void FRuntimeFoliageScatterModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FRuntimeFoliageScatterEditorModeCommands::Register();
}

void FRuntimeFoliageScatterModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	FRuntimeFoliageScatterEditorModeCommands::Unregister();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FRuntimeFoliageScatterModule, RuntimeFoliageScatterEditorMode)