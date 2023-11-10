// functions that manupilate array

#include "varArray.h"
#include <iostream>

using std::cin; using std::cout; using std::endl;

void output(int *arrayPtr, int size) {
	for (int i = 0; i < size; ++i) {
		cout << arrayPtr[i] << " ";
	}
	cout << endl;
}

int check(int *arrayPtr, int number, int size) {
	for (int i = 0; i < size; ++i) {
		if (number == arrayPtr[i])
			return i;
	}
	return -1;
}

void addNumber(int *&arrayPtr, int number, int &size) {
	if (check(arrayPtr, number, size) == -1) {
		size++;
		int *tmpArrayPtr = new int[size];
		tmpArrayPtr = arrayPtr;
		tmpArrayPtr[size-1] = number;
		arrayPtr = tmpArrayPtr;
	}
}

void removeNumber(int *&arrayPtr, int number, int &size) {
	if (check(arrayPtr, number, size) != -1) {
		size--;
		int tmp = 0;
		int *tmpArrayPtr = new int[size];
		for (int i = 0; i < size + 1; i++) {
			if (i != check(arrayPtr, number, size)) {
				tmpArrayPtr[tmp] = arrayPtr[i];
				tmp++;
			}
		}
		arrayPtr = tmpArrayPtr;
	}
}
