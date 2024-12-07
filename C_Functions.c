#include <stdio.h>

int addStuff(int valueA, int valueB) {
    return(valueA + valueB);
}

int main() {
    int result = addStuff(5, 10);
    printf("The answer is: %d\n", result);
}