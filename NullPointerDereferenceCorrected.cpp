//Null Pointer Dereference
// When a pointer doesn't point to a memory location

#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char* argv[]) {
    char* c = NULL;
    // test to ensure "c" is something other than null
    // still subject to RACE conditions if something happens between the if and the print
    // developer should have done something to assign an address
    if (c)
        printf("%s\n",c);
    return 0;
}