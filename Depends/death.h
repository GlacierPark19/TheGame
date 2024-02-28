// This file handles deaths. Exsists to make life "easy"
void deathFinalization()
{
	// This function cleans up the code. I reccomend using it.
	saveGame();
	score = 0;
	choiceEnum = 0;
	savePoint = 0;
	saveState = 0;
	takeInput();
	if (choice != "yes")
	{
		exit(0);
	}
	else
	{
		main();
	}
}
void grueDeath()
{
	cout << "GAME OVER.\n YOU HAVE BEEN EATEN BY A GRUE\n";
	cout << "Your score is " << score << " points!" << endl;
	cout << "Would you like to play again?\n";
	choiceEnum = 5;
	return;
}

void milkPaint()
{
	cout << "You drink the liquid which looks like Milk.\n You remember the words your father told you on your wedding day\n";
	cout << "\"son. Whatever you do, never drink milk. It oculd be paint\"" << endl;
	cout << "As you ponder your fathers wise words regarding milk and paint, a Grue eats you." << endl;
	cout << "GAME OVER\n";
	cout << "Your score is " << score << " points!" << endl;
	cout << "Would you like to play again?\n";
	choiceEnum = 5;
	return;
}

void die()
{
	cout << "You died.\n Score 0.\n You may NOT play again\n";
	banPlayer();
}