// Demonstrates usage of 2d arrays

#include <iostream>

using std::cin; using std::cout; using std::endl;


int main() {
	const int row = 6;
	const int col = 6;
	char operation;
	char loc1;
	int loc2;
	char a[row][col];

	int temp = 'a';
	cout << temp - 96;

	// initializes array elements to labeled blank grid
	for (int r = 0; r < row; ++r) {
		for (int c = 0; c < col; ++c) {
			a[r][c] = ' ';
			if (r == 0 && c != 0)
				a[r][c] = 'a' + c - 1;
			else if (r != 0 && c == 0)
				a[r][c] = '1' + r - 1;
		}
	}

	cout << "Would you like to fire a shot? [y/n] ";
	cin >> operation;

	while (operation != 'n') {
		cout << "Location? [Ex: a 1] ";
		cin >> loc1 >> loc2;

		a[loc2][loc1 - 96] = '*';

		// prints out the array
		cout << "All fired shots: " << endl;
		for (int r = 0; r < row; ++r) {
			for (int c = 0; c < col; ++c) {
				cout << a[r][c] << " ";
			}
			cout << endl;
		}

		cout << endl;
		cout << "Would you like to fire a shot? [y/n] ";
		cin >> operation;
	}
}