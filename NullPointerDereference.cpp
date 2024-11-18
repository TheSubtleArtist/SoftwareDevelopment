//Null Pointer Dereference
// When a pointer doesn't point to a memory location

#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char* argv[]) {
    // declare a character pointer
    // initialized to null
    // commonly used to initialized pointers before being used
    // poor practiced because NULL is outside the callable memory of any application
    // Segmentation Fault
    char* c = NULL;
    printf("%s\n",c);
    return 0;
}