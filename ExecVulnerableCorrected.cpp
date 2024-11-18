#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main(int argc, char* argv[]) {
    string filename;
    cout << "Enter a filename to print: ";
    getline(cin,filename);
    // protects against the directory traversal
    if (filename.find("..") != std::string::npos) {
        cout << "Invalide filename" << endl;
        exit(-1);
    }
    string dir = "./"+filename;
    execl("/usr/bin/cat","cat",dir.c_str(),(char*) 0);
    return 0;