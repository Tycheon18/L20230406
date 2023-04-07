#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

#include <vector>

using namespace std;

int main()
{
	FPlayer* Player = new FPlayer(); //1

	srand((unsigned int)time(0));

	vector<FGoblin*> Goblins;
	int Count = (rand() % 3) + 1;
	for(int i = 0; i < Count; ++i)
	{
		Goblins.push_back(new FGoblin()); //1 ~ 3
	}

	vector<FSlime*> Slimes;
	Count = (rand() % 3) + 1;
	for (int i = 0; i < Count; ++i)
	{
		Slimes.push_back(new FSlime()); //1 ~ 3
	}

	vector<FBoar*> Boars;
	Count = (rand() % 3) + 1;
	for (int i = 0; i < Count; ++i)
	{
		Boars.push_back(new FBoar()); //1 ~ 3
	}
	//FSlime* Slime = new FSlime(); //1 ~ 3
	//FBoar* Boar = new FBoar(); //1 ~ 3

	
		Player->Move();
		for (int i = 0; i < Goblins.size(); ++i)
		{
			Goblins[i]->Move();
		}
		for (int i = 0; i < Slimes.size(); ++i)
		{
			Slimes[i]->Move();
		}
		for (int i = 0; i < Boars.size(); ++i)
		{
			Boars[i]->Move();

		}
	
	//Goblin->Move();
	//Slime->Move();
	//Boar->Move();

	delete Player;
	for (int i = 0; i < Goblins.size(); ++i)
	{
		delete Goblins[i];
	}
	for (int i = 0; i < Slimes.size(); ++i)
	{
		delete Slimes[i];
	}
	for (int i = 0; i < Boars.size(); ++i)
	{
		delete Boars[i];

	}
	//delete Goblin;
	//delete Slime;
	//delete Boar;

	return 0;
}
