// This file implements the scene functions from sceneScriptor.h
#include <stdio.h>
#include <string>
#include <list>
void loadScenes(char *fileName, vector<string> &scenes);
{
    // Open the file
    FILE *file = fopen(fileName, "r");
    if (file == NULL)
    {
        printf("Error: Could not open file %s\n", fileName);
        return;
    }

    // Read the file line by line
    char line[256];
    while (fgets(line, sizeof(line), file))
    {
        // Parse the line
        char sceneID;
        int sceneNum;
        char sceneDesc[256];
        sscanf(line, "%c%d:\"%[^\"]\"", &sceneID, &sceneNum, sceneDesc);

        // Add the scene to the scene list
        Scene *scene = new Scene(sceneID, sceneNum, sceneDesc);
        scenes.push_back(scene);
    }

    // Close the file
    fclose(file);
}
