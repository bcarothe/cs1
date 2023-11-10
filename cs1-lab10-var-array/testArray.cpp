// executes variable size array implementation

#include "varArray.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;



int main() {

	int size = 0;  // setting array size
	int *a = new int[size]; // allocating dynamic array

	char operation;
	int number;

	// loop while user doesn't enter 'q'
	do {
		cout << "Enter operation [a/r/q] and number: ";
		cin >> operation;
		if (operation != 'q')
			cin >> number;
		
		if (operation == 'a') {
			addNumber(a, number, size);
			output(a, size);
		}
		else if (operation == 'r') {
			removeNumber(a, number, size);
			output(a, size);
		}

	} while (operation !='q');

}