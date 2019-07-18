#ifndef GAME_H
#define GAME_H
class Game
{
	std::string name;
	std::string rule1 = "Your Wager Must Not Exceed  Your Deposit\n";
	std::string rule2 = "The Guess Must Lie Between 0 and 10";
	std::string rule3 = "For Every Win You Are Returned 10 times the wager\nFor Every Loss, You Return You Wager";
	std::string win = "YOU WIN!";
	std::string loss = "SORRY FOR YOUR LOSS!";
	int deposit, wager, dice, guess;

public:
	void player_details();
	void check_wager();
	void check_value();
	Game();
	Game(int x);

};

#endif
