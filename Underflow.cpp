// Underflow the minimum value the variable is capable of storing


#include <iostream>
 int balance = 10;

// here is an implicit typecast
// "a" becomes an unsigned integer named "value"
// the function will be executed as a very large positive value and subtract a very large sum from the balance.
void transfer(uint value) {
	printf("Transferring %u\n",value);
	balance -= value;
}

int main (int argc, char* argv[]) {
	// use case 1: input that results in an "a" which is less than "balance" results in successful function
	// use case 2: input that results in an "a" that is larger than "balance" and the function will not execute.
	// use case 3: input of a value that makes no sense, such as a negative value which meets the current validate statement, but is not logically correct and may result in an unexpected transfer
	if (argc < 2) {
		exit(-1);
	}
	// "a" is instantiated as an signed integer but becomes unsigned at the "transfer" function
	int a = atoi(argv[1]);
	printf("Balance is %i\n",balance);
	// checks for a value less than "balance"
	// typecasting exploit: does not check for values of a that make no sense in the context, such as negative numbers
	// A negative value here passes the test and will be passed to the transfer function
	if (a < balance)  {
	 	transfer(a);
	}
	return 0;
}