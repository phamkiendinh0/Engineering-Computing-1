#include <stdio.h>
#include <string.h>
/*
Assume that the full name is written in the form of first name, middle name (optional), last 
name. Example: Minh Van Nguyen.  
*/

int main() {
    //a. Get 5 full names then find the first names and print them out in one line as below.
    char input[100];
    char name[5][100];
    char fname[5][100];


    for (int i = 0; i <5; i++) {
        //For this problem, can also use <string.h> library to use its functions
        printf("Please enter full name %d: ", i + 1);
        scanf("%[^\n]s", &input);
        fflush(stdin);

        int size = 0;
        for (int j = 0; input[j] != '\0'; j++) {
            size++;
        }

        for (int j = 0; j < size + 1; j++) {
            if (j == size) {
                name[i][j] == '\0';
            }
            name[i][j] = input[j];
            // strcpy(name[i], input); //Can use this as replacement for the above method
        }
    }

    for (int i = 0; i < 5; i++) {
        char temp[100] = {};
        for (int j = 0; name[i][j] != '\0'; j++) {
            if (name[i][j] == ' ' || name[i][j] == '\0') {
                temp[j] = '\0';
                break;
            }
            else {
                temp[j] = name[i][j];
            }
        }
        strcpy(fname[i], temp);
    }

    printf("The first names are: %s, %s, %s, %s, and %s.\n", fname[0], fname[1], fname[2], fname[3], fname[4]);



    //b. Sort the full names in alphabetical order. 
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            int index = 0;
            while (1) {
                if (fname[i][index] == fname[j][index]) {
                    index++;
                }
                else {
                    break;
                }
            }
            if (fname[i][index] > fname[j][index]) {
                char temp[100];
                strcpy(temp, fname[i]);
                strcpy(fname[i], fname[j]);
                strcpy(fname[j], temp);
            }
        }
    }
    //Print
    for (int i = 0; i < 5; i++) {
        printf("%s\n", fname[i]);
    }
    return 0;
}