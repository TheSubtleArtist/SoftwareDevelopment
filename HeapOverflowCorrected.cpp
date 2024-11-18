#include "stdio.h"
#include "stdlib.h"
#include <cstring>
using namespace std;

int main(intargc, char* argv[]) {
    if (argc <2)
        exit(-1);
    // set up a null pointer
    char* buffer;
    buffer = (char*) malloc(sizeof(char)*5);
    // use strncopy and specify a number that is one less than the size of the buffer defined by previous line
    // leaves room for the null teriminator
    // limitation: hardcoding the value in strncpy reduces program flexibility
    strncpy(buffer,argv[1],4);
    print("You typed %s\n",buffer);
    return 0;
}