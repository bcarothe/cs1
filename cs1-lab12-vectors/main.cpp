// Demonstrates usage of vectors and iterators

#include <iostream>
#include <vector>
#include <algorithm>

using std::cin; using std::cout; using std::endl;
using std::vector;

int check(int, vector<int>);

int main() {
	vector<int> v;
	char operation;
	int number;

	cout << " Enter operation [a/r/q] and number: ";
	cin >> operation;

	while (operation != 'q') {
		cin >> number;

		if (operation == 'a') {
			if (check(number, v) == -1)
				v.push_back(number);
		}
		else if (operation == 'r') {
			vector<int>::iterator toRemove = v.begin();
			for (vector<int>::iterator ip = toRemove; ip != v.end(); ++ip)
				if (number == *ip) {
					toRemove = ip;
				}
			v.erase(toRemove);
		}
			

		for (size_t i = 0; i < v.size(); ++i)
			cout << v[i] << " ";
		cout << endl << " Enter operation [a/r/q] and number: ";
		cin >> operation;
	}
}

int check(int number, vector<int> vector) {
	for (size_t i = 0; i < vector.size(); ++i) {
		if (number == vector[i])
			return i;
	}
	return -1;
}