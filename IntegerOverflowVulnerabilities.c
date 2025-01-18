#include <stdio.h>

// Every variable declaration has an assigned size of memory that is allocated to the variable
// any value assigned to the variable that is larger than the allocated memory causes the applciation to truncate the least significiant bit, resulting in a different value that expected by the developer.




//Explicit Typecast

// moving between unsigned and signed only works with very small numbers
//very large numbers with signs can be manipulated
in main () {
    unsigned int b = 5;
    int a = (int) b;
    return 0;
}

//Implicit Typecast

// typecast occurs during OS activity
// negative numbers are outside the acceptable range of values for an unsigned number
// puting a negative number into an unsigned variable makes the OS interpret the negative number as a very large positive number by dropping the most significnat bit (the sign)
// the below function fails because the the OS will interpret the very large positive number as greater than 5
int main() {
    unsigned in b = 5;
    int a = -4;
    if (a > b)
        printf("A is greater\n"):
    return 0;

}

//Withdrawal.c

#include <stdio.h>
#include "string.h"
#include "stdlib.h"

int balance = 5000;

void transfer(int number, int amount){
        printf("Transferring %i to receiptient %i.\n", amount, number);
}
//this  function uses the same data types for variables as the main function
//no typecasting
int performTransfers(int number, int amount){
    // only checks the account balance before the first attempted transaction
    //ensure there is enough balance to perform entire set of transfers
    // in one case, if the value of "amount" is larger than the permitted size of an int (say, 100 billion) the variable flips to a very small number and the transfers will happen
    // in another case, if "number" and "balance" are within the allowed integer size, but the product of those two equals something that is out of bounds, the function will break.
    if (number * amount <= balance) {
        for (int i=0; i < number; i++){
            transfer(i,amount);
            balance-= amount;
        }
        return 1;
    } else {
        return 0;
    }
}

int main(int argc, char** argv) {
    printf("Total balance: %i\n", balance) ;
    if (argc > 2) {
        int numRecipients = atoi(argv[1]);
        int amount = atoi(argv[2]);
        performTransfers(numRecipients, amount);
    } else {
        printf("Invalid call\n");
    }
}

//Withdrawal_Corrected.c

#include <stdio.h>
#include "string.h"
#include "stdlib.h"

int balance = 5000;

void transfer(int number, int amount){
        printf("Transferring %i to receiptient %i.\n", amount, number);
}

int performTransfers(int number, int amount){
    for (int i=0; i < number; i++) {
        // tests the balance of the account before each transaction, not just before the first one
        if (amount <= balance) {
            transfer(i,amount);
            balance-= amount;
        } else {
         printf("Transfer to recipeint %i failed. Insufficient funds.") ;
         return 0;
        }
    }
    return 1;     
}

int main(int argc, char** argv) {
    printf("Total balance: %i\n", balance) ;
    if (argc > 2) {
        int numRecipients = atoi(argv[1]);
        int amount = atoi(argv[2]);
        performTransfers(numRecipients, amount);
    } else {
        printf("Invalid call\n");