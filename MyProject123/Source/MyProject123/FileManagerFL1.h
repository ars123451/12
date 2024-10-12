// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileManagerFL1.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT123_API UFileManagerFL1 : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Save"))
	static bool SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText);
};
