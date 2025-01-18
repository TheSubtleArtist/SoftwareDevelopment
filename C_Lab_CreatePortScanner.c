#include <stdio.h>

int main() {
    puts("Hello, Foundations World!");
    return(0);
}


/*
Execution command: 
gcc -o test output.c; ./test
  */


 /* 
 Also
 
 */

#include <stdio.h>
#include <string.h>

int main () {
   char str1[30];
   strcpy(str1, "Hello Foundations World");
   char str2[] = "Hello Foundations World";
   puts(str1);
   puts(str2);
   return(0);
}