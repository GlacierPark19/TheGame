/* Handles the Grue questline (accsessable from multiple locations). All of these locations will involve your boy Jeff. Be NICE to jeff
*/
void grueLand();

void grueQuest() {
	cout << "Jeff looks at you with a confused look.\n";
	cout << "He then looks over, and eats your hat\n";
	cout << "After chewing, he leads you to a tunnel.\n It smells like your mom.\n";
	cout << "Enter The Tunnel?\n";
	takeInput();
	if (choice != "yes") {
		cout << "Jeff eats you for being mean.";
		cout << "GAME OVER.\n YOU HAVE BEEN EATEN BY A GRUE\n";
		cout << "Your score is " << score << " points!" << endl;
		cout << "Would you like to play again?\n";
	}
	else {
		grueLand();
	}
}





void grueLand() {

}