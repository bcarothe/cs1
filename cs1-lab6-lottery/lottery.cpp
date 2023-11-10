// the program demonstrates arrays

#include <iostream>
#include <ctime>

using std::cin; using std::cout; using std::endl;

void initialize(int[], int);
bool check(int[], int, int);
void draw(int[], int);
int entry(int);
void printOut(int[], int, int);

int main() {

	srand(time(nullptr));
	//srand(2);

	const int size = 10;
	int wins[size];
	int guess = -1;

	initialize(wins, size);
	draw(wins, size);
	guess = entry(guess);
	check(wins, size, guess);
	printOut(wins, size, guess);

}

// initializes each index of wins to -1
void initialize(int wins[], int size) {
	for (int i = 0; i < size; ++i)
		wins[i] = -1;
}

// checks to see if the value is in the array 'wins'
bool check(int wins[], int size, int num) {
	for (int i = 0; i < size; ++i) {
		if (wins[i] == num)
			return false;
	}
}

// draws a random number for each index of array 'wins'
void draw(int wins[], int size) {
	int num = -1; int cnt = 0;
	while (cnt < size) {
		num = rand() % 100;
		if (check(wins, size, num)) {
			wins[cnt] = num;
			cnt++;
		}
	}
}

// gets user input
int entry(int guess) {
	cout << "Select a number from 0 to 99: ";
	cin >> guess;
	return guess;
}

// prints out winning numbers & if user has won or not
void printOut(int wins[], int size, int guess) {
	cout << "Your guess: " << guess << endl << "Lottery numbers:";
	for (int i = 0; i < size; ++i) {
		cout << " " << wins[i];
	}
	cout << endl;
	if (!check(wins, size, guess)) {
		cout << "Congratulations! You have won!" << endl;
	}
	else {
		cout << "Sorry, but you haven't won." << endl;
	}
}