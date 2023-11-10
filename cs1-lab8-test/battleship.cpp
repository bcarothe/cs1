// battleship functions

#include "battleship.h"
#include <iostream>
#include <ctime>

using std::cin; using std::cout; using std::endl;

Location pick() {
	Location randLoc;
	randLoc.x = rand() % FIELD_SIZE + 1;
	int choiceY = rand() % FIELD_SIZE;
	switch (choiceY) {
	case 0:
		randLoc.y = 'a';
		break;
	case 1:
		randLoc.y = 'b';
		break;
	case 2: 
		randLoc.y = 'c';
		break;
	case 3:
		randLoc.y = 'd';
		break;
	case 4:
		randLoc.y = 'e';
		break;
	}
	return randLoc;
}

Location fire() {
	Location loc;
	cout << "Choose a coordinate [int char]: ";
	cin >> loc.x >> loc.y;
	return loc;
}

void printShip(Ship toPrint) {
	cout << toPrint.loc.x << toPrint.loc.y;
		if (toPrint.sunk == 0)
			cout << " up" << endl;
		else
			cout << " sunk" << endl;
}

bool match(Ship sh, Location lo) {
	if (sh.loc.x == lo.x && sh.loc.y == lo.y)
		return true;
	else
		return false;
}

void sink(Ship& sunkShip) {
	sunkShip.sunk = true;
}

void initialize(Ship fleet[]) {
	for (int i = 0; i < FLEET_SIZE; ++i) {
		fleet[i].loc.x = -1;
		fleet[i].loc.y = '*';
	}
}

void printFleet(const Ship fleet[]) {
	for (int i = 0; i < FLEET_SIZE; ++i) {
		printShip(fleet[i]);
	}
}

int check(const Ship fleet[], Location loc) {
	for (int i = 0; i < FLEET_SIZE; ++i)
		if (match(fleet[i], loc))
			return i;
	return -1;
}

void deploy(Ship fleet[]) {
	int d = 0;
	while (d < FLEET_SIZE) {
		Location loc = pick();
		int temp = check(fleet, loc);
		//check(fleet, fleet[d].loc);
		if (temp == -1) {
			fleet[d].loc = loc;
			fleet[d].sunk = false;
			d++;
		}
	}
}

bool operational(const Ship fleet[]) {
	for (int i = 0; i < FLEET_SIZE; ++i) {
		return !fleet[i].sunk;
	}
}