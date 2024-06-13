// This function creates the game menu and allows the user to select an option

void gameMenu()
{
    int choice;
    cout << "Welcome to the game menu!" << endl;
    cout << "1. Play Game" << endl;
    cout << "2. Instructions" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        gameEntryPointMain();
        break;
    case 2:
        help();
        break;
    case 3:
        exit(0);
        break;
    default:
        cout << "Invalid choice. Please try again." << endl;
        gameMenu();
    }
}