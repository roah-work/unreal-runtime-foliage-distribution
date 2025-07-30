// Fill out your copyright notice in the Description page of Project Settings.


#include "RR_FoliageScatter.h"
#include "LandscapeDataAccess.h"
#include "Math/UnrealMathUtility.h"




// Sets default values
ARR_FoliageScatter::ARR_FoliageScatter()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	PlaneBoundsMesh = CreateDefaultSubobject<UStaticMeshComponent>("PlaneBoundsMesh");

	HISM_Bushes = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>("Bushes");
	HISM_Trees = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>("Trees");

	//Call function to set defaults of all initializing variables
	SetVariableDefaults();
	ClearAllGenerated();

	PickedFoliageAsset = nullptr;

	interFoliage_dist = 0.0f;

	// HeightfieldTexture = nullptr;
	// FoliageTexture = nullptr;

}

// Called when the game starts or when spawned
void ARR_FoliageScatter::BeginPlay()
{
	Super::BeginPlay();
	RunCustomConstructionScript = false;
}

// Called every frame
void ARR_FoliageScatter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARR_FoliageScatter::Regenerate()
{
	OnConstruction(GetActorTransform());
}

void ARR_FoliageScatter::SetVariableDefaults()
{
	//Set Default for SpawnBounds as 1, if it is less than 1.
	if (SpawnScale < 10.0f)
	{
		SpawnScale = 10.0f;
	}

	if (Cell_Size < 100)
	{
		Cell_Size = 100;
	}
	if (Landscape_Z_Scale < 1.0)
	{
		Landscape_Z_Scale = 1.0;
	}

	Mask_With_Foliage_Texture = false;

}

void ARR_FoliageScatter::ClearAllGenerated()
{
	BushTransforms.Empty();
	TreeTransforms.Empty();
	HISM_Bushes->ClearInstances();
	HISM_Trees->ClearInstances();
	ClearGridMap();
}

void ARR_FoliageScatter::OnConstruction(const FTransform& transform)
{
	Super::OnConstruction(transform);
	if (RunCustomConstructionScript)
	{
		// UE_LOG(LogTemp, Warning, TEXT("ConstructionScriptTesting!!!"));
		setSpawnBounds();
		ClearAllGenerated();

		if (RandomSeed)
		{
			RandomStream.Initialize(FMath::RandRange(0, 9999));
			Seed = RandomStream.GetInitialSeed();
		}
		else
		{
			RandomStream.Initialize(Seed);
		}

		int cell_index;
		GetSpawnBounds(SpawnBoundsMin, SpawnBoundsMax);

		GenerateGridMap();

		for (int i = 0; i < numIterations; i++)
		{
			RandomTransform = GetRandomTransformInBounds(SpawnBoundsMin, SpawnBoundsMax);
			cell_index = GetCellIndex(RandomTransform);
			PickedFoliageAsset = GetRandomAsset(RandomStream);

			if (PickedFoliageAsset != nullptr)
			{
				if (PickedFoliageAsset->Category == 1)
				{
					//Check for overlaps within just the bush transforms.
					if (!isOverlapping(RandomTransform, cell_index))
					{
						BushTransforms.Add(RandomTransform);
						AddTransformToMap(RandomTransform, cell_index);
					}
				}
				else
				{
					// Check for overlaps with the bush transforms first, with radius 1. 
					// Then check for canopy overlaps, with the tree transforms.
					if (!isOverlapping(RandomTransform, cell_index))
					{
						if (!isOverlapping(RandomTransform, cell_index, true))
						{
							TreeTransforms.Add(RandomTransform);
							AddTransformToMap(RandomTransform, cell_index);
						}
					}
				}
			}
		}

		PopulateZFromTexture(HeightfieldTexture);

		if (Mask_With_Foliage_Texture)
		{
			maskFoliageWithTexture(FoliageTexture);
		}

		SpawnInstances();
		// debugPrintGridMapData();
		// debugPrintTextureValues(HeightfieldTexture);
	}

}

void ARR_FoliageScatter::setSpawnBounds()
{
	if (SpawnScale > 1.0f)
	{
		PlaneBoundsMesh->SetWorldScale3D(FVector(SpawnScale, SpawnScale, 1.0f));
	}
}

