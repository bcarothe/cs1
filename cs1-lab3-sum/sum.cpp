// finds maximum number input
// demonstrates "iterate and keep track" idiom


#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	cout << "Input number [0 to quit]: ";
	int n;
	cin >> n;

	int sum = 0;
	if (n > 0)
		sum = n;	// sets first positive number

	//int max = n; // traking variable
	
	// adds all positive numbers
	while (n != 0) {
		cin >> n;
		if (n > 0)
			sum += n;
		//if (n > max) 
		//	max = n;
	}

	//cout << "Maximum number: " << max << endl;
	cout << "Sum: " << sum << endl;
}