// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program was developed with assistance from W3 schools (w3schools.com/cpp)
//Thank you to Ramzis and ST3 from StackOverflow: https://stackoverflow.com/questions/17347950/how-do-i-open-a-url-from-c

#include <iostream>
#include "libraries.h"

#include <string>
#include "functions.h"
#include <windows.h>
#include <shellapi.h>
#include "Music.h"
using namespace std;
string userInput;
string choice;
float score;
string name;
//Direction Declarations
#include "north.cpp"
#include "south.cpp"
//Deaths
#include "death.h"
//Functions
#include "functions.h"

void game() {
    //The main function of the program. This section will implement as much as I learn as possible. I will also have easter eggs once I learn how to launch a program with C++
    //I truly think it would be hilarious if you type portal and portal opens. Maybe I'll even write an auto hotkey to beat the game.
    cout << "Hello User. Welcome to The Dungeon\n";
    //cout << "NOTE: Due to my ineptitude, this program is CASE SENSITIVE\n";
    cout << "This portion of the program is fully copyrighted. \n";
    cout << "What is your name Player? ";
    //This block is where the actual game starts
    getline(cin, name);
    cout << "Thank you " << name << " for joining me today\n";
    cout << "You are in a field. \nIt is getting dark. \nYou are likely to be eaten by a grue.\n";
    cout << "You can go North, South, or Look around\n";
    //This is where it gets intresting. Nested if loops and checks are the only way I know how to do this thing
    takeInput();
    if (choice == "north")
    {
        north();
}
    if (choice == "south")
    {
        south();
    }

        
    if (choice == "look") 
        {
            cout << "Finally, somebody made the correct choice. \nTo your north, is a house. To the South is a VOID OF DEATH (For now. TODO: add more game)\n";
        }
    if (choice == "meme") {
        #if defined(__linux__) // Or #if __linux__
            //Do a meme here
        #elif _WIN32
            ShellExecute(0, 0, "https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_SHOW);
        #else
            //do a meme here.
        #endif
            
        }
}


    int main()
{
        cout << "Launching game...\n";
        cout << "Please Wait...\n";
        game();
}





    void takeInput() {
        getline(cin, choice);
        transform(choice.begin(), choice.end(), choice.begin(), ::towlower);
        //This function fixes issues regarding capitilization.
        //Hopefully this works :)
    }


