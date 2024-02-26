/* Handles the Grue questline (accsessable from multiple locations). All of these locations will involve your boy Jeff. Be NICE to jeff
 */
void grueLand();

void grueQuest()
{
	cout << "Jeff looks at you with a confused look.\n";
	cout << "He then looks over, and eats your hat\n";
	cout << "After chewing, he leads you to a tunnel.\n It smells like your mom.\n";
	cout << "Enter The Tunnel?\n";
	takeInput();
	if (choice != "yes")
	{
		cout << "Jeff eats you for being mean.";
		cout << "GAME OVER.\n YOU HAVE BEEN EATEN BY A GRUE\n";
		cout << "Your score is " << score << " points!" << endl;
		cout << "Would you like to play again?\n";
	}
	else
	{
		grueLand();
	}
}

void grueLand()
{
	clrscr();
	grueLandAscii();
	cout << "" << endl;
	cout << "" << endl;
	cout << "Welcome to adventures in GrueLand!\n";
	cout << "Copyright 1995 BigGame Games\n";
	cout << "You see two things of intrest.\n A Golden Challace and a wooden challace.\n";
	cout << "One will kill you, and the other shall allow you to live forever.\n Choose Wisely\n";
	takeInput();
	if (choice == "gold")
	{
		// :(
		banPlayer();
		cout << "the gods of old say fuck you.\n congrats! Have a ban!\n";
	}
}