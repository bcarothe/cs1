#include "bmrCalculate.h"

// function declaration
double bmrMale(int w, int h, int a) {
	double bmr = 66 + (6.3 * w) + (12.9 * h) - (6.8 * a);
	return bmr;
}

double bmrFemale(int w, int h, int a) {
	double bmr = 655 + (4.3 * w) + (4.7 * h) - (4.7 * a);
	return bmr;
}