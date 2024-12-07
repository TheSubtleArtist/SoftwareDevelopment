#include <stdio.h>

int main() {
    char array[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};

    puts(array);

    array[0] = 'A';
    array[1] = 'r';
    array[2] = 'r';
    array[3] = 'r';
    array[4] = 'r';

    puts(array);

    return(0);
}