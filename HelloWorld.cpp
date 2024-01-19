// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program was developed with assistance from W3 schools (w3schools.com/cpp)

#include <iostream>
#include <string>
using namespace std;
string userInput;
string choice;


void game() {
    cout << "Hello User. Welcome to The Dungeon\n";
    cout << "This portion of the program is fully copyrighted. \n";
    cout << "What is your name Player?";
    getline(cin, userInput);
    cout << "Thank you " << userInput << " for joining me today\n";
    cout << "You are in a field. \nIt is getting dark. \nYou are likely to be eaten by a grue.\n";
    cout << "You can go North, South, or Look around\n";
    getline(cin, choice);
    if (choice == "North")
    {
        cout << "TODO: More of the game";
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
    }
    else {
        return 0;
    }
}

