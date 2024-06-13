// Copyright 2024 ChapmanTechnlogies LLC
// Author: Michael Chapman
using namespace std;
#include "Headers/includes.h"
#include "Headers/functions.h"
#include "Descriptors/descVars.cpp"
#include "Directions/start.cpp"
#include "Functions/GameFunctions/gameMenu.cpp"
int main()
{
    loadDescriptors("Descriptors/library.desc");
    gameMenu();
    return 0;
}