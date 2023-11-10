// invokes game functions

#include "battleship.h"
#include <iostream>
#include <ctime>

using std::cout; using std::cin; using std::endl;

int main() {
	srand(time(nullptr));
	//srand(2);

	Ship myShip;
	Ship myFleet[FLEET_SIZE];
	Location mySpot;
	int sunk = 0;
	char cheat;

	initialize(myFleet);
	//printFleet(myFleet);

	deploy(myFleet);
	//printFleet(myFleet);

	cout << "Th' enemy fleet be nearin'!" << endl << endl;

	// While there are operation ships, continue the game
	do {
		mySpot = fire();
		//cout << mySpot.x << mySpot.y << endl;

		// Checks whether a hit or miss
		if (check(myFleet, mySpot) == -1) {
			cout << "Ye found th' drink!" << endl;
		}
		else {
			cout << "Ye hit th' enemy ship!" << endl;
			sink(myFleet[sunk]);
			sunk++;
		}
		
		// Just for grammar correction
		if (sunk == 1)
			cout << "Ye have destroyed " << sunk << " enemy ship!" << endl << endl;
		else
			cout << "Ye have destroyed " << sunk << " enemy ships!" << endl << endl;

		cout << "Would you like to see the location of the fleet? [y/n]" << endl;
		cin >> cheat;
		if (cheat == 'y')
			printFleet(myFleet);

	} while (operational(myFleet));

	cout << "Congratulations! Ye have plundered th' enemy!" << endl;
}
