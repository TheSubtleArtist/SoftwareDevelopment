#include <stdio.h>

int main() {

    /* '%s' is the command to insert a string 'username' after the comma is the string referenced by the %S, like "format" in python.*/
  	char username[] = "jameslyne";
  	printf("Your username is %s \n", username);
    return(0);
}

#include <stdio.h>


int main() {
  	char username[] = "jameslyne";
    int age = 934;
  	printf("Your username is %s and you are %d years old\n", username, age);
    return(0);
}