#include <iostream>
#include <string>

using namespace std;

// Normal use of malloc returns a pointer. any problem with a malloc command returns a null pointer
// this function always returns a null pointer 
// restuls: this program will always restuls in a segmentation error
void* failMalloc(int length) {
        return NULL;
}


int main(int argc, char* argv[]) {
    // try to creat a character* buffer calling the failMalloc command
    // end result: 1024 bit character array
    char* buffer = (char*) failMalloc(1024);
    // load "Hello" in the the character array
    strcpy(buffer,"Hello");
    // print what is stored in the buffer
    printf("%s\n",buffer);
    return 0;

}