#include "FileManagerFL1.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"
#include <iostream>
#include <string>
#include <fstream>
#include "Containers/UnrealString.h" // Для работы с FString

bool UFileManagerFL1::SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText)
{
    FString FullPath = SaveDirectory + "\\" + FileName;
    FString FinalString = "";
    FFileHelper::LoadFileToString(FinalString, *FullPath);
    FinalString += "\n";
    for (FString& Each : SaveText)
    {
        FinalString += Each;
        FinalString += LINE_TERMINATOR;
    };
    return FFileHelper::SaveStringToFile(FinalString, *FullPath);
}       
