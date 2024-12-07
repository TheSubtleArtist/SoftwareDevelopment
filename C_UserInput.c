#include <stdio.h>

int main() {
    char data[20];
    puts("Enter some data here: ");
    scanf("%s", &data);
    printf("You entered: \n%s\n", data);
    return(0);
}

// Also


//fgets() limits the size of data
#include <stdio.h>

int main() {
    char data[20];
    puts("Enter some data here: ");
    fgets(data, sizeof data, stdin);
    printf("You entered: \n%s", data);
    return(0);
}

//Also

#include <stdio.h>
#include <string.h>

int main() {
    char data[20];
    FILE *file = fopen("test.txt", "r");

    fgets(data, sizeof data, file);
    // forces the "data" variable to reserve one spot for the end of line character
    //Effective when someething tries to overflow the variable
    if (strlen(data) > 0){
        if (data[strlen(data) - 1] != '\n') {
            data[strlen(data) - 1] = '\n';
        }
    }
    printf("The file contains: \n%s", data);
        fclose(file);
    return(0);
}