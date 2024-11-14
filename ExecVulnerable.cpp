#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main(int argc, char* argv[]) {
    string filename;
    cout << "Enter a filename to print: ";
    getline(cin,filename);
    // restricts to current working directory
    // the use of ./ prevents any chained command from executing because it will not be interpreted as a command
    // attacker can attempt to bypass by putting a single quote after the the file name and chaining a malicous command, but the sytem will escape the single quote and the chained command will not execute because it will look like text and not a command or data.
    // still vulnerable to directory traversal input such as ../../../../etc/passwd
    string dir = "./"+filename;
    // limits user capabilities more than calling system()
    execl("/usr/bin/cat","cat",dir.c_str(),(char*) 0);
    return 0;
}