// Marcus Rowe
// CIS 1202
// May 1, 2022

#include<iostream>

using namespace std;

char character(char start, int offset) {
	char target = start + offset;
	if (!isalpha(start)) {
		throw "invalidCharacterException";
	}
	if (!isalpha(target)) {
		throw "invalidRangeException";
	}
	if (isupper(start) && islower(target) || islower(start) && isupper(target)) {
		throw "upperLowerTransitionException";
	}
	return target;
}

int main() {
	try {
		char a = character('a', 1);
		cout << a << endl;
	}
	catch (const char* b) {
		cout << b << endl;
	}
	try {
		char a = character('a', -1);
		cout << a << endl;
	}
	catch (const char* b) {
		cout << b << endl;
	}
	try {
		char a = character('Z', -1);
		cout << a << endl;
	}
	catch (const char* b) {
		cout << b << endl;
	}
	try {
		char a = character('?', 5);
		cout << a << endl;
	}
	catch (const char* b) {
		cout << b << endl;
	}
	try {
		char a = character('A', 32);
		cout << a << endl;
	}
	catch (const char* b) {
		cout << b << endl;
	}







	return 0;
}