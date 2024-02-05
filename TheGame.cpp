// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program was developed with assistance from W3 schools (w3schools.com/cpp)
#include "libraries.h"
#include "Music.h" //NYI
using namespace std;
#include "vars.h" // VARs
//This section is for using external files. DO NOT place items AFTER the directions.
//Deaths
#include "death.h"
#include "grue.h"
//Functions
#include "functions.h"
#include "definitions.h"
//Direction Declarations
#include "north.cpp"
#include "south.cpp"


void game() {
    //The main function of the program. This section will implement as much as I learn as possible. I will also have easter eggs once I learn how to launch a program with C++
    //I truly think it would be hilarious if you type portal and portal opens. Maybe I'll even write an auto hotkey to beat the game.
    cout << "Hello User. Welcome to The Dungeon\n";
    cout << "a";
    cout << "This portion of the program is fully copyrighted. \n";
    cout << "What is your name Player? ";
    //This block is where the actual game starts
    getline(cin, name);
    cout << "Thank you " << name << " for joining me today\n";
    cout << "You are in a field. \nIt is getting dark. \nYou are likely to be eaten by a grue.\n";
    cout << "You can go North, South, or Look around\n";
    //This is where it gets intresting. Nested if loops and checks are the only way I know how to do this thing
    takeInput();
    switch (choice) {
    case north: north(); break;
        printf("Error");
    }
  /*  if (choice == "north")
    {
        north();
    }
    else {
        if (choice == "south")
        {
            south();
        }
        else {

            if (choice == "look")
            {
                cout << "Finally, somebody made the correct choice. \nTo your north, is a house. To the South is a Dark Forest. It smells.... Funky)\n";
                return;
            }
        }
    }*/

}


    int main()
{
        cout << "Launching game...\n";
        cout << "Please Wait...\n";
        game();
}