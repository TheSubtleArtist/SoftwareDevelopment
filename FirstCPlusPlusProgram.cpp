// system header libraries
#include <iostream>
// user header files found
// searches first in the file where the program is stored, second in the quote directories, then in the system header libraries folder
#include "string.h"
// must declare a namespace
using namespace std;


int main(int argc, char* argv[]) {
        // the string declaration is a flexible size and will adjust to include the string and the null terminator
        string s = "Hello world";
        cout << s << endl;
        return 0;
}