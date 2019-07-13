#ifndef Game
#def Game

class Game
{
	string name;
	string rule1 = "Your Wager Must Not Exceed  Your Deposit\n";
	string rule2 = "The Guess Must Lie Between 0 and 10";
	string rule3 = "For Every Win You Are Returned 10 times the wager\nFor Every Loss, You Return You Wager";
	string win = "YOU WIN!";
	string loss = "SORRY FOR YOUR LOSS!";
	int deposit, wager, dice, guess;
	void Game::check_value();

public:
	void player_details();
	void check_wager();
	Game();
	Game(int x);
	
};

#endif
