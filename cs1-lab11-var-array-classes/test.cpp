// testing the implementation of class varArray

#include <iostream>
#include "vararray.h"

using std::cout; using std::cin; using std::endl;


//void testfunc(varArray); // function to test pass-by-value for varArray

int main() {

	varArray array;
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
			array.addNumber(number);
			array.output();
		}
		else if (operation == 'r') {
			array.removeNumber(number);
			array.output();
		}

	} while (operation != 'q');

}


/*
// tests pass-by-value for object of class varArray
void testfunc(varArray va) { // copy constructor is invoked on "va"
	cout << "parameter va: ";
	va.output();
} // destructor is invoked when "va" goes out of scope
*/