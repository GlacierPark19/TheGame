/*This file handles all of the SOUTH questline. Deaths will be sent to deaths.cpp
*/
void south() {
    cout << "You wander into a dark forest. The trees close in around you.\n You then smell the unmistakable scent of Grue. His name is Jeff.\n You can be nice, or do anything else\n";
    takeInput();
    if (choice == "nice") {
        grueQuest();
    }
    else {
        grueDeath();
    }
}