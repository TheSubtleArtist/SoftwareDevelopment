#include <iostream>
#include "stdio.h"
#include "string.h"

int main(int argc, char* argv[]) {
    if (argc < 2)
        exit(-1);
    char intput[5];
    // make sure the strncpy leaves room for the null terminator by subtracking 1 from the sizeof(input)
    strncpy(input,argv[1],sizeof(input)-1);
    printf("You Types %s\n"input);
    return 0;
}