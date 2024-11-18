#include <iostream>
#include <fstream>
#include "string.h"
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Enter filename: ";
    // nothing prevents directory traversal
    string filename;
    cin >> filename;
    ifstream ifs(filename.c_str());
    string s;
    ifs >> s;
    // this program only uses the first line of the target file
    cout << s << endl;
    return 0;
}