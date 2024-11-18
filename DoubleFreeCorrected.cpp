#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char* argv[]) {
    // allocate three character pointers using malloc each with 5 bytes
    char* p = (char*) malloc(5);
    char* r = (char*) malloc(5);
    char* s = (char*) malloc(5);
    
    free(p);
    free(r);
    free(s);
    return 0;
    
}