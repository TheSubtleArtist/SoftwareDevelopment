#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char* argv[]) {
    // allocate three character pointers using malloc each with 5 bytes
    char* p = (char*) malloc(5);
    char* r = (char*) malloc(5);
    // for some reason, someone decided to make the job easier by just using p to initialize s
    char* s = p;
    
    free(p);
    free(r);
    // this does not free s, it attempts to free p again
    // creates a compiler error warning
    free(s);
    return 0;
    
}