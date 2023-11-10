// Justifies a line to 80 characters long

#include <iostream>
#include <string>
#include <ctime>

using std::cout; using std::cin; using std::endl;
using std::string;

int main() {

	srand(time(nullptr));

	const int max = 80;
	string s;
	string quit = "y";
	int pos;

	do {
		cout << "Enter string and hit return: " << endl;
		getline(cin, s);

		// Finds each puncuation mark and adds a space after it.
		pos = s.find('.');
		while (pos != string::npos) {
			s.insert(pos + 1, " ");
			pos = s.find('.', pos + 1);
		}
		pos = s.find(',');
		while (pos != string::npos) {
			s.insert(pos + 1, " ");
			pos = s.find('.', pos + 1);
		}
		pos = s.find('!');
		while (pos != string::npos) {
			s.insert(pos + 1, " ");
			pos = s.find('.', pos + 1);
		}
		pos = s.find('?');
		while (pos != string::npos) {
			s.insert(pos + 1, " ");
			pos = s.find('.', pos + 1);
		}
		pos = s.find(';');
		while (pos != string::npos) {
			s.insert(pos + 1, " ");
			pos = s.find('.', pos + 1);
		}

		// Finds spaces between words and randomly adds spaces until the string reaches 80 characters
		pos = s.find(' ');
		while (pos != string::npos && s.size() < max) {
			//cout << "found: " << pos << endl;
			int rnum = rand() % 2;
			if (rnum == 1)
				s.insert(pos, " ");

			pos = s.find(' ', pos + 1);
		}

		cout << s << endl << endl;	// prints string

		cout << "Done? [y/n] ";	// program termination process
		getline(cin, quit);

	} while (quit != "y");

}