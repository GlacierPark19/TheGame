// This file handles all functions relating to the Scene Descriptor engine

// The following function loads the scenes file into memory
// the file is a standard text file saved in a .SCENE format
// The scene strings are sepe=arated by a ':' character
// A scene is formated as follows:
//  N1:"STRING":
//   N1 is the scene identifier, composed of a single char and an int. The char is the scene direction/location, while the Int is the uniquie scene number
// "STRING" is the scene description, a string of text that describes the scene. This is what is printed to the user when the scene is loaded.
//

void loadScenes(char *fileName);

// The following function returns the scene description for the given scene
// The scene is identified by the scene identifier, which is a char and an int
// The char is the scene direction/location, while the Int is the unique scene number

void getScene(char sceneID, int sceneNum);
