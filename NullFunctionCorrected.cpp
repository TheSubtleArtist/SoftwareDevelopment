#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    string filename;
    cout << "Enter a filename: ";
    cin >> filename;
    // only perform steps if a file actually opens
    if (FILE* fp = fopen(filename.c_str(),"r")) {
        char buff[100];
        fread(buff,99,1,fp);
        printf("%s\n",buff);
    } else {
        cout << "Failed to open file" << endl;
    }

    return 0; 