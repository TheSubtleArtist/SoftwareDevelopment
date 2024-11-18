#include "stdio.h"
#include "string.h"
#include <iostream>

int main(int argc, char* argv[]){
    if (argc <=1)
        exit(-1);
    char input[5];
    // use of strncpy limits the "n"umber of bytes to copy
    // the "4" tell the number of bytes to store and copy
    // this leaves room from the null terminator
    strncpy(input,argv[1],4);
    printf("You typed %s\n",input);
}