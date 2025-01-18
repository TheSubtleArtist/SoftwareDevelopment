#include <stdio.h>

//Implicit Typecast

int main() {
    unsigned int b = 5;
    // int declaratrions are unsigned
    // the negative sign puts a 1 in the most signfiicant bit
    // the software interprets the 1 as the beginning of a very large positive number
    int a = -4;
    if (a > b) {
        printf("A is greater\n");
    }
    return 0;
}

// cast.c

#include <stdio.h>
#include "stdlib.h"

int balance = 10; 

void transfer (uint value) {
    printf("Transferring %u. \n", value);
    balance -= value;
}

// user input of 9 or less works, specifically because a less than sign was used.
// user input of 10 or higher leads to failure, but the application works.
// user input of a negative value  will transfer a very large amount out of the account
// this exploit is specifically because "int" does not allow signed integers
// this is also a logical flaw. developers should also check the number is an acceptable value
int main (int argc, char** argv) {
    if (argc < 2) {
        printf ("invalid call.\n");
        return -1;
    }
    int a = atoi(argv[1]);
    printf("Balance is %i.\n", balance);
    if (a < balance) {
        transfer(a);
    
    } else {
        printf("invalid input.\n")
    }
    return 0;
}

// cast_Corrected.c

#include <stdio.h>
#include "stdlib.h"

int balance = 10; 

void transfer (uint value) {
    printf("Transferring %u. \n", value);
    balance -= value;
}

// user input of 9 or less works, specifically because a less than sign was used.
// user input of 10 or higher leads to failure, but the application works.
// user input of a negative value  will transfer a very large amount out of the account
// this exploit is specifically because "int" does not allow signed integers
// this is also a logical flaw. developers should also check the number is an acceptable value
int main (int argc, char** argv) {
    if (argc < 2) {
        printf ("invalid call.\n");
        return -1;
    }
    int a = atoi(argv[1];
    // add a test
    if (a >= 0) {
    printf("Balance is %i.\n", balance);
    if (a < balance)
        transfer(a);
    } else {
        printf("invalid input.\n")
    }
    return 0;
}