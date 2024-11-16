#include <iostream>
// enable multithreading
#include <thread>
#include <mutex>
#include <unistd.h>
using namespace std;

class Counter {
    int x;
    mutex m;
    public:
    // constructor function set value of x to 0
    Counter() : x(0) {}
    // whichever thread calling incrementer contstantly increments x
    void incrementer(){
        while(true)
        m.lock();
        x++;
        m.unlock();
    }
    // determines if the value of x is even or odd
    void test(){
        switch(x%2) {
            case 0:
                cout << "even\n";
                break;
            case 1:
                cout << "odd\n";
                break;
            default:
                // executes when there is a Race condition
                // race conditions happens when there is a conflict in the registers
                printf("neither even nor odd\n");
                exit(0);
                break; 
        }
    }
    void tester(){
        while (true)
            test();
        
    }
};

int main (int argc, char* argv[]){
    // initialize the class to a name "c"
    Counter c;
    // create two threads within the "c" class
    // pass the class to the c Counter by reference, run the "count" function

    thread th1(&Counter::incrementer,&c);
    thread th2(&Counter::tester,&c);
    // wait for both threads to complete
    th1.join();
    th2.join();
    return 0;
}