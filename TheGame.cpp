// This is the core game file. It does not much
// This program was developed with assistance from W3 schools (w3schools.com/cpp)
// The JSON Library is from https://github.com/nlohmann/json. Used with MANY Thanks!
using namespace std;
#include "Depends/libraries.h"

#include "Depends/vars.h" // VARs
// Functions
#include "Depends/work.h"
#include "Functions/functions.cpp"
#include "Depends/definitions.h"
#include "Functions/Scenes.cpp"
// This section is for using external files. DO NOT place items AFTER the directions.
// Deaths
#include "Depends/death.h"
#include "grue.h"
#include "sceneDesriptor.h"
// Direction Declarations
#include "north.cpp"
#include "south.cpp"

void game()
{
    // The main function of the program. This section will implement as much as I learn as possible. I will also have easter eggs once I learn how to launch a program with C++
    // I truly think it would be hilarious if you type portal and portal opens. Maybe I'll even write an auto hotkey to beat the game.
    clearScreen();
    cout << "Hello User. Welcome to The Dungeon\n";
    cout << "This portion of the program is fully copyrighted. \n";
    cout << "What is your name Player? ";
    // This block is where the actual game starts
    getline(cin, name);
    cout << "Thank you " << name << " for joining me today\n";
    cout << "You are in a field. \nIt is getting dark. \nYou are likely to be eaten by a grue.\n";
    cout << "You can go North, South, or Look around\n";
    // This is where it gets intresting. This function utilizes an "enum" that checks the *adjusted* input from the user.
    // It then determines where you are going! Neat huh?
    takeInput();
    switch (choiceEnum)
    {
    case 1:
        north();
        exit(1);
        break;
    case 2:
        south();
        exit(1);
        break;
        /* case 3:
             break;
         case 4:
             break;
         case 5:
             return;
         */
    default:
        return;
    }
}

int main()
{
    cout << "Launching game...\n";
    cout << "Please Wait...\n";
    saveStateCheck();
    game();
}