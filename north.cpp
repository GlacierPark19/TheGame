void north() {

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
        //Do Nothing :)
    }
}