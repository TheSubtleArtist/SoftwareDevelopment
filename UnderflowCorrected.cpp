
// Underflow function corrected

#include <iostream>

int balance = 10;

void transfer(uint value) {
	printf("Transferring %u\n",value);
	balance -= value;
}

int main (int argc, char* argv[]) {

	if (argc < 2) {
		exit(-1);
	}
	int a = atoi(argv[1]);
	// make sure "a" is greater than zero
	if (a >= 0) {
		printf("Balance is %i\n",balance);
		if (a < balance)  {
	 		transfer(a);
		} else{
			printf("Invalid input %i\n",a);
		}
	}


	return 0;
}

