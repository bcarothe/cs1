/// tests battleship with classes implementation 

#include "battleship.h"
#include <iostream>
#include <ctime>

using std::cout; using std::cin; using std::endl;

int main() {

	//srand(time(nullptr));
	srand(2);

	Ship ship;
	Fleet fleet;
	char status;

	fleet.deployFleet();

	while (fleet.operational()) {

		cout << "Would you like to display positions and status? [y/n] ";
		cin >> status;
		if (status == 'y')
			fleet.printFleet();

		Location userFire;
		userFire.fire();
		
		if (fleet.isHitNSink(userFire))
			cout << "Hit!" << endl;
		else
			cout << "Miss!" << endl;
		
		//cout << fleet.operational() << endl;
	}
}