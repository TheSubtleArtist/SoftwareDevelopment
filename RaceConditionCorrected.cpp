#include <iostream>
// enable multithreading
#include <thread>
// mutex ensures that operations are atomic
// atomic operations are a set series  of operations performed one after another without interruption from another operatinon
#include <mutex>
#include <unistd.h>
using namespace std;

class Counter {
    int x;
    mutex m;
    public:
    // constructor function set value of x to 0
    Counter() : x(0) {}
    // publicly accessible function
    void increment(){
        // use mutex to prevent two threads of the class from interfereing with each other.
        m.lock();
        x++;
        m.unlock();
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