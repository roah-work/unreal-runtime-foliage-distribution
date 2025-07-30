// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFoliageScatter/Private/Tools/RuntimeFoliageScatterSimpleTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeFoliageScatterSimpleTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_URuntimeFoliageScatterSimpleTool();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_NoRegister();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_URuntimeFoliageScatterSimpleToolBuilder();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_URuntimeFoliageScatterSimpleToolBuilder_NoRegister();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_RuntimeFoliageScatter();
// End Cross Module References

// Begin Class URuntimeFoliageScatterSimpleToolBuilder
void URuntimeFoliageScatterSimpleToolBuilder::StaticRegisterNativesURuntimeFoliageScatterSimpleToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeFoliageScatterSimpleToolBuilder);
UClass* Z_Construct_UClass_URuntimeFoliageScatterSimpleToolBuilder_NoRegister()
{
	return URuntimeFoliageScatterSimpleToolBuilder::StaticClass();
}
struct Z_Construct_UClass_URuntimeFoliageScatterSimpleToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Builder for URuntimeFoliageScatterSimpleTool\n */" },
#endif
		{ "IncludePath", "Tools/RuntimeFoliageScatterSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/RuntimeFoliageScatterSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builder for URuntimeFoliageScatterSimpleTool" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeFoliageScatterSimpleToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URuntimeFoliageScatterSimpleToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFoliageScatter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterSimpleToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeFoliageScatterSimpleToolBuilder_Statics::ClassParams = {
	&URuntimeFoliageScatterSimpleToolBuilder::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterSimpleToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeFoliageScatterSimpleToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeFoliageScatterSimpleToolBuilder()
{
	if (!Z_Registration_Info_UClass_URuntimeFoliageScatterSimpleToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeFoliageScatterSimpleToolBuilder.OuterSingleton, Z_Construct_UClass_URuntimeFoliageScatterSimpleToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeFoliageScatterSimpleToolBuilder.OuterSingleton;
}
template<> RUNTIMEFOLIAGESCATTER_API UClass* StaticClass<URuntimeFoliageScatterSimpleToolBuilder>()
{
	return URuntimeFoliageScatterSimpleToolBuilder::StaticClass();
}
URuntimeFoliageScatterSimpleToolBuilder::URuntimeFoliageScatterSimpleToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeFoliageScatterSimpleToolBuilder);
URuntimeFoliageScatterSimpleToolBuilder::~URuntimeFoliageScatterSimpleToolBuilder() {}
// End Class URuntimeFoliageScatterSimpleToolBuilder

// Begin Class URuntimeFoliageScatterSimpleToolProperties
void URuntimeFoliageScatterSimpleToolProperties::StaticRegisterNativesURuntimeFoliageScatterSimpleToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeFoliageScatterSimpleToolProperties);
UClass* Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_NoRegister()
{
	return URuntimeFoliageScatterSimpleToolProperties::StaticClass();
}
struct Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Settings UObject for URuntimeFoliageScatterSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\n * which provides an OnModified delegate that the Tool will listen to for changes in property values.\n */" },
#endif
		{ "IncludePath", "Tools/RuntimeFoliageScatterSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/RuntimeFoliageScatterSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings UObject for URuntimeFoliageScatterSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\nwhich provides an OnModified delegate that the Tool will listen to for changes in property values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowExtendedInfo_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown. */" },
#endif
		{ "DisplayName", "Show Extended Info" },
		{ "ModuleRelativePath", "Private/Tools/RuntimeFoliageScatterSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ShowExtendedInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowExtendedInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeFoliageScatterSimpleToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit(void* Obj)
{
	((URuntimeFoliageScatterSimpleToolProperties*)Obj)->ShowExtendedInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics::NewProp_ShowExtendedInfo = { "ShowExtendedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URuntimeFoliageScatterSimpleToolProperties), &Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowExtendedInfo_MetaData), NewProp_ShowExtendedInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics::NewProp_ShowExtendedInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFoliageScatter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics::ClassParams = {
	&URuntimeFoliageScatterSimpleToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties()
{
	if (!Z_Registration_Info_UClass_URuntimeFoliageScatterSimpleToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeFoliageScatterSimpleToolProperties.OuterSingleton, Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeFoliageScatterSimpleToolProperties.OuterSingleton;
}
template<> RUNTIMEFOLIAGESCATTER_API UClass* StaticClass<URuntimeFoliageScatterSimpleToolProperties>()
{
	return URuntimeFoliageScatterSimpleToolProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeFoliageScatterSimpleToolProperties);
URuntimeFoliageScatterSimpleToolProperties::~URuntimeFoliageScatterSimpleToolProperties() {}
// End Class URuntimeFoliageScatterSimpleToolProperties

// Begin Class URuntimeFoliageScatterSimpleTool
void URuntimeFoliageScatterSimpleTool::StaticRegisterNativesURuntimeFoliageScatterSimpleTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeFoliageScatterSimpleTool);
UClass* Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_NoRegister()
{
	return URuntimeFoliageScatterSimpleTool::StaticClass();
}
struct Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * URuntimeFoliageScatterSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\n * clicks left mouse button. All the action is in the ::OnClicked handler.\n */" },
#endif
		{ "IncludePath", "Tools/RuntimeFoliageScatterSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/RuntimeFoliageScatterSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URuntimeFoliageScatterSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\nclicks left mouse button. All the action is in the ::OnClicked handler." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tools/RuntimeFoliageScatterSimpleTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeFoliageScatterSimpleTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeFoliageScatterSimpleTool, Properties), Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_Statics::NewProp_Properties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleClickTool,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFoliageScatter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_Statics::ClassParams = {
	&URuntimeFoliageScatterSimpleTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeFoliageScatterSimpleTool()
{
	if (!Z_Registration_Info_UClass_URuntimeFoliageScatterSimpleTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeFoliageScatterSimpleTool.OuterSingleton, Z_Construct_UClass_URuntimeFoliageScatterSimpleTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeFoliageScatterSimpleTool.OuterSingleton;
}
template<> RUNTIMEFOLIAGESCATTER_API UClass* StaticClass<URuntimeFoliageScatterSimpleTool>()
{
	return URuntimeFoliageScatterSimpleTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeFoliageScatterSimpleTool);
URuntimeFoliageScatterSimpleTool::~URuntimeFoliageScatterSimpleTool() {}
// End Class URuntimeFoliageScatterSimpleTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Private_Tools_RuntimeFoliageScatterSimpleTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeFoliageScatterSimpleToolBuilder, URuntimeFoliageScatterSimpleToolBuilder::StaticClass, TEXT("URuntimeFoliageScatterSimpleToolBuilder"), &Z_Registration_Info_UClass_URuntimeFoliageScatterSimpleToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeFoliageScatterSimpleToolBuilder), 1987852808U) },
		{ Z_Construct_UClass_URuntimeFoliageScatterSimpleToolProperties, URuntimeFoliageScatterSimpleToolProperties::StaticClass, TEXT("URuntimeFoliageScatterSimpleToolProperties"), &Z_Registration_Info_UClass_URuntimeFoliageScatterSimpleToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeFoliageScatterSimpleToolProperties), 4226732896U) },
		{ Z_Construct_UClass_URuntimeFoliageScatterSimpleTool, URuntimeFoliageScatterSimpleTool::StaticClass, TEXT("URuntimeFoliageScatterSimpleTool"), &Z_Registration_Info_UClass_URuntimeFoliageScatterSimpleTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeFoliageScatterSimpleTool), 3560637802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Private_Tools_RuntimeFoliageScatterSimpleTool_h_362505251(TEXT("/Script/RuntimeFoliageScatter"),
	Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Private_Tools_RuntimeFoliageScatterSimpleTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Private_Tools_RuntimeFoliageScatterSimpleTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