FTransform ARR_FoliageScatter::GetRandomTransformInBounds(FVector Min, FVector Max)
{

	float rand_loc_X = RandomStream.FRandRange(Min.X, Max.X);
	float rand_loc_Y = RandomStream.FRandRange(Min.Y, Max.Y);
	float rand_loc_Z = 0.0f;

	float rot_Pitch = 0.0f;
	float rot_Roll = 0.0f;
	float rand_rot_Yaw = RandomStream.FRandRange(0.0f, 360.0f);


	FRotator RandomRotation = { rot_Pitch, rand_rot_Yaw, rot_Roll };

	FVector RandomLocation = { rand_loc_X, rand_loc_Y, rand_loc_Z };


	float rand_scale_xy = RandomStream.FRandRange(0.75f, 1.25f);
	float rand_scale_z = RandomStream.FRandRange(0.95f, 1.05f);
	FVector Scale = { rand_scale_xy, rand_scale_xy, rand_scale_z };


	FTransform RandomTransform_loc = { RandomRotation, RandomLocation, Scale };

	// UE_LOG(LogTemp, Warning, TEXT("Vector: %s"), *RandomTransform.ToString());

	return RandomTransform_loc;
}

void ARR_FoliageScatter::GetSpawnBounds(FVector& Min, FVector& Max)
{
	PlaneBoundsMesh->GetLocalBounds(Min, Max);
	Min *= SpawnScale;
	Max *= SpawnScale;
	UE_LOG(LogTemp, Warning, TEXT("Min: %s and Max: %s"), *Min.ToString(), *Max.ToString());
}

void ARR_FoliageScatter::SpawnInstances()
{
	HISM_Bushes->AddInstances(BushTransforms, false, true);
	HISM_Trees->AddInstances(TreeTransforms, false, true);
}

F_RR_FoliageAssets* ARR_FoliageScatter::GetRandomAsset(FRandomStream& RandomStream_in)
{
	if (!Source_FoliageAssets.IsEmpty())
	{
		int rand = RandomStream_in.RandRange(0, Source_FoliageAssets.Max() - 1);
		return &Source_FoliageAssets[rand];
	}
	else
	{
		return nullptr;
	}

}

bool ARR_FoliageScatter::isOverlapping(FTransform transform, int cell_index, bool canopy)
{

	float radii_sum = Source_FoliageAssets[0].Radius_1 * 2 * 100;
	float dist;

	if (GridMap.Find(cell_index))
	{
		TArray<FTransform> TransformsToCheckWith = GridMap.Find(cell_index)->transforms;

		TArray<int> neighbourCells = GetNeighbourCellIndices(transform, cell_index);

		for (int i = 0; i < neighbourCells.Num(); i++)
		{
			if (GridMap.Find(neighbourCells[i]))
				TransformsToCheckWith.Append(GridMap.Find(neighbourCells[i])->transforms);
		}

		for (int i = 0; i < TransformsToCheckWith.Num(); i++)
		{
			dist = FVector::Dist(TransformsToCheckWith[i].GetTranslation(), transform.GetTranslation());
			dist -= interFoliage_dist;
			if (dist < radii_sum)
			{
				return true;
			}
		}


		if (canopy)
		{
			radii_sum = Source_FoliageAssets[1].Radius_2 * 2 * 100;
			for (int i = 0; i < TransformsToCheckWith.Num(); i++)
			{
				dist = (TransformsToCheckWith[i].GetTranslation() - transform.GetTranslation()).Size();
				dist -= interFoliage_dist;
				if (dist < radii_sum)
				{
					return true;
				}
			}
		}
	}

	return false;
}

void ARR_FoliageScatter::AddTransformToMap(FTransform transform_in, int cell_index)
{

	//Call the function, that takes in the transform , and returns the cell index on the grid.

	F_RR_TransformsArray* grid_item_transforms_array = GridMap.Find(cell_index);

	if (grid_item_transforms_array == nullptr)
	{
		F_RR_TransformsArray new_loc_transform;
		new_loc_transform.transforms.Add(transform_in);
		GridMap.Add(cell_index, new_loc_transform);
		// UE_LOG(LogTemp, Warning, TEXT("Transform: %s is added as first element."), *transform_in.ToString());
		return;
	}

	grid_item_transforms_array->transforms.Add(transform_in);
	// GridMap.Add(index, *grid_item_transforms_array);

	// UE_LOG(LogTemp, Warning, TEXT("Transform: %s is being appended."), *transform_in.ToString());
}

