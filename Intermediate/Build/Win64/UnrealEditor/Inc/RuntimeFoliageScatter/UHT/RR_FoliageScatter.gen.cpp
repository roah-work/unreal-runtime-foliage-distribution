// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFoliageScatter/Public/RR_FoliageScatter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRR_FoliageScatter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_ARR_FoliageScatter();
RUNTIMEFOLIAGESCATTER_API UClass* Z_Construct_UClass_ARR_FoliageScatter_NoRegister();
RUNTIMEFOLIAGESCATTER_API UScriptStruct* Z_Construct_UScriptStruct_F_RR_FoliageAssets();
RUNTIMEFOLIAGESCATTER_API UScriptStruct* Z_Construct_UScriptStruct_F_RR_TransformsArray();
UPackage* Z_Construct_UPackage__Script_RuntimeFoliageScatter();
// End Cross Module References

// Begin ScriptStruct F_RR_FoliageAssets
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct__RR_FoliageAssets;
class UScriptStruct* F_RR_FoliageAssets::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct__RR_FoliageAssets.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct__RR_FoliageAssets.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_F_RR_FoliageAssets, (UObject*)Z_Construct_UPackage__Script_RuntimeFoliageScatter(), TEXT("_RR_FoliageAssets"));
	}
	return Z_Registration_Info_UScriptStruct__RR_FoliageAssets.OuterSingleton;
}
template<> RUNTIMEFOLIAGESCATTER_API UScriptStruct* StaticStruct<F_RR_FoliageAssets>()
{
	return F_RR_FoliageAssets::StaticStruct();
}
struct Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageMesh_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_1_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_2_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Category;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius_1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius_2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F_RR_FoliageAssets>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::NewProp_FoliageMesh = { "FoliageMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_RR_FoliageAssets, FoliageMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageMesh_MetaData), NewProp_FoliageMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_RR_FoliageAssets, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::NewProp_Radius_1 = { "Radius_1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_RR_FoliageAssets, Radius_1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_1_MetaData), NewProp_Radius_1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::NewProp_Radius_2 = { "Radius_2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_RR_FoliageAssets, Radius_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_2_MetaData), NewProp_Radius_2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_RR_FoliageAssets, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::NewProp_FoliageMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::NewProp_Radius_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::NewProp_Radius_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFoliageScatter,
	nullptr,
	&NewStructOps,
	"_RR_FoliageAssets",
	Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::PropPointers),
	sizeof(F_RR_FoliageAssets),
	alignof(F_RR_FoliageAssets),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_F_RR_FoliageAssets()
{
	if (!Z_Registration_Info_UScriptStruct__RR_FoliageAssets.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct__RR_FoliageAssets.InnerSingleton, Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct__RR_FoliageAssets.InnerSingleton;
}
// End ScriptStruct F_RR_FoliageAssets

// Begin ScriptStruct F_RR_TransformsArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct__RR_TransformsArray;
class UScriptStruct* F_RR_TransformsArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct__RR_TransformsArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct__RR_TransformsArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_F_RR_TransformsArray, (UObject*)Z_Construct_UPackage__Script_RuntimeFoliageScatter(), TEXT("_RR_TransformsArray"));
	}
	return Z_Registration_Info_UScriptStruct__RR_TransformsArray.OuterSingleton;
}
template<> RUNTIMEFOLIAGESCATTER_API UScriptStruct* StaticStruct<F_RR_TransformsArray>()
{
	return F_RR_TransformsArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_F_RR_TransformsArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F_RR_TransformsArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_F_RR_TransformsArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFoliageScatter,
	nullptr,
	&NewStructOps,
	"_RR_TransformsArray",
	nullptr,
	0,
	sizeof(F_RR_TransformsArray),
	alignof(F_RR_TransformsArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_RR_TransformsArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_F_RR_TransformsArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_F_RR_TransformsArray()
{
	if (!Z_Registration_Info_UScriptStruct__RR_TransformsArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct__RR_TransformsArray.InnerSingleton, Z_Construct_UScriptStruct_F_RR_TransformsArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct__RR_TransformsArray.InnerSingleton;
}
// End ScriptStruct F_RR_TransformsArray

// Begin Class ARR_FoliageScatter Function Regenerate
struct Z_Construct_UFunction_ARR_FoliageScatter_Regenerate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARR_FoliageScatter_Regenerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARR_FoliageScatter, nullptr, "Regenerate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARR_FoliageScatter_Regenerate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARR_FoliageScatter_Regenerate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARR_FoliageScatter_Regenerate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARR_FoliageScatter_Regenerate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARR_FoliageScatter::execRegenerate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Regenerate();
	P_NATIVE_END;
}
// End Class ARR_FoliageScatter Function Regenerate

// Begin Class ARR_FoliageScatter
void ARR_FoliageScatter::StaticRegisterNativesARR_FoliageScatter()
{
	UClass* Class = ARR_FoliageScatter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Regenerate", &ARR_FoliageScatter::execRegenerate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARR_FoliageScatter);
UClass* Z_Construct_UClass_ARR_FoliageScatter_NoRegister()
{
	return ARR_FoliageScatter::StaticClass();
}
struct Z_Construct_UClass_ARR_FoliageScatter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RR_FoliageScatter.h" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneBoundsMesh_MetaData[] = {
		{ "Category", "RR_FoliageScatter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HISM_Bushes_MetaData[] = {
		{ "Category", "RR_FoliageScatter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HISM_Trees_MetaData[] = {
		{ "Category", "RR_FoliageScatter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunCustomConstructionScript_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnScale_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_numIterations_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightfieldTexture_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_With_Foliage_Texture_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageTexture_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BushTransforms_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeTransforms_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_FoliageAssets_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_interFoliage_dist_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_Z_Scale_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_Z_Offset_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridMap_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cell_Size_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_Size_MetaData[] = {
		{ "Category", "DEFAULTS" },
		{ "ModuleRelativePath", "Public/RR_FoliageScatter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneBoundsMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HISM_Bushes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HISM_Trees;
	static void NewProp_RunCustomConstructionScript_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RunCustomConstructionScript;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numIterations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightfieldTexture;
	static void NewProp_Mask_With_Foliage_Texture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Mask_With_Foliage_Texture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BushTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BushTransforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TreeTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TreeTransforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source_FoliageAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Source_FoliageAssets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_interFoliage_dist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Landscape_Z_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Landscape_Z_Offset;
	static void NewProp_RandomSeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GridMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cell_Size;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Grid_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARR_FoliageScatter_Regenerate, "Regenerate" }, // 3785149179
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARR_FoliageScatter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_PlaneBoundsMesh = { "PlaneBoundsMesh", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, PlaneBoundsMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneBoundsMesh_MetaData), NewProp_PlaneBoundsMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_HISM_Bushes = { "HISM_Bushes", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, HISM_Bushes), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HISM_Bushes_MetaData), NewProp_HISM_Bushes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_HISM_Trees = { "HISM_Trees", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, HISM_Trees), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HISM_Trees_MetaData), NewProp_HISM_Trees_MetaData) };
void Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_RunCustomConstructionScript_SetBit(void* Obj)
{
	((ARR_FoliageScatter*)Obj)->RunCustomConstructionScript = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_RunCustomConstructionScript = { "RunCustomConstructionScript", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARR_FoliageScatter), &Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_RunCustomConstructionScript_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunCustomConstructionScript_MetaData), NewProp_RunCustomConstructionScript_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_SpawnScale = { "SpawnScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, SpawnScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnScale_MetaData), NewProp_SpawnScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_numIterations = { "numIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, numIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_numIterations_MetaData), NewProp_numIterations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_HeightfieldTexture = { "HeightfieldTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, HeightfieldTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightfieldTexture_MetaData), NewProp_HeightfieldTexture_MetaData) };
void Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Mask_With_Foliage_Texture_SetBit(void* Obj)
{
	((ARR_FoliageScatter*)Obj)->Mask_With_Foliage_Texture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Mask_With_Foliage_Texture = { "Mask_With_Foliage_Texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARR_FoliageScatter), &Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Mask_With_Foliage_Texture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_With_Foliage_Texture_MetaData), NewProp_Mask_With_Foliage_Texture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_FoliageTexture = { "FoliageTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, FoliageTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageTexture_MetaData), NewProp_FoliageTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_BushTransforms_Inner = { "BushTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_BushTransforms = { "BushTransforms", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, BushTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BushTransforms_MetaData), NewProp_BushTransforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_TreeTransforms_Inner = { "TreeTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_TreeTransforms = { "TreeTransforms", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, TreeTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeTransforms_MetaData), NewProp_TreeTransforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Source_FoliageAssets_Inner = { "Source_FoliageAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_F_RR_FoliageAssets, METADATA_PARAMS(0, nullptr) }; // 3395242441
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Source_FoliageAssets = { "Source_FoliageAssets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, Source_FoliageAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_FoliageAssets_MetaData), NewProp_Source_FoliageAssets_MetaData) }; // 3395242441
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_interFoliage_dist = { "interFoliage_dist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, interFoliage_dist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_interFoliage_dist_MetaData), NewProp_interFoliage_dist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Landscape_Z_Scale = { "Landscape_Z_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, Landscape_Z_Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Landscape_Z_Scale_MetaData), NewProp_Landscape_Z_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Landscape_Z_Offset = { "Landscape_Z_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, Landscape_Z_Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Landscape_Z_Offset_MetaData), NewProp_Landscape_Z_Offset_MetaData) };
void Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_RandomSeed_SetBit(void* Obj)
{
	((ARR_FoliageScatter*)Obj)->RandomSeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARR_FoliageScatter), &Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_RandomSeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_GridMap_ValueProp = { "GridMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_F_RR_TransformsArray, METADATA_PARAMS(0, nullptr) }; // 1121517268
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_GridMap_Key_KeyProp = { "GridMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_GridMap = { "GridMap", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, GridMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridMap_MetaData), NewProp_GridMap_MetaData) }; // 1121517268
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Cell_Size = { "Cell_Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, Cell_Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cell_Size_MetaData), NewProp_Cell_Size_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Grid_Size = { "Grid_Size", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARR_FoliageScatter, Grid_Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_Size_MetaData), NewProp_Grid_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARR_FoliageScatter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_PlaneBoundsMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_HISM_Bushes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_HISM_Trees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_RunCustomConstructionScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_SpawnScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_numIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_HeightfieldTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Mask_With_Foliage_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_FoliageTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_BushTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_BushTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_TreeTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_TreeTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Source_FoliageAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Source_FoliageAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_RandomStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_interFoliage_dist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Landscape_Z_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Landscape_Z_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_GridMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_GridMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_GridMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Cell_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARR_FoliageScatter_Statics::NewProp_Grid_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARR_FoliageScatter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARR_FoliageScatter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFoliageScatter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARR_FoliageScatter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARR_FoliageScatter_Statics::ClassParams = {
	&ARR_FoliageScatter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARR_FoliageScatter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARR_FoliageScatter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARR_FoliageScatter_Statics::Class_MetaDataParams), Z_Construct_UClass_ARR_FoliageScatter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARR_FoliageScatter()
{
	if (!Z_Registration_Info_UClass_ARR_FoliageScatter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARR_FoliageScatter.OuterSingleton, Z_Construct_UClass_ARR_FoliageScatter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARR_FoliageScatter.OuterSingleton;
}
template<> RUNTIMEFOLIAGESCATTER_API UClass* StaticClass<ARR_FoliageScatter>()
{
	return ARR_FoliageScatter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARR_FoliageScatter);
ARR_FoliageScatter::~ARR_FoliageScatter() {}
// End Class ARR_FoliageScatter

// Begin Registration
struct Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Public_RR_FoliageScatter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ F_RR_FoliageAssets::StaticStruct, Z_Construct_UScriptStruct_F_RR_FoliageAssets_Statics::NewStructOps, TEXT("_RR_FoliageAssets"), &Z_Registration_Info_UScriptStruct__RR_FoliageAssets, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(F_RR_FoliageAssets), 3395242441U) },
		{ F_RR_TransformsArray::StaticStruct, Z_Construct_UScriptStruct_F_RR_TransformsArray_Statics::NewStructOps, TEXT("_RR_TransformsArray"), &Z_Registration_Info_UScriptStruct__RR_TransformsArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(F_RR_TransformsArray), 1121517268U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARR_FoliageScatter, ARR_FoliageScatter::StaticClass, TEXT("ARR_FoliageScatter"), &Z_Registration_Info_UClass_ARR_FoliageScatter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARR_FoliageScatter), 634703039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Public_RR_FoliageScatter_h_779088210(TEXT("/Script/RuntimeFoliageScatter"),
	Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Public_RR_FoliageScatter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Public_RR_FoliageScatter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Public_RR_FoliageScatter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_RuntimeFoliageScatter_Source_RuntimeFoliageScatter_Public_RR_FoliageScatter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
