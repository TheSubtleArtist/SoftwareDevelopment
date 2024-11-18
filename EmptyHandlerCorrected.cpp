// Error Handling
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
            // if the file is not opened, transition function to the catch block
            throw "File Not Found";

    } catch (...) {
        // show the user an error and exit cleanly
        cout << "Could not open file" << endl;
        exit (-1);
    }
    string line;
    getline(file,line);
    cout << line << endl;
    file.close();
}