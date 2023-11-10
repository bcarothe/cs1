// demonstrates several function frames (and multiple files)

#include "bmrCalculate.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {

	int gender, weight, height, age, feet, inches;

	cout << "What is your gander?" << endl
		 << "1. Male" << endl
		 << "2. Female" << endl;
	cin >> gender;

	cout << "What is your weight (in pounds)?" << endl;
	cin >> weight;

	cout << "What is your height (in feet & inches)?" << endl;
	cin >> feet;
	cin >> inches;
	height = feet * 12 + inches;

	cout << "What is your age (in years)?" << endl;
	cin >> age;

	if (gender == 1) {
		//cout << bmrMale(weight, height, age) << endl;
		int doughnuts = bmrMale(weight, height, age) / 195;
		cout << "You can consume " << doughnuts << " doughnuts." << endl;
	}
	else if (gender == 2) {
		//cout << bmrFemale(weight, height, age) << endl;
		int doughnuts = bmrFemale(weight, height, age) / 195;
		cout << "You can consume " << doughnuts << " doughnuts." << endl;
	}

}