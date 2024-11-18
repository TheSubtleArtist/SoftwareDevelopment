#include <iostream>
#include <string.h>
#include <malloc.h>
using namespace std;

int main(int argc, char* argv[]) {
    char* p = (char*) malloc(10);
    cout << "Say Hello!: ";
    cin >> p;
    strcpy(p,"hello");
    cout << p << endl;
    // free the pointer only after all use of the point is completely done
    free(p);
    return 0;
}