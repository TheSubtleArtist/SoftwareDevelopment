#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    // initialize a string to hold user input
    string filename;
    // ask user for the name of a file
    cout << "Enter a filename: ";
    // assign user input to the "filename" variable
    cin >> filename;
    //open the file and create the filepointer "fp"
    // giving the name of a non-existent file creates errors, like segmentation error
    FILE* fp = fopen(filename.c_str(),"r");
    // create memory space to hold 100 characters
    char buff[100];
    // only read 99 characters, leaving one space for the null terminators
    // avoid buffer overflow
    fread(buff,99,1,fp);
    // prints the contents of the buffer, even if some of the positions include non-printable characters
    printf("%s\n",buff);
    return 0;    
}