#include "figures.h"
#include <iostream>

using std::cout; using std::endl; using std::cin;

void squareFilled(int size) {
	for (int row = 0; row < size; row++) {
		cout << endl;
		for (int col = 0; col < size; col++)
			cout << "*";
	}
	cout << endl << endl;
}

void squareHollow(int size) {
	cout << endl;
	for (int row = 0; row < size; row++) {
		for (int col = 0; col < size; col++) {
			if (row == 0 || row == size - 1)
				cout << "*";
			else if (col == 0 || col == size - 1)
				cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void triangleBottomLeft(int size) {
	for (int i = 0; i < size; ++i) {
		cout << endl;
		for (int col = 0; col < i+1; col++)
			cout << "*";
	}
	cout << endl << endl;
}

void triangleTopRight(int size) {
	for (int row = 0, var = size; row < size; row++, var--) {
		cout << endl;
		for (int space = size; space > var; space--)
			cout << " ";
		for (int col = 0; col < var; col++)
			cout << "*";
	}
	cout << endl << endl;
}