// Game Stats
// Demostrates declaring and initializing variables

#include <iostream>
using namespace std;

int main(){

	int score;
	double distance;
	char playAgain;
	bool shieldsUp;
	short lives, aliensKilled;

	score = 0;
	distance = 1500.89;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 15;

	double engineTemp = 7624.75;

	cout << "\n score: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "playAgain: " << playAgain << endl;
	cout << "lives: " << lives << endl;
	cout << "aliensKilled: " << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;

	int shipload;
		
	cout << "\n How much shipload? ";
	cin >> shipload;
	cout << "shipload: " << shipload << endl;

	typedef unsigned short int ushort;
	ushort bonus = 10; 

	cout << "\n bonus: " << bonus << endl;

	return 0;
	
}