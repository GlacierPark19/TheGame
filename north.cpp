/*This file handles all of the NORTH questline. Deaths will be sent to death.cpp
 * The *optional* Grue quest is handled by Grue.cpp. NYI
 */
void house();
void stairsHouse();
void kitchenHouse();

void north()
{
    savePoint = 1;
    cout << "You head north. There is a mailbox in front of you. You can continue North to reach a house.\n";
    cout << "You can also read the mail.\n";
    takeInput();
    if (choice == "read")
    {
        cout << "Thank you so much for stumbling upon my little game.\n The majority of this is Copyrighted using the GNU public licence.\n THis program uses many public libraries.\n";
        cout << "Some sections of this game are not yet accessable.\n Sorry bout that...";
        cout << "There is also a flyer. It reads:\n";
        cout << "Shop LTTSTORE.com\n";
        score = (score + 5);
        clrscr();
        cout << "You continue North to reach a house.\n";
        house();
    }
    else if (choice == "north")
    {
        house();
    }
    else if (choice == "exit")
    {
        return;
    }
}

void stairsHouse()
{
}
void kitchenHouse()
{
    cout << "You enter the kitchen. There is a long table in front of you.\n There is a bag on the table.\n A bottle of what looks like Milk is on the counter\n";
    takeInput();
    if (choice == "milk")
    {
        milkPaint();
    }
    else
    {
        if (choice == "bag")
        {
            cout << "the bag is empty :( \n";
            cout << "But after consuming the bag, you find some points\n";
            score = (score + 2);
            kitchenHouse();
        }
        else if (choice == "back")
        {
            house();
        }
        else
        {
            cout << "Unrecognized Command";
            kitchenHouse();
        }
    }
}
void house()
{
    cout << "You enter the house. There are stairs to your Left. You can see a kitchen, and a dark room to your right.\n";
    cout << "The place stinks of grue\n";
    takeInput();
    if (choice == "left")
    {
        stairsHouse();
    }
    else if (choice == "right")
    {
        grueDeath();
    }
    else if (choice == "kitchen")
    {
        kitchenHouse();
    }
    else
    {
        cout << "Unrecognized Command\n";
        house();
    }
}
