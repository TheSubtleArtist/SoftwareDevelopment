#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *getStr(int chars) {
    // Create space for 'chars' number of characters + 1 byte on the heap
    // The extra byte is for the string line terminator which is a 0x00 or a null byte
    char *string = malloc((sizeof(char) * chars) + 1);
    // For loop to add 'chars' number of A's to the address at the string variable on the heap
    int i;
    for (i = 0; i < chars; i++) {
        strcat(string, "A");
    }
    return(string);
}

int main() {
    // This program generates a random number between 0 and 19.
    // Then it creates a character array in memory on the heap big enough for
    // That random number of characters.

    // Generate a random number between 0 and 19
    //srand(unsigned int seed) seeds the random number generator used by the function rand.
    srand (time(NULL));
    int r = rand() % 20;
    printf("Going to save %d 'A's into memory this time!\n", r);

    char *res = getStr(r);

    puts(res);
    free(res);
    return(0);
}