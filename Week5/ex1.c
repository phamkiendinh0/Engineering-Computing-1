#include <stdio.h>

//Write a program to ask the user to input a string, which may contain spaces, then do the following tasks 


int main() {
    //a. Find the length without using library functions. 
    char input[100];
    printf("Please enter a sentence: ");
    scanf("%[^\n]s", &input);
    printf("%s\n", input);
    int counter = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        counter++;
    }
    printf("There are %d characters inside the sentence\n", counter);

    //b. Count the number of uppercase and lowercase letters, total letters, digits, and 
    //punctuations without using library functions. 
    
    
    int upper = 0, lower = 0, letter = 0, digit = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        //For this problem, can also use <ctype.h> library to use its functions
        if (input[i] >= 48 && input[i] <= 57) {
            digit++;
        }
        if (input[i] >= 97 && input[i] <= 122) {
            lower++;
        }
        if (input[i] >= 65 && input[i] <= 90) {
            upper++;
        }        
    }
    letter = upper + lower;
    printf("There are %d uppercase, %d lowercase, %d letters, and %d digits.\n", upper, lower, letter, digit);


    //c. Replace the lowercase characters by uppercase and vice versa. 
    char temp[100];
    for (int i = 0; input[i] != '\0'; i++) {
        //For this problem, can also use <ctype.h> library to use its functions

        if (input[i] >= 97 && input[i] <= 122) {
            input[i] = input[i] - 32;
            continue;
        }
        if (input[i] >= 65 && input[i] <= 90) {
            input[i] = input[i] + 32;
        }   
    }
    for (int i = 0; input[i] != '\0'; i++) {
        printf("%c", input[i]);
    }

    //d. Reverse it (modify the string) without using any extra string
    
    int size = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        size += 1;
    }
    printf("\nSize of input is: %d\n",size);
    temp[size] = '\0';
    for (int i = 0; input[i] != '\0'; i++) {
        if (size == 0) {
            break;
        }
        else {
            temp[size - 1] = input[i];
            size--;
        }
    }
    for (int i = 0; temp[i] != '\0'; i++) {
        printf("%c", temp[i]);
    }    
    return 0;
}