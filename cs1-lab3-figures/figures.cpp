// odometer program, nested loop example


#include <iostream>

using std::cout; using std::endl; using std::cin;

int main() {

	cout << "Input a positive number: ";
	int length;
	cin >> length;

	// creates first square
	for (int row = 0; row < length; row++) {
		cout << endl;
		for (int col = 0; col < length; col++)
			cout << "*";
	}

	cout << endl;

	// creates first triangle
	int var1 = 0;
	for (int i = 0; i < length; ++i) {
		cout << endl;
		var1++;
		for (int col = 0; col < var1; col++)
			cout << "*";
	}

	cout << endl;

	// creates second triangle
	int var2 = length;
	for (int row = 0; row < length; row++) {
		cout << endl;
		for (int space = length; space > var2; space--)
			cout << " ";
		for (int col = 0; col < var2; col++)
			cout << "*";
		var2--;
	}

	cout << endl << endl;

	// creates second square
	for (int row = 0; row < length; row++) {
		for (int col = 0; col < length; col++) {
			if (row == 0 || row == length - 1)
				cout << "*";
			else if (col == 0 || col == length - 1)
				cout << "*";
			else cout << " ";
		}
		cout << endl;
	}

}