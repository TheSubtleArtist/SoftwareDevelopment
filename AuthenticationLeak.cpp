#include <iostream>
#include <string>
#include <unistd.h>
#include <chrono>
using namespace std;

string username = "admin";
string password = "Password!";

// measure runtime of the authentication function
std::chrono::time_point<std::chrono::system_clock> start, stop;

void printRuntime() {
    // find out current runtime and store in "stop"
    stop = std::chrono::high_resolution_clock::now();
    // find the difference between the stop time and the start time, which will be assigned later in the program
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);
    // print how long the program took to run
    // the longer the verification time, the the further into the authentication process the attacker made it.
    // increases the efficiency of a brute force attack (letter by letter)
    cout << "Verification time: " << duration.count() << " ms." << endl;
}

int main(int argc, char* argv[]) {
    string user;
    string pass;
    cout << "Enter username: ";
    getline(cin,user);
    cout << "Enter password: ";
    getline(cin,pass);
    // assign the start time
    // starts the point we can identify any sensitive data leak
    start = std::chrono::high_resolution_clock::now();
    if (username != user) {
        // Leak: telling a malicious actor they used the wrong username, speeds the hacking process
        printf("Incorrect username.\n");
        printRuntime();
        exit(-1);
    }
    // easy to check the length of the password before checking the values of the password
    if (pass.length() != password.length()) {
        // Leak: telling a malicious actor they used the wrong password, speeds the hacking process
        printf("Incorrect password.\n");
        printRuntime();
        exit(-1);
    }
    sleep(.1);
    for (int i = 0; i < pass.length(); i++) {
        if (pass[i] != password[i]) {
        // Leak: telling a malicious actor they used the wrong password, speeds the hacking process
            printf("Incorrect password.\n");
            printRuntime();
            exit(-1);
        }
        sleep(.1);
    }
    printf("Authentication successful.\n");
    return 0;
}
