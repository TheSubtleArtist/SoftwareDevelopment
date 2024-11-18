#include <iostream>
// enable multithreading
#include <thread>
#include <unistd.h>
using namespace std;

class Counter {
    int x;
    public:
    // constructor function set value of x to 0
    Counter() : x(0) {}
    // publicly accessible function
    void increment(){
        // here is the race condition
        // breaks down to multiple functions during compilation
        // at least three instructions affecting the registers with nothing to control which thread gets to use the registers in what order
        x++;
    }
    void count() {
        for (int i = 0; i <1000000; i++) {
            increment();
        }
    }
    int getCounter() {
        return x;
    }
};

int main (int argc, char* argv[]){
    // initialize the class to a name "c"
    Counter c;
    // create two threads within the "c" class
    // pass the class to the c Counter by reference, run the "count" function

    thread th1(&Counter::count,&c);
    thread th2(&Counter::count,&c);
    // wait for both threads to complete
    th1.join();
    th2.join();
    // get the value of c
    cout << c.getCounter() << endl;
    return 0;
}