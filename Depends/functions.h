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
        choiceEnum = 5;
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
    file.open("save_ban.dat");
    file << 1;
    file.close();
    cout << "You have been banned.\n Please email mchapman3@zagmail.gonzaga.edu to appeal.\n";
    exit(1);
}
void saveGame()
{
    ofstream file;
    file.open("save_state.dat");
    file << savePoint;
    file.close();
    cout << "Game saved!\n";
}
void saveStateCheck()
{

    ifstream input_file("save_ban.dat");
    while (input_file >> banStatus)
    {
        input_file >> banStatus;
        input_file.close();
    }
    ifstream input_file2("save_state.dat");
    while (input_file2 >> saveState)
    {
        input_file2 >> saveState;
        input_file2.close();
    }

    if (banStatus != 0)
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
