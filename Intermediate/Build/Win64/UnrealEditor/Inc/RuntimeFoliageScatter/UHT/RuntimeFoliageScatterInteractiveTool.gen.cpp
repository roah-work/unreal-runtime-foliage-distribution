// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFoliageScatter/Private/Tools/RuntimeFoliageScatterInteractiveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeFoliageScatterInteractiveTool() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_NoRegister();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolBuilder();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolBuilder_NoRegister();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_RuntimeFoliageScatter();
// End Cross Module References

// Begin Class URuntimeFoliageScatterInteractiveToolBuilder
void URuntimeFoliageScatterInteractiveToolBuilder::StaticRegisterNativesURuntimeFoliageScatterInteractiveToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeFoliageScatterInteractiveToolBuilder);
UClass* Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolBuilder_NoRegister()
{
	return URuntimeFoliageScatterInteractiveToolBuilder::StaticClass();
}
struct Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Builder for URuntimeFoliageScatterInteractiveTool\n */" },
#endif
		{ "IncludePath", "Tools/RuntimeFoliageScatterInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/RuntimeFoliageScatterInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builder for URuntimeFoliageScatterInteractiveTool" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeFoliageScatterInteractiveToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFoliageScatter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolBuilder_Statics::ClassParams = {
	&URuntimeFoliageScatterInteractiveToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolBuilder()
{
	if (!Z_Registration_Info_UClass_URuntimeFoliageScatterInteractiveToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeFoliageScatterInteractiveToolBuilder.OuterSingleton, Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeFoliageScatterInteractiveToolBuilder.OuterSingleton;
}
template<> RUNTIMEFOLIAGESCATTER_API UClass* StaticClass<URuntimeFoliageScatterInteractiveToolBuilder>()
{
	return URuntimeFoliageScatterInteractiveToolBuilder::StaticClass();
}
URuntimeFoliageScatterInteractiveToolBuilder::URuntimeFoliageScatterInteractiveToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeFoliageScatterInteractiveToolBuilder);
URuntimeFoliageScatterInteractiveToolBuilder::~URuntimeFoliageScatterInteractiveToolBuilder() {}
// End Class URuntimeFoliageScatterInteractiveToolBuilder

// Begin Class URuntimeFoliageScatterInteractiveToolProperties
void URuntimeFoliageScatterInteractiveToolProperties::StaticRegisterNativesURuntimeFoliageScatterInteractiveToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeFoliageScatterInteractiveToolProperties);
UClass* Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_NoRegister()
{
	return URuntimeFoliageScatterInteractiveToolProperties::StaticClass();
}
struct Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Property set for the URuntimeFoliageScatterInteractiveTool\n */" },
#endif
		{ "IncludePath", "Tools/RuntimeFoliageScatterInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/RuntimeFoliageScatterInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Property set for the URuntimeFoliageScatterInteractiveTool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First point of measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/RuntimeFoliageScatterInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First point of measurement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Second point of measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/RuntimeFoliageScatterInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Second point of measurement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current distance measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/RuntimeFoliageScatterInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current distance measurement" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeFoliageScatterInteractiveToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeFoliageScatterInteractiveToolProperties, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeFoliageScatterInteractiveToolProperties, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPoint_MetaData), NewProp_EndPoint_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeFoliageScatterInteractiveToolProperties, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::NewProp_EndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFoliageScatter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::ClassParams = {
	&URuntimeFoliageScatterInteractiveToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties()
{
	if (!Z_Registration_Info_UClass_URuntimeFoliageScatterInteractiveToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeFoliageScatterInteractiveToolProperties.OuterSingleton, Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeFoliageScatterInteractiveToolProperties.OuterSingleton;
}
template<> RUNTIMEFOLIAGESCATTER_API UClass* StaticClass<URuntimeFoliageScatterInteractiveToolProperties>()
{
	return URuntimeFoliageScatterInteractiveToolProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeFoliageScatterInteractiveToolProperties);
URuntimeFoliageScatterInteractiveToolProperties::~URuntimeFoliageScatterInteractiveToolProperties() {}
// End Class URuntimeFoliageScatterInteractiveToolProperties

// Begin Class URuntimeFoliageScatterInteractiveTool
void URuntimeFoliageScatterInteractiveTool::StaticRegisterNativesURuntimeFoliageScatterInteractiveTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeFoliageScatterInteractiveTool);
UClass* Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_NoRegister()
{
	return URuntimeFoliageScatterInteractiveTool::StaticClass();
}
struct Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * URuntimeFoliageScatterInteractiveTool is an example Tool that allows the user to measure the \n * distance between two points. The first point is set by click-dragging the mouse, and\n * the second point is set by shift-click-dragging the mouse.\n */" },
#endif
		{ "IncludePath", "Tools/RuntimeFoliageScatterInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/RuntimeFoliageScatterInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URuntimeFoliageScatterInteractiveTool is an example Tool that allows the user to measure the\ndistance between two points. The first point is set by click-dragging the mouse, and\nthe second point is set by shift-click-dragging the mouse." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Properties of the tool are stored here */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/RuntimeFoliageScatterInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Properties of the tool are stored here" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeFoliageScatterInteractiveTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeFoliageScatterInteractiveTool, Properties), Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_Statics::NewProp_Properties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFoliageScatter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_Statics::ClassParams = {
	&URuntimeFoliageScatterInteractiveTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool()
{
	if (!Z_Registration_Info_UClass_URuntimeFoliageScatterInteractiveTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeFoliageScatterInteractiveTool.OuterSingleton, Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeFoliageScatterInteractiveTool.OuterSingleton;
}
template<> RUNTIMEFOLIAGESCATTER_API UClass* StaticClass<URuntimeFoliageScatterInteractiveTool>()
{
	return URuntimeFoliageScatterInteractiveTool::StaticClass();
}
URuntimeFoliageScatterInteractiveTool::URuntimeFoliageScatterInteractiveTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeFoliageScatterInteractiveTool);
URuntimeFoliageScatterInteractiveTool::~URuntimeFoliageScatterInteractiveTool() {}
// End Class URuntimeFoliageScatterInteractiveTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Private_Tools_RuntimeFoliageScatterInteractiveTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolBuilder, URuntimeFoliageScatterInteractiveToolBuilder::StaticClass, TEXT("URuntimeFoliageScatterInteractiveToolBuilder"), &Z_Registration_Info_UClass_URuntimeFoliageScatterInteractiveToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeFoliageScatterInteractiveToolBuilder), 3106273383U) },
		{ Z_Construct_UClass_URuntimeFoliageScatterInteractiveToolProperties, URuntimeFoliageScatterInteractiveToolProperties::StaticClass, TEXT("URuntimeFoliageScatterInteractiveToolProperties"), &Z_Registration_Info_UClass_URuntimeFoliageScatterInteractiveToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeFoliageScatterInteractiveToolProperties), 2746690018U) },
		{ Z_Construct_UClass_URuntimeFoliageScatterInteractiveTool, URuntimeFoliageScatterInteractiveTool::StaticClass, TEXT("URuntimeFoliageScatterInteractiveTool"), &Z_Registration_Info_UClass_URuntimeFoliageScatterInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeFoliageScatterInteractiveTool), 2867152001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Private_Tools_RuntimeFoliageScatterInteractiveTool_h_3608224104(TEXT("/Script/RuntimeFoliageScatter"),
	Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Private_Tools_RuntimeFoliageScatterInteractiveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Private_Tools_RuntimeFoliageScatterInteractiveTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
