#include <iostream>
#include "vararray.h"

using std::cout; using std::endl;

varArray::varArray() {
	dArray = new int[0];
}

int varArray::check(int number) {
	for (int i = 0; i < size; ++i) {
		if (number == dArray[i])
			return i;
	}
	return -1;
}

void varArray::addNumber(int num) {
	if (check(num) == -1) {
		size++;
		int *tmpArrayPtr = new int[size];
		tmpArrayPtr = dArray;
		tmpArrayPtr[size - 1] = num;
		dArray = tmpArrayPtr;
	}
}

void varArray::removeNumber(int num) {
	if (check(num) != -1) {
		size--;
		int tmp = 0;
		int *tmpArrayPtr = new int[size];
		for (int i = 0; i < size + 1; i++) {
			if (i != check(num)) {
				tmpArrayPtr[tmp] = dArray[i];
				tmp++;
			}
		}
		dArray = tmpArrayPtr;
	}
}

void varArray::output() {
	for (int i = 0; i < size; ++i) {
		cout << dArray[i] << " ";
	}
	cout << endl;
}

varArray::varArray(const varArray &obj) {
	size = obj.size;
	dArray = new int[size];
	for (int i = 0; i < size; i++)
		dArray[i] = obj.dArray[i];
}

varArray & varArray::operator=(const varArray &obj) {
	if (this != &obj) {
		size = obj.size;
		delete[] dArray;
		dArray = new int[size];
		for (int i = 0; i < size; i++)
			dArray[i] = obj.dArray[i];
	}
	return *this;
}

varArray::~varArray() {
	delete[] dArray;
}
