#include <stdio.h>

void doStuff(int stuff) {
    stuff = 1337;
    printf("Within the doStuff() function, the variable stuff has the value: %d\n\n", stuff);
}

int main() {
    int stuff = 42;
    printf("Within the main function, before doStuff is called, the variable stuff has the value: %d\n\n", stuff);
    //calling the variable stuff
    doStuff(stuff);
    printf("Within the main function, after doStuff is called, the variable stuff has the value %d\n\n", stuff);
    return(0);
}

//Also

#include <stdio.h>

void doStuff(int * stuff) {
    *stuff = 1337;
    printf("Within the doStuff() function, the variable stuff has the value: %d\n\n", *stuff);
}

int main() {
    int stuff = 42;
    printf("Within the main function, before doStuff is called, the variable stuff has the value: %d\n\n", stuff);
    // Notice here calling the actually memroy location of "stuff"
    doStuff(&stuff);
    printf("Within the main function, after doStuff is called, the variable stuff has the value %d\n\n", stuff);
    return(0);
}

/*
	doStuff(int * stuff): This means the doStuff function expects a pointer to an integer value. 
    A pointer is a memory address, so it expects a memory address that is storing an integer.
    
    *stuff = 1337;: This means the value at the memory address 'stuff' is 1337. It's a way of accessing data at a pointer.
    
    doStuff(&stuff);: This is calling the doStuff function, and passing in the memory address of the stuff variable in the main function.


*/