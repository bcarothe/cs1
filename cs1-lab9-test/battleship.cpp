/// battlesip functions

#include "battleship.h"
#include <iostream>

using std::cin; using std::cout; using std::endl;

Location::Location() {
	x = -1;
	y = '*';
}

void Location::pick() {
	x = rand() % fieldSize + 1;
	switch (rand() % fieldSize) {
	case 0:
		y = 'a';
		break;
	case 1:
		y = 'b';
		break;
	case 2:
		y = 'c';
		break;
	case 3:
		y = 'd';
		break;
	case 4:
		y = 'e';
		break;
	}
}

void Location::fire() {
	cout << "Choose a coordinate [int char]: ";
	cin >> x >> y;
}

void Location::print() const {
	cout << x << y;
}

bool compare(Location one, Location two) {
	return (one.x == two.x) && (one.y == two.y);
}



Ship::Ship() {
	sunk = false;
}

bool Ship::match(const Location &tmpLoc) const {
	return compare(loc, tmpLoc);
}

void Ship::sink() {
	sunk = true;
}

void Ship::setLocation(const Location &tmpLoc) {
	loc = tmpLoc;
}

void Ship::printShip() const {
	loc.print();							// Initializes to -1* by invoking Location() function on line 6
	if (sunk)
		cout << " true" << endl;
	else
		cout << " false" << endl;
}

void Fleet::deployFleet() {
	Location loc;

	int i = 0;
	while (i < fleetSize) {
		loc.pick();
		if (check(loc) == -1) {
			ships[i].setLocation(loc);
			i++;
		}
	}
}

bool Fleet::operational() const {
	Ship ship;
	for (int i = 0; i < fleetSize; ++i) {
		return !ships[i].isSunk();
	}
}

bool Fleet::isHitNSink(const Location &tmpLoc) {
	Ship ship;
	for (int i = 0; i < fleetSize; ++i) {
		if (ships[i].match(tmpLoc)) {
			ship.sink();
			return true;
		}
	}
	return false;
}

void Fleet::printFleet() const {
	for (int i = 0; i < fleetSize; ++i) {
		ships[i].printShip();
	}
}

int Fleet::check(const Location &tmpLoc) const {
	for (int i = 0; i < fleetSize; ++i)
		if (ships[i].match(tmpLoc))
			return i;
	return -1;
}
