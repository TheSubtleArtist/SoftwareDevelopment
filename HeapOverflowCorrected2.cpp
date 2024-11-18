#include "stdio.h"
#include "stdlib.h"
#include <cstring>
using namespace std;

//define a varaible that will allow for flexibility throughout the applciation
#define BUFSIZE 5

int main(intargc, char* argv[]) {
    if (argc <2)
        exit(-1);
    // set up a null pointer
    char* buffer;
    buffer = (char*) malloc(sizeof(char)*BUFSIZE);

    strncpy(buffer,argv[1],BUFSIZE=1);
    print("You typed %s\n",buffer);
    return 0;
}