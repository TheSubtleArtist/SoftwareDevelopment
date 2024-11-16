#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    string filename;
    cout << "Enter file to open: ";
    getline(cin, filename);
    ifstream file;
    // try..catch block allows programmer to handle error rather than throw errur up the stack
    try {
        file.open(filename);
        if (!file.is_open())
            // on error, terminate execution, display the error
            cout << "Throwing exception" << endl;
            //transition function to the catch block
            throw "File Not Found";

    } catch (...) {

    }
    string line;
    getline(file,line);
    cout << line << endl;
    file.close();
}