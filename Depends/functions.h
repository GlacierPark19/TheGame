void takeInput()
{
    choiceEnum = 0; // This line *should* fix the South loop issue
    getline(cin, choice);
    transform(choice.begin(), choice.end(), choice.begin(), ::towlower);
    // This function fixes issues regarding capitilization.

    // This is where things get strange. In order to simplify my life, I am going to try pseudo-enumeration
    // The function below *should* run with every takeInput, converting directions to an integer.
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
    file << 255;
    file.close();
}
void saveStateCheck()
{

    ifstream input_file("save_ban.dat");
    while (input_file >> banStatus)
    {
        input_file >> banStatus;
        input_file.close();
    }

    if (banStatus != 0)
    {
        exit(1);
    }
}
