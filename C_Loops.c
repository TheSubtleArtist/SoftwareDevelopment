#include <stdio.h>

int main() {
    // While Loop
    puts("While Loop:");
    int a = 0;
    while (a <= 5) {
        printf("a is %d\n", a);
        a++;
    }

    // For Loop
    puts("\nFor Loop:");
    int x;
    for (x = 0; x <= 5; x++) {
        printf("x is %d\n", x);
    }

    // Nested Loop
    puts("\nNested Loop:");
    int i;
    int j;
    for (i = 0; i <= 5; i++) {
        for(j = 0; j <= 5; j++) {
            printf("When i is %d, j is %d\n", i, j);
        }
    }
    return(0);
}