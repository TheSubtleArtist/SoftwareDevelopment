#include <iostream>
#include "stdio.h"
#include "string.h"

int main(int argc, char* argv[]){
    if (argc <2)
        exit(-1);
    char intput[5];
    // "sizeof(input)" allows flexibility if developer wants to reassign the size of the "input" variable
    // the size of "input" is set and the strncpy function takes whatever the size of "input" is set to
    // any string under the size of the "input", no problem
    // any "input" of size 5 completely fills the buffer and leaves no room for a null teriminator. The printf function will continue to print until it finds a null terminator
    strncpy(input,argv[1],sizeof(input));
    printf("You typed %s\n",input);
    return 0;
}