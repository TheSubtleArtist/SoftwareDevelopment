// Simulate a bank withdrawal

// system header libraries
#include <iostream>
// user header files found
// searches first in the file where the program is stored, second in the quote directories, then in the system header libraries folder
#include "string.h"
// must declare a namespace
using namespace std;

int balance = 5000;

void transfer(int number, int amount) {
    printf("Transferring %i to receipient %i\n",amount,number);
}

bool performTransfer(int number, int amount) {
    for (int i = 0; i < number; i++) {
        // fix: check balance before initiating a transaction
        if (amount <= balance) {
            transfer(i,amount);
            balance-= amount;
        } else {
            printf("Transfer to %i failed. Insufficient balance.|n",i);
          }
    }
}

int main(int argc, char* argv[]) {
    printf("Total balance: %i\n",balance);
    if (argc > 2) {
        int numRecipients = atoi(argv[1]);
        // problem 2: if the user inputs any value that is too large, meaning greater than the maximum size the "int" variable allows, the input flips to a negative number
        // if the input flips negative, no matter what the amount, it will be lower than the balance, which is a positive number
        int amount = atoi(argv[2]);
        performTransfer(numRecipients,amount);
    } else {
        printf("Invalid call");
    }
}