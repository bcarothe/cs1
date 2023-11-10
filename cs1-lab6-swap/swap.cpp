// the program attempts to sort three integers
// in increasing order, it is incomplete

#include <iostream>

using std::cin; using std::cout; using std::endl;

// swaps values
int swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
	return a, b;
}

int main() {

	// inputs the numbers
	cout << "Enter three numbers: ";
	int one, two, three;
	cin >> one >> two >> three;

	// orders one and two
	if (one > two) {
		swap(one, two);
	}

	// orders one and three
	if (one > three) {
		swap(two, three);
	}

	// orders one and two
	if (one > two) {
		swap(one, two);
	}

	// outputs the sorted numbers
	cout << "The sorted numbers are: ";
	cout << one << " " << two << " " << three << endl;
}