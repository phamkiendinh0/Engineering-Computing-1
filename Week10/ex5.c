#include <stdio.h>
#include <string.h>
/*
Write a program to read in a string which may contains whitespace characters, print out 
the longest word of that string. 
*/

int main() {
    char string[100] = {};
    printf("Please enter a string: ");
    scanf("%[^\n]s", string);


    //get input length
    int length = 0, index = 0;
    while(string[index] != '\0') {
        length++;
        index++;
    }

    char word[100] = {};
    char longest[100] = {};
    int max = 0;
    index = 0;
    int counter = 0;
    while (index <= length) {
        if (string[index] == ' ' || string[index] == '\0') {
            if (counter > max ) {
                strcpy(longest, word);
                max = counter;
            }
            longest[strlen(longest) + 1] = '\0';
            counter = 0;    
            word[0] = '\0';
            index++;
        }
        else {
            word[counter] = string[index];
            printf("Current word: %s\n", word);
            counter++;
            index++;
        }
    }

    printf("The longest word is: %s\n", longest);
    return 0; 
}