void ARR_FoliageScatter::ClearGridMap()
{
	// for(int i = 0; i <GridMap.Num(); i++)
	// {
	// 	for(int j = 0; j < GridMap[i].transforms.Num(); j++)
	// 	{
	// 		GridMap[i].transforms.Empty();
	// 	}
	// }
	GridMap.Empty();
}

void ARR_FoliageScatter::GenerateGridMap()
{
	Grid_Size = (SpawnBoundsMax.X * 2) / Cell_Size;
	// UE_LOG(LogTemp, Warning, TEXT("SpawnBoundsMax: %s, Cell_Size: %d and Grid_Size: %d"), *SpawnBoundsMax.ToString(), Cell_Size, Grid_Size);
	F_RR_TransformsArray new_loc_transform;
	new_loc_transform.transforms.Empty();

	for (int i = 0; i < Grid_Size; i++)
	{
		for (int j = 0; j < Grid_Size; j++)
		{
			FTransform loc_transform = FTransform(FRotator(0.0f), FVector(0.0f, 0.0f, 0.0f), FVector(1.0f));
			new_loc_transform.transforms.Add(loc_transform);
			GridMap.Add(i * Grid_Size + j, new_loc_transform);
			new_loc_transform.transforms.Empty();
			// UE_LOG(LogTemp, Warning, TEXT("Transform: %s"), *GridMap.Find(i*Grid_Size+j)->transforms[0].ToString());
		}
	}
}

int ARR_FoliageScatter::GetCellIndex(FTransform transform_in)
{
	FVector spawn_location = transform_in.GetTranslation();

	spawn_location += SpawnBoundsMax;
	spawn_location /= Cell_Size;

	int cell_index = abs(FMath::TruncToInt(spawn_location.X) + FMath::TruncToInt(spawn_location.Y) * Grid_Size);

	// UE_LOG(LogTemp, Warning, TEXT("Transform: %s is Cell Index %d."), *transform_in.ToString(), cell_index);

	return cell_index;
}

TArray<int> ARR_FoliageScatter::GetNeighbourCellIndices(FTransform transform_in, int native_cell_index)
{
	TArray<int> neighbourCells;
	neighbourCells.Empty();

	bool Left = false;
	bool Right = false;
	bool Top = false;
	bool Bottom = false;


	FVector spawn_location = transform_in.GetTranslation();

	spawn_location += SpawnBoundsMax;
	float x_proximity = abs(fmod(spawn_location.X, Cell_Size)) / Cell_Size;
	float y_proximity = abs(fmod(spawn_location.Y, Cell_Size)) / Cell_Size;

	// UE_LOG(LogTemp, Warning, TEXT("Cell Index: %d, X: %f, Y: %f"), native_cell_index, x_proximity, y_proximity);

	if (x_proximity < 0.5)
		Left = true;
	else
		Right = true;

	if (y_proximity < 0.5)
		Top = true;
	else
		Bottom = true;



	//Left Cell
	if (Left)
		if (native_cell_index % Grid_Size != 0)
			neighbourCells.Add(native_cell_index - 1);

	//Right Cell
	if (Right)
		if ((native_cell_index + 1) % Grid_Size != 0)
			neighbourCells.Add(native_cell_index + 1);

	//Top Cell
	if (Top)
		if ((native_cell_index - Grid_Size) >= 0)
			neighbourCells.Add(native_cell_index - Grid_Size);

	//Bottom Cell
	if (Bottom)
		if ((native_cell_index + Grid_Size) < Grid_Size * Grid_Size)
			neighbourCells.Add(native_cell_index + Grid_Size);

	//Top Left
	if (Top || Left)
		if ((native_cell_index % Grid_Size) != 0 && (native_cell_index - Grid_Size) >= 0)
			neighbourCells.Add(native_cell_index - Grid_Size - 1);

	//Top Right
	if (Top || Right)
		if (((native_cell_index + 1) % Grid_Size) != 0 && (native_cell_index - Grid_Size) >= 0)
			neighbourCells.Add(native_cell_index - Grid_Size + 1);

	//Bottom Left
	if (Bottom || Left)
		if ((native_cell_index % Grid_Size) != 0 && (native_cell_index + Grid_Size) < Grid_Size * Grid_Size)
			neighbourCells.Add(native_cell_index + Grid_Size - 1);

	//Bottom Right
	if (Bottom || Right)
		if ((native_cell_index + 1) % Grid_Size != 0 && (native_cell_index + Grid_Size) < Grid_Size * Grid_Size)
			neighbourCells.Add(native_cell_index + Grid_Size - 1);

	return neighbourCells;

}

