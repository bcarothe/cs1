// Justifies a paragraph

#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using std::cout; using std::cin; using std::endl;
using std::string;
using std::ifstream; using std::ofstream;

int main() {

	//srand(time(nullptr));
	srand(2);

	const int max = 80;
	string s;
	string s2;
	int pos;

	cout << "Input file name [unjustified.txt]: " << endl;
	string file;
	string file2 = "justified.txt";
	cin >> file;

	ifstream fin(file.c_str());
	ofstream fout(file2.c_str());

	while (getline(fin, s)) {

		// Finds each puncuation mark and adds a space after it.
		if (s.length() != max) {
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
		}
		// Finds spaces between words and randomly adds spaces until the string reaches 80 characters
		pos = s.find(' ');
		while (pos != string::npos && s.size() < max && s.size() > 40) {
			//cout << "found: " << pos << endl;
			int rnum = rand() % 2;
			if (rnum == 1)
				s.insert(pos, " ");

			pos = s.find(' ', pos + 1);
		}

		cout << s << endl << s.size() << endl;
		fout << s << endl;

	}

	fin.close();
	fout.close();

}