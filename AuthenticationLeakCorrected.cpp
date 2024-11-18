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
    stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);
    cout << "Verification time: " << duration.count() << " ms." << endl;
}

int main(int argc, char* argv[]) {
    bool correct = false;
    string user;
    string pass;
    cout << "Enter username: ";
    getline(cin,user);
    cout << "Enter password: ";
    getline(cin,pass);
    start = std::chrono::high_resolution_clock::now();
    if (username != user) {
        correct = false;
    }
    if (pass.length() != password.length()) {
        correct = false;
    }
    sleep(.1);
    for (int i = 0; i < pass.length(); i++) {
        if (pass[i] != password[i]) {
        correct = false;
        }
        sleep(.1);
    }
    if (correct)
        printf("Authentication successful.\n");
    else
        printf("Authentication successful.\n");
    printRuntime();
    return 0;
}
