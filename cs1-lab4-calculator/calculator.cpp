// demonstrates usage math library functions

#include <iostream>
#include <cstdlib>
#include <cmath>

using std::cout; using std::cin; using std::endl;

int main() {

	int input;

	do {
		cout << "1. Absolute value" << endl
			<< "2. Square root" << endl
			<< "3. Ceiling" << endl
			<< "4. Power" << endl
			<< "Select an operatoin: ";

		cin >> input;

		int num1;
		double num2;
		double num3;

		switch (input) {
		case 1:
			cout << "Enter an integer: ";
			cin >> num1;
			cout << "Result: " << abs(num1) << endl << endl;
			break;
		case 2:
			cout << "Enter a number: ";
			cin >> num2;
			cout << "Result: " << sqrt(num2) << endl << endl;
			break;
		case 3:
			cout << "Enter a number: ";
			cin >> num2;
			cout << "Result: " << ceil(num2) << endl << endl;
			break;
		case 4:
			cout << "Enter the base: ";
			cin >> num2;
			cout << "Enter the power: ";
			cin >> num3;
			cout << "Result: " << pow(num2, num3) << endl << endl;
			break;
		}
	} while (input > 0 && input < 5);
}