void ARR_FoliageScatter::PopulateZFromTexture(UTexture2D* Texture)
{
	float x_coord_in;
	float y_coord_in;
	float z_coord;

	int32 x_coord;
	int32 y_coord;

	uint16 pixel_Value;

	if (Texture != nullptr)
	{
		const void* ptr = Texture->GetPlatformData()->Mips[0].BulkData.LockReadOnly();
		if (ptr != nullptr)
		{
			const FColor* ImageData = static_cast<const FColor*>(ptr);
			if (ImageData != nullptr)
			{
				for (int i = 0; i < BushTransforms.Num(); i++)
				{
					x_coord_in = FMath::GetMappedRangeValueClamped(FVector2f(SpawnBoundsMin.X / 100, SpawnBoundsMax.X / 100), FVector2f(0.0f, Texture->GetSizeX()), BushTransforms[i].GetTranslation().X / 100);
					y_coord_in = FMath::GetMappedRangeValueClamped(FVector2f(SpawnBoundsMin.Y / 100, SpawnBoundsMax.X / 100), FVector2f(0.0f, Texture->GetSizeY()), BushTransforms[i].GetTranslation().Y / 100);

					x_coord = static_cast<int32>(x_coord_in);
					y_coord = static_cast<int32>(y_coord_in);

					FColor PixelColor = ImageData[y_coord * Texture->GetSizeX() + x_coord];
					pixel_Value = (PixelColor.R << 8) + PixelColor.G;
					z_coord = static_cast<float>(pixel_Value);
					z_coord = FMath::GetMappedRangeValueClamped(FVector2f(0, 65535.0f), FVector2f(-256.0f, 256.0f), z_coord);
					z_coord = (z_coord * Landscape_Z_Scale) + Landscape_Z_Offset;
					BushTransforms[i].SetTranslation(FVector(BushTransforms[i].GetTranslation().X, BushTransforms[i].GetTranslation().Y, z_coord));
				}
				for (int i = 0; i < TreeTransforms.Num(); i++)
				{
					x_coord_in = FMath::GetMappedRangeValueClamped(FVector2f(SpawnBoundsMin.X / 100, SpawnBoundsMax.X / 100), FVector2f(0.0f, Texture->GetSizeX()), TreeTransforms[i].GetTranslation().X / 100);
					y_coord_in = FMath::GetMappedRangeValueClamped(FVector2f(SpawnBoundsMin.Y / 100, SpawnBoundsMax.X / 100), FVector2f(0.0f, Texture->GetSizeY()), TreeTransforms[i].GetTranslation().Y / 100);

					x_coord = static_cast<int32>(x_coord_in);
					y_coord = static_cast<int32>(y_coord_in);

					FColor PixelColor = ImageData[y_coord * Texture->GetSizeX() + x_coord];
					pixel_Value = (PixelColor.R << 8) + PixelColor.G;
					z_coord = static_cast<float>(pixel_Value);
					z_coord = FMath::GetMappedRangeValueClamped(FVector2f(0, 65535.0f), FVector2f(-256.0f, 256.0f), z_coord);
					z_coord = (z_coord * Landscape_Z_Scale) + Landscape_Z_Offset;
					TreeTransforms[i].SetTranslation(FVector(TreeTransforms[i].GetTranslation().X, TreeTransforms[i].GetTranslation().Y, z_coord));
				}
			}
		}
		Texture->GetPlatformData()->Mips[0].BulkData.Unlock();
	}
}

void ARR_FoliageScatter::maskFoliageWithTexture(UTexture2D* Texture)
{
	float x_coord_in;
	float y_coord_in;
	float z_coord;

	int32 x_coord;
	int32 y_coord;

	uint16 pixel_Value;

	TArray<FTransform> maskedBushTransforms;
	TArray<FTransform> maskedTreeTransforms;

	if (Texture != nullptr)
	{
		const void* ptr = Texture->GetPlatformData()->Mips[0].BulkData.LockReadOnly();
		if (ptr != nullptr)
		{
			const FColor* ImageData = static_cast<const FColor*>(ptr);
			if (ImageData != nullptr)
			{

				for (int i = 0; i < BushTransforms.Num(); i++)
				{
					x_coord_in = FMath::GetMappedRangeValueClamped(FVector2f(SpawnBoundsMin.X / 100, SpawnBoundsMax.X / 100), FVector2f(0.0f, Texture->GetSizeX()), BushTransforms[i].GetTranslation().X / 100);
					y_coord_in = FMath::GetMappedRangeValueClamped(FVector2f(SpawnBoundsMin.Y / 100, SpawnBoundsMax.X / 100), FVector2f(0.0f, Texture->GetSizeY()), BushTransforms[i].GetTranslation().Y / 100);

					x_coord = static_cast<int32>(x_coord_in);
					y_coord = static_cast<int32>(y_coord_in);

					FColor PixelColor = ImageData[y_coord * Texture->GetSizeX() + x_coord];
					pixel_Value = (PixelColor.R << 8) + PixelColor.G;
					z_coord = static_cast<float>(pixel_Value);
					z_coord = FMath::GetMappedRangeValueClamped(FVector2f(0, 65535.0f), FVector2f(0.0f, 1.0f), z_coord);
					// UE_LOG(LogTemp, Warning, TEXT("PixelValue: %f"), z_coord);
					if (z_coord == 1.0)
					{
						maskedBushTransforms.Add(BushTransforms[i]);
					}
				}
				BushTransforms = maskedBushTransforms;

				for (int i = 0; i < TreeTransforms.Num(); i++)
				{
					x_coord_in = FMath::GetMappedRangeValueClamped(FVector2f(SpawnBoundsMin.X / 100, SpawnBoundsMax.X / 100), FVector2f(0.0f, Texture->GetSizeX()), TreeTransforms[i].GetTranslation().X / 100);
					y_coord_in = FMath::GetMappedRangeValueClamped(FVector2f(SpawnBoundsMin.Y / 100, SpawnBoundsMax.X / 100), FVector2f(0.0f, Texture->GetSizeY()), TreeTransforms[i].GetTranslation().Y / 100);

					x_coord = static_cast<int32>(x_coord_in);
					y_coord = static_cast<int32>(y_coord_in);

					FColor PixelColor = ImageData[y_coord * Texture->GetSizeX() + x_coord];
					pixel_Value = (PixelColor.R << 8) + PixelColor.G;
					z_coord = static_cast<float>(pixel_Value);
					z_coord = FMath::GetMappedRangeValueClamped(FVector2f(0, 65535.0f), FVector2f(0.0f, 1.0f), z_coord);
					// UE_LOG(LogTemp, Warning, TEXT("PixelValue: %f"), z_coord);
					if (z_coord == 1.0f)
					{
						maskedTreeTransforms.Add(TreeTransforms[i]);
					}
				}

				TreeTransforms = maskedTreeTransforms;
			}
		}
		Texture->GetPlatformData()->Mips[0].BulkData.Unlock();
	}
}

void ARR_FoliageScatter::debugPrintGridMapData()
{
	TArray<int> Keys;
	GridMap.GetKeys(Keys);

	for (int i = 0; i < Keys.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("Values of %d in Gridmap..."), Keys[i]);
		F_RR_TransformsArray* grid_item = GridMap.Find(Keys[i]);
		for (int j = 0; j < grid_item->transforms.Num(); j++)
		{
			UE_LOG(LogTemp, Warning, TEXT("Transform: %s"), *grid_item->transforms[j].ToString());
		}
	}
}

void ARR_FoliageScatter::debugPrintTextureValues(UTexture2D* Texture)
{

	const FColor* FormatedImageData = static_cast<const FColor*>(Texture->GetPlatformData()->Mips[0].BulkData.LockReadOnly());

	for (int32 X = 0; X < Texture->GetSizeX(); X++)
	{
		for (int32 Y = 0; Y < Texture->GetSizeY(); Y++)
		{
			FColor PixelColor = FormatedImageData[Y * Texture->GetSizeX() + X];
			if (PixelColor.R != 0)
			{
				UE_LOG(LogTemp, Warning, TEXT("Texture PixelValue at: %d, %d is: %s"), X, Y, *PixelColor.ToString());
			}
		}
	}


	Texture->GetPlatformData()->Mips[0].BulkData.Unlock();
}

