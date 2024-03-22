void takeInput()
{
    // NOTE: This function is a Quasi-Generic Cleaner, as it is called a LOT. DO NOT CHANGE VARIABLE DEFINITIONS WITHIN.
    choiceEnum = 0; // This line fixes some looping issues that can occur.
                    // Take User input
    getline(cin, choice);
    // This function fixes issues regarding capitilization.
    transform(choice.begin(), choice.end(), choice.begin(), ::towlower);

    // The following switchcase assigns directions with numbers. This is to allow for more flexibility with the code. In theory, ANYTHING
    // Can be assigned here.
    if (choice == "north")
    {
        choiceEnum = 1;
    }
    else if (choice == "south")
    {
        choiceEnum = 2;
    }
    else if (choice == "east")
    {
        choiceEnum = 3;
    }
    else if (choice == "west")
    {
        choiceEnum = 4;
    }
    else if (choice == "look")
    {
        // TODO: Eyes
    }
    else if (choice == "exit")
    {
        saveGame();
        exit(0);
    }
    else
    {
        // do literaly nothing for now IG
    }
}

void clrscr()
{
    cout << "\033[2J\033[1;1H";
}

void grueLandAscii()
{
    std::cout << R"(
 _____ ______ _   _ _____ _       ___   _   _______ 
|  __ \| ___ \ | | |  ___| |     / _ \ | \ | |  _  \
| |  \/| |_/ / | | | |__ | |    / /_\ \|  \| | | | |
| | __ |    /| | | |  __|| |    |  _  || . ` | | | |
| |_\ \| |\ \| |_| | |___| |____| | | || |\  | |/ / 
 \____/\_| \_|\___/\____/\_____/\_| |_/\_| \_/___/  
                                                    	
)" << '\n';
}

void clearScreen()
{
    clrscr();
}
void banPlayer()
{
    ofstream file;
    file.open("save.dat");
    file << 18 << endl;
    file.close();
    cout << "You have been banned.\n Please email mchapman3@zagmail.gonzaga.edu to appeal.\n";
    exit(1);
}
void saveGame()
{
    // The save game file is a basic text file that contains variables I need to conserve
    // The order of things matters. After EVERY variable you add, add an "endl" so that we dont have errors
    // Thanks
    if (score > lastHighScore)
    {
        newHighScore = score;
    }
    else
    {
    }
    ofstream file;
    file.open("save.dat");
    file << endl      // Ban Status
         << savePoint // Save State
         << endl
         << newHighScore; // High Score (Duh)
    file.close();
    cout << "Game saved!\n";
}
void saveStateCheck()
{

    ifstream file;
    file.open("save.dat");
    file >> banStatus;
    file >> saveState;
    file >> lastHighScore;
    file.close();

    if (banStatus == 18)
    {
        cout << "You have been banned.\n Please email mchapman3@zagmail.gonzaga.edu to appeal.\n";
        exit(1);
    }

    switch (saveState)
    {
    case 1:
        north();
        break;
    case 2:
        south();
        break;
    case 3:
        grueLand();
        break;
    }
}

void scoreCheck()
{
    if (score > lastHighScore)
    {
        cout << "Congratulations! New High Score! " << endl;
        newHighScore = score;
    }
    else
    {
        cout << "Your score was: " << score << ". The High score is: " << lastHighScore << endl;
    }
}
