// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "RR_FoliageScatter.generated.h"


USTRUCT(BlueprintType)
struct F_RR_FoliageAssets
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	UStaticMesh* FoliageMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	int Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	float Radius_1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	float Radius_2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	FTransform Transform;

	F_RR_FoliageAssets()
	{
		FoliageMesh = nullptr;
		Category = 0;
		Radius_1 = 0.0f;
		Radius_2 = 0.0f;
		Transform = FTransform(FRotator(0.0f), FVector(0.0f), FVector(1.0f));
	}
};


USTRUCT(BlueprintType)
struct F_RR_TransformsArray
{
	GENERATED_BODY()
	TArray<FTransform> transforms;
};

UCLASS()
class RUNTIMEFOLIAGESCATTER_API ARR_FoliageScatter : public AActor
{
	GENERATED_BODY()
	

public:
	// Sets default values for this actor's properties
	ARR_FoliageScatter();

protected:

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* PlaneBoundsMesh;

	UPROPERTY(EditDefaultsOnly)
	UHierarchicalInstancedStaticMeshComponent* HISM_Bushes;

	UPROPERTY(EditDefaultsOnly)
	UHierarchicalInstancedStaticMeshComponent* HISM_Trees;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void OnConstruction(const FTransform& transform);
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	bool RunCustomConstructionScript;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	float SpawnScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	int numIterations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	UTexture2D* HeightfieldTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	bool Mask_With_Foliage_Texture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	UTexture2D* FoliageTexture;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = DEFAULTS)
	TArray<FTransform> BushTransforms;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = DEFAULTS)
	TArray<FTransform> TreeTransforms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	TArray<F_RR_FoliageAssets> Source_FoliageAssets;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	FRandomStream RandomStream;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	int Seed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	float interFoliage_dist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	float Landscape_Z_Scale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	float Landscape_Z_Offset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	bool RandomSeed;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	TMap<int, F_RR_TransformsArray> GridMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	int Cell_Size;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = DEFAULTS)
	int Grid_Size;


	FTransform RandomTransform;
	F_RR_FoliageAssets* PickedFoliageAsset;
	FVector SpawnBoundsMin, SpawnBoundsMax;


	UFUNCTION(CallInEditor, Category = DEFAULTS)
	void Regenerate();

	void SetVariableDefaults();
	void setSpawnBounds();
	void ClearAllGenerated();

	FTransform GetRandomTransformInBounds(FVector Min, FVector Max);
	void GetSpawnBounds(FVector& Min, FVector& Max);
	void SpawnInstances();
	F_RR_FoliageAssets* GetRandomAsset(FRandomStream& RandomStream);

	bool isOverlapping(FTransform transform, int cell_index, bool canopy = false);

	void AddTransformToMap(FTransform transform_in, int cell_index);
	void ClearGridMap();
	void GenerateGridMap();
	int GetCellIndex(FTransform transform_in);
	TArray<int> GetNeighbourCellIndices(FTransform transform_in, int native_cell_index);

	void PopulateZFromTexture(UTexture2D* Texture);
	void maskFoliageWithTexture(UTexture2D* Texture);

	void debugPrintGridMapData();
	void debugPrintTextureValues(UTexture2D* Texture);

};

