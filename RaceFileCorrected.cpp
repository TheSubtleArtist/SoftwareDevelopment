// time of check versus time of use race condition
#include <iostream>
#include <string.h>
#include <unistd.h>
#include <fstream>
#include <openssl/sha.h>
using namespace std;

int main(int argc, char* argv[]) {
    string filename = "benign.sh";
    ifstream f(filename);  
    unsigned char* h = (unsigned char*) "7b97293fc9ca3a5d52ebe9de506aa4740e527881";    

    if (f.is_open()) {
        string line;
        unsigned char hash[20];
        // get the first / next line of the file
        getline(f,line);
        // generate the SHA1 hash of the line
        SHA1((const unsigned char*) line.c_str(),line.length(),hash);
        //store the hash value in a character array
        char hex[3];
        // here is the "time of check"
        for (int i=0; i< 20; i++) {
            //generate the HEX value of each character in the hash
            sprintf(hex,"%02X",hash[i]);
            if (hex[0] != h[2*i] | hex[1] != h[(2*i)+1])
                exit(0);
        }
    printf("Hash matched\n");
    // artificial delay that creates the vulnerability 
    sleep(10);
    printf("Running file\n");
    string cmd = "./"+filename;
    // here is the time of use
    // between time of check and time of use there is a delay that allows underlying code to change values stored in registers
    //changing the reference from the file in the stream to the variable holding the line from the file, any alteration to the file does not impact the running of the code.
    // this no longer relies on the file being unchanged / correct
    // time of check and time of use are, essentially, happening at the same time
    system(line.c_str());
    }
    return 0;
}