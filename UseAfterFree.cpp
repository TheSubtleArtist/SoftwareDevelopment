#include <iostream>
#include <string.h>
#include <malloc.h>
using namespace std;

int main(int argc, char* argv[]) {
    char* p = (char*) malloc(10);
    cout << "Say Hello!: ";
    cin >> p;
    free(p);
    // now trying to use the pointer after marked free
    // risk: someone else already using the space and strcpy will overwrite the other user's data
    // MDCOA: overwriting a highly complex password candidate with the string "hello" resulting in an extremely weak password for another user
    // also, calling this for a print in the future could print sensitive data or other unexpected data
    // also using strcpy instead of strncpy
    strcpy(p,"hello");
    cout << p << endl;
    return 0;

}