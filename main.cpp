#include<iostream>
#include<stdlib.h>
#include<time.h>
#include "Game.h"

using namespace std;


int main()
{
	int option, choice;
	Game g;
	cout << "\nEnter 1 To Play\n";
	cin >> option;
	while (option == 1)
	{
		g.player_details();
		do {
			int i;
			g.check_wager();
			cout<<"\nEnter Your Guess\n";
			cin>>i;
			g(i);
			cout << "\nEnter 1 to continue\n";
		} while (choice == 1);
	}

	return 0;
}
