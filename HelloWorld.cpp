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
string name;

void takeInput() {
    getline(cin, choice);
    transform(choice.begin(), choice.end(), choice.begin(), ::towlower);
    //This function fixes issues regarding capitilization.
    //Hopefully this works :)
}

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
    {  //the north if loop
        cout << "You head north. There is a mailbox in front of you. You can continue North to reach a house.\n";
        cout << "You can also read the mail.\n";
        takeInput();
            if (choice == "read") {
                cout << "Thank you so much for stumbling upon my little game.\n The majority of this is Copyrighted using the GNU public licence.\n THis program uses many public libraries.\n";
                cout << "Some sections of this game are not yet accessable.\n Sorry bout that...";
                cout << "There is also a flyer. It reads:\n";
                cout << "Shop LTTSTORE.com\n";
                }
        else {

        }
        if (choice == "north") {
            cout << "You enter the house. There are stairs to your Left. You can see a kitchen ahead, and a dark room to your right.\n";
            cout << "The place stinks of grue\n";
        }
    }
        else {
         if (choice == "South")
        {
            cout << "You stumble forward blindly, and break your nose on the Grue. He eats you. Game Over";
        }
        if (choice == "Look") 
        {
            cout << "Finally, somebody made the correct choice. \nTo your north, is a house. To the South is a VOID OF DEATH (For now. TODO: add more game)\n";
        }
        if (choice == "Meme") {
            ShellExecute(0, 0, "https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_SHOW);
        }
    }
}
    int main()
{
    cout << "Hello World!\n";
    cout << "This Program Copyright 2024 Trolololol Productions\n";
    cout << "What is your name?\n";
    getline(cin, userInput);
    if (userInput == "Nobody")
    {
        game();
        //This calls the game, which is the truly main program. This portion will be updated as I learn new things.
    }
    else {
        if (userInput == "Brian")
        {
            cout << "Have a great day Professor!";
        }
        else {
            cout << "HEHE CPU GOES BRRRRR\n";
        }
    }
}


