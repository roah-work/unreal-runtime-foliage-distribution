// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFoliageScatter/Public/RuntimeFoliageScatterEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeFoliageScatterEditorMode() {}

// Begin Cross Module References
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_URuntimeFoliageScatterEditorMode();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_URuntimeFoliageScatterEditorMode_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UEdMode();
UPackage* Z_Construct_UPackage__Script_RuntimeFoliageScatter();
// End Cross Module References

// Begin Class URuntimeFoliageScatterEditorMode
void URuntimeFoliageScatterEditorMode::StaticRegisterNativesURuntimeFoliageScatterEditorMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeFoliageScatterEditorMode);
UClass* Z_Construct_UClass_URuntimeFoliageScatterEditorMode_NoRegister()
{
	return URuntimeFoliageScatterEditorMode::StaticClass();
}
struct Z_Construct_UClass_URuntimeFoliageScatterEditorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class provides an example of how to extend a UEdMode to add some simple tools\n * using the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\n * forward events to a UEdModeInteractiveToolsContext instance, which\n * has all the logic for interacting with the InputRouter, ToolManager, etc.\n * The functions provided here are the minimum to get started inserting some custom behavior.\n * Take a look at the UEdMode markup for more extensibility options.\n */" },
#endif
		{ "IncludePath", "RuntimeFoliageScatterEditorMode.h" },
		{ "ModuleRelativePath", "Public/RuntimeFoliageScatterEditorMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class provides an example of how to extend a UEdMode to add some simple tools\nusing the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\nforward events to a UEdModeInteractiveToolsContext instance, which\nhas all the logic for interacting with the InputRouter, ToolManager, etc.\nThe functions provided here are the minimum to get started inserting some custom behavior.\nTake a look at the UEdMode markup for more extensibility options." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeFoliageScatterEditorMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URuntimeFoliageScatterEditorMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdMode,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFoliageScatter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterEditorMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeFoliageScatterEditorMode_Statics::ClassParams = {
	&URuntimeFoliageScatterEditorMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterEditorMode_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeFoliageScatterEditorMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeFoliageScatterEditorMode()
{
	if (!Z_Registration_Info_UClass_URuntimeFoliageScatterEditorMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeFoliageScatterEditorMode.OuterSingleton, Z_Construct_UClass_URuntimeFoliageScatterEditorMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeFoliageScatterEditorMode.OuterSingleton;
}
template<> RUNTIMEFOLIAGESCATTER_API UClass* StaticClass<URuntimeFoliageScatterEditorMode>()
{
	return URuntimeFoliageScatterEditorMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeFoliageScatterEditorMode);
// End Class URuntimeFoliageScatterEditorMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Public_RuntimeFoliageScatterEditorMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeFoliageScatterEditorMode, URuntimeFoliageScatterEditorMode::StaticClass, TEXT("URuntimeFoliageScatterEditorMode"), &Z_Registration_Info_UClass_URuntimeFoliageScatterEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeFoliageScatterEditorMode), 952688739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Public_RuntimeFoliageScatterEditorMode_h_1666274721(TEXT("/Script/RuntimeFoliageScatter"),
	Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Public_RuntimeFoliageScatterEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Public_RuntimeFoliageScatterEditorMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
