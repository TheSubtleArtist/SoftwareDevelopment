#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    string filename;
    cout << "Enter a filename to print: ";
    getline(cin,filename);
    // calls a system command to execute a function rather than writing own function within the applciation namespace
    // hands over execution to the shell and cat may have root privileges
    // the error given by the application is the same as the error given by the system command
    // the matching error is a clue for a malicous actor what is going on and how to abuse.
    // example exploit input: "randotext; pwd" or "randotext.txt; cat /etc/passwd"
    // still vulnerable if input is an invalide file name followed by a malicous command: "fake.txt; cat /etc/passwd"
    std::string cmd = "cat "+filename;
    system(cmd.c_str());
    return 0;
}