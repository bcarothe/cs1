// the program attempts to sort three integers
// in increasing order, it is incomplete
// Jared Rodic
// 2/1/2016

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main(){

	int num;

	// read in number
	cout << "Enter number between 1 and 99\n";
	cin >> num;


	if ((num / 10) == 1) {
		switch (num) {
		case 10:
			cout << "Ten";
			break;
		case 11:
			cout << "Eleven";
			break;
		case 12:
			cout << "Twelve";
			break;
		case 13:
			cout << "Thirteen";
			break;
		case 14:
			cout << "Fourteen";
			break;
		case 15:
			cout << "Fifteen";
			break;
		case 16:
			cout << "Sixteen";
			break;
		case 17:
			cout << "Seventeen";
			break;
		case 18:
			cout << "Eighteen";
			break;
		case 19:
			cout << "Nineteen";
			break;
		default:
			cout << num; // testing
			break;
		}
	}
	else {
		int ten = num / 10;
		int single = num % 10;

		switch (ten) {
		case 2:
			cout << "Twenty ";
			break;
		case 3:
			cout << "Thirty ";
			break;
		case 4:
			cout << "Fourty ";
			break;
		case 5:
			cout << "Fifty ";
			break;
		case 6:
			cout << "Sixty ";
			break;
		case 7:
			cout << "Seventy ";
			break;
		case 8:
			cout << "Eighty ";
			break;
		case 9:
			cout << "Ninety ";
			break;
		default:
			break;
		}

		switch (single) {
		case 1:
			cout << "One";
			break;
		case 2:
			cout << "Two";
			break;
		case 3:
			cout << "Three";
			break;
		case 4:
			cout << "Four";
			break;
		case 5:
			cout << "Five";
			break;
		case 6:
			cout << "Six";
			break;
		case 7:
			cout << "Seven";
			break;
		case 8:
			cout << "Eight";
			break;
		case 9:
			cout << "Nine";
			break;
		default:
			break;
		}


	}

	// outputs the sorted numbers
	// cout << num;
	cout << endl;
}

