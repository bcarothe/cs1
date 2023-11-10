// demonstrates multiple files

#include "figures.h"
#include <iostream>

using std::cout; using std::endl; using std::cin;

int main() {

	int input;

	do {
		cout << "1. Square" << endl
			<< "2. Bottom left triangle" << endl
			<< "3. Top right triangle" << endl
			<< "Select an operation: ";

		cin >> input;

		int size;
		int fill;

		switch (input) {
		case 1:
			cout << "Filled or hollow?" << endl
				 << "1. Filled" << endl
				 << "2. Hollow" << endl;
			cin >> fill;
			cout << "Select a size: ";
			cin >> size;
			switch (fill) {
			case 1:
				squareFilled(size);
				break;
			case 2:
				squareHollow(size);
				break;
			}
			break;
		case 2:
			cout << "Select a size: ";
			cin >> size;
			triangleBottomLeft(size);
			break;
		case 3:
			cout << "Select a size: ";
			cin >> size;
			triangleTopRight(size);
			break;
		}

	} while (input > 0 && input < 4);

}