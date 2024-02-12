// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program was developed with assistance from W3 schools (w3schools.com/cpp)
using namespace std;
#include "Depends/libraries.h"
#include "Depends/Music.h" //NYI
#include "Depends/vars.h"  // VARs
// Functions
#include "Depends/functions.h"
#include "Depends/definitions.h"
// This section is for using external files. DO NOT place items AFTER the directions.
// Deaths
#include "Depends/death.h"
#include "grue.h"
// Direction Declarations
#include "north.cpp"
#include "south.cpp"

void game()
{

    // The main function of the program. This section will implement as much as I learn as possible. I will also have easter eggs once I learn how to launch a program with C++
    // I truly think it would be hilarious if you type portal and portal opens. Maybe I'll even write an auto hotkey to beat the game.
    cout << "Hello User. Welcome to The Dungeon\n";
    cout << "This portion of the program is fully copyrighted. \n";
    cout << "What is your name Player? ";
    // This block is where the actual game starts
    getline(cin, name);
    cout << "Thank you " << name << " for joining me today\n";
    cout << "You are in a field. \nIt is getting dark. \nYou are likely to be eaten by a grue.\n";
    cout << "You can go North, South, or Look around\n";
    // This is where it gets intresting. Nested if loops and checks are the only way I know how to do this thing
    takeInput();
    switch (choiceEnum)
    {
    case 1:
        north();
        break;
    case 2:
        south();
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        return;
    default:
        return;
    case 255:
        cout << "You have been banned.\n I wasnt Joking\n";
        break;
    }
}

int main()
{
    cout << "Launching game...\n";
    cout << "Please Wait...\n";
    game();
}