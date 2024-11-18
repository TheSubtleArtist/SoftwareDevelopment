#include "stdio.h"
#include "string.h"
#include <iostream>

int main(int argc, char* argv[]){
    if (argc <= 1)
        exit(-1);
    char input[5];
    //performs completely unbounded copy
    //reads from one memory location to another until it locates a null terminator
    //requires the programmer to provide perfect null terminators
    // will overwrite or overread memory addresses if there is no null terminator or will write over the buffer if the string is larger than the given buffer
    // any input of size 5 does not leave room for the null terminator, so the null terminator will be written to the next space after the varialbe, which is outside the buffer
    // any input that is very long will create a segmentation fault and crashes the applciation
    // implications: overwrite critical information like stack return, passwords; denial of servcie through segmentation fault
    strcpy(input,argv[1]);

    printf("You typed %s\n",input);

}