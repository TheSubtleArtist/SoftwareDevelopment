#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int r = rand() % 20;

    printf("The value of r is: %d\n", r);

    if (r < 5) {
        puts("r is less than 5");
    } else if (r > 15) {
        puts("r is greater than 15");
    } else {
        puts("r is not less than 5 or greater than 15.");
    }
    return(0);
}