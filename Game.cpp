#include<iostream>
#include<stdlib.h>
#include<time.h>
#include "Game.h"

Game::Game()
{
	cout << "\n\nRead Below to Know the Rules\n\n\n\n 1. " << rule1 << "\n2." << rule2 << "\n3. " << rule3 << endl;
}
void Game::player_details()
{
	cout << "\nEnter Name\n";
	cin >> name;
	cout << "\nEnter Deposit\n";
	cin >> deposit;
}
void Game::check_wager()
{
	cout << "\nEnter Wager\n";
	try {
		cin >> wager;
		if (wager <= deposit)
		{
		}
		else throw 0;
	}
	catch (int a)
	{
		cout << endl;
		cout << rule1 << endl;
		exit(1);
	}
}
void Game::check_value()
{
    
    try{
        if(guess<=0&&guess>10)
        throw 'o';
    }
    catch(char a)
    {
    	cout<<endl;
	cout<<rule2<<endl;
	exit(1);
    }
}
Game::Game(int x) //edit 3
{
	guess=x;
	check_value();
	dice = rand() % 10 + 1;
	if (guess == dice) {
		cout << win;
		wager *= 10;
		deposit += wager;
	}
	else {
		cout << loss;
		deposit -= wager;
	}
}
