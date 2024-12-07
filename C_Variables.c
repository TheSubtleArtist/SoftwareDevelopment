#include <stdio.h>

int main() {
    int anInt = 42;
    long aLong = 42;
    short aShort = 42;

    unsigned int anUnsignedInt = 42;
    unsigned long anUnsignedLong = 42;
    unsigned short anUnsignedShort = 42;
    float aFloat = 0.1337133713371337;
    double aDouble = 0.1337133713371337;

    printf("anInt contains: %d and is size: %lu\n", anInt, sizeof(anInt));
    printf("aLong contains: %ld and is size: %lu\n", aLong, sizeof(aLong));
    printf("aShort contains: %hd and is size: %lu\n", aShort, sizeof(aShort));

    printf("anUnsignedInt contains: %u and is size: %lu\n", anUnsignedInt, sizeof(anUnsignedInt));
    printf("anUnsignedLong contains: %lu and is size: %lu\n", anUnsignedLong, sizeof(anUnsignedLong));
    printf("anUnsignedShort contains: %hu and is size: %lu\n", anUnsignedShort, sizeof(anUnsignedShort));
    printf("aFloat is value: %20.18f\n", aFloat);
    printf("aDouble is value: %20.18f\n", aDouble);

    char character = 'A';
    char string[] = "Hello, World!";
    printf("character is: %c\n", character);
    printf("character is also decimal: %d\n", character);
    printf("character is also hexadecimal: %x\n", character);
    printf("A string is just an array of characters, for example: %s\n", string);



    return(0);
}