// demonstrates time and random functions

#include <iostream>
#include <ctime>

using std::cout; using std::cin; using std::endl;

int main() {

	srand(time(nullptr));
	int answer = rand() % 100;

	cout << "My army of minions calculated a number between 0 and 99." << endl
		 << "What is it? ";

	int guess;
	cin >> guess;

	while (guess != answer) {
		if (guess > answer) {
			cout << "Incorrect! The answer is smaller." << endl
				<< "Guess again: ";
			cin >> guess;
		}
		else if (guess < answer) {
			cout << "Incorrect! The answer is larger." << endl
				<< "Guess again: ";
			cin >> guess;
		}
	}

	cout << "Correct!" << endl;

}