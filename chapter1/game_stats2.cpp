// Game Stats 2.0 
// Demostrates constants

#include <iostream>
using namespace std;

int main() {

	const int ALIEN_POINTS = 230;
	int aliensKilled = 15;
	int score = aliensKilled * ALIEN_POINTS;

	cout << "score: " << score << endl;

	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty = EASY;

	enum shipCost {FIGHTER_COST = 25, BOMBER_COST. CRUISER_COST = 50};
	shipCost myShipCost = BOMBER_COST;

	cout << "\n To upgrade my ship to a Cruiser will cost" << (CRUISE_COST - myShipCost)
		 << "Resource Points. \n";


	return 0;

}