#include "stdio.h"
#include "stdlib.h"
#include <cstring>
using namespace std;

int main(intargc, char* argv[]) {
    if (argc <2)
        exit(-1);
    // set up a null pointer
    char* buffer;
    // point at some useful memory
    // buffer = the size of a character * 5
    // malloc does not return a character pointer 
    // (char*) is the explicit typecast that changes the malloc to the char which fits the deffintion of buffer in the previous line
    // this method forced "buffer" into the heap, not the stack
    // input with signficiantly larger size than allowed does not result in a segmentation fault
    // result becomes a corrupted top size in the heap
    buffer = (char*) malloc(sizeof(char)*5);
    strcpy(buffer,argv[1]);
    print("You typed %s\n",buffer);
    return 0;
}