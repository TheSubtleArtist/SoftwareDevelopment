#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char* argv[]) {
	string input;
	cout << "Say something: ";
	cin >> input;
	// wrong format string specifier
	// %s is the pointer to a character array, not the input string.
	printf("You said: %s\n",input);
}