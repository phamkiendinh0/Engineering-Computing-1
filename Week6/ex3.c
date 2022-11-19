#include <stdio.h>


/*
Write a program to ask the user to input a string, which may contain spaces, then do the 
following tasks 
*/

int main() {
    char string[100] = {};
    printf("Please enter a string: ");
    scanf("%[^\n]s", string);
    char *ptr = string;

    //a. Calculate  the  length  of  a  given  string.  You  are  not  allowed  to  use  the  built-in 
    // function strlen() in this question. 
    printf("You entered: %s\n", string);

    int length = 0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    printf("The length of input string is: %d\n", length);

    //b. Convert a given string to uppercase. You are not allowed to use the built-in function 
    // toupper() in this question. 
    ptr = string;

    while (*ptr != '\0') {
        *ptr = *ptr - 32;
        ptr++;
    }
    printf("Converted string: %s\n", string);
    //c. Ask the user to enter a searching keyword, and text for replacement. Print out the 
    // string after replacement. 
    char input[100] = {};
    char search[100] = {};
    char replace[100] = {};
    fflush(stdin);
    printf("Please enter a string: ");
    scanf("%[^\n]s", input);
    fflush(stdin);
    printf("Please enter search keyword: ");
    scanf("%[^\n]s", search);
    fflush(stdin);
    printf("Please enter replacement keyword: ");
    scanf("%[^\n]s", replace);


    printf("Entered input is: %s\n", input);
    printf("Entered search is: %s\n", search);
    printf("Entered replace is: %s\n", replace);

    int inputLength = 0, searchLength = 0, replaceLength = 0;

    while (input[inputLength] != '\0') {
        inputLength++;
    }    
    while (search[searchLength] != '\0') {
        searchLength++;
    }    
    while (replace[replaceLength] != '\0') {
        replaceLength++;
    }


    char new[100]; //To create a new string from the result of replaced text
    
    for (int i = 0; i < inputLength - searchLength; i++) {
        int found = 1;
        //Matching the search string to input string by examining characters by characters
        for (int j = 0; j < searchLength; j++) {
            if (search[j] != input[i + j]) {
                found = 0;
                continue;
            }
        }
        if (found) {
            //Copy the element before the 1st search characters inside input string
            int index = 0;
            int position = i + 1;

            for (int j = 0; j < i; j++) {
                new[j] = input[j]; 
                index++;
            }
            //Copy the replacement string into the new string
            char *str1 = replace;
            while (*str1 != '\0') {
                new[index] = *str1;
                str1++;
                index++;
            }
            //Copy the rest input characters that are after the search string inside input string
            for (int j = position; j < inputLength; j++) {
                new[index] = input[j];
                index++;
            }
            //Assign end of string to print out properly
            new[index] = '\0';
            break;
        }
    }
    printf("\nResult is: %s\n", new);
    return 0;
}