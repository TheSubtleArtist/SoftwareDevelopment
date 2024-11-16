// open a file and export the lines in fixed chunk sizes

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    string filename;
    int filesize, chunksize;
    ifstream file;
    cout << "Enter filename: ";
    cin >> filename;
    cout << "Enter file size: ";
    cin >> filesize;
    cout << "Enter read chunk size: ";
    cin >> chunksize;
    try {
        char buffer(chunksize);
        file.open(filename);
        if (!file.is_open()) 
            throw (string) "File not found";
        // determine the number of chunks needed to completely read the file
        // likely error: user enters zero for a chunksize creates a a floating point exception
        int numIters = (filesize/chunksize)+1;
        for (int i = 0; i <numIters; i++) {
            file.read(buffer,chunksize);
            printf("%s",buffer);
        }
    } catch (...) {
        cout << "file not found" << endl;
        exit(-1);
    }
}