#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include "Game.h"

using namespace std;

Game::Game()
{
	cout << "\n\nRead Below to Know the Rules\n\n\n\n1. " << rule1 << "2. " << rule2 << "\n3. " << rule3 << endl;
}
void Game::player_details()
{
	cout << "\nEnter Name\n";
	cin >> name;
	cout << "\nEnter Deposit\n";
	cin >> deposit;
}
void Game::check_wager()//works
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
Game::Game(int x) //edit 3
{
	 try{
        guess=x;
        if(guess<=0&&guess>10)
        throw rule2;
    }
    catch(string a)
    {
    	cout<<endl;
        cout<<rule2<<endl;
        exit(1);
    }
	srand(530);
	dice = rand() % 10 + 1;
	cout<<"The number is: "<<dice<<endl;
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


