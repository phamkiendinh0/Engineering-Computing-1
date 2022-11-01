#include <stdio.h>

/*
A palindrome is a string that reads the same both forward (left-to-right) and backward (right-
to-left). Here are some palindromes: "eye”, “madam", “otto”, "1224221". Get a string and check 
if it is a palindrome or not.  
*/

int main() {
    char str[] = "oppo";
    int size = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        size++;
    }

    int correct = 1;

    if (size % 2 == 0) {
        for (int i = 0; i < size; i++) {
            if (str[i] != str[size - i - 1]) {
                correct = 0;
            }
        }
    }
    else {
        int counter = 0;
        int middle = (size + 1) / 2 - 1;

        for (int i = 0; i < middle; i++) {
            if (str[i] != str[size - i - 1]) {
                correct = 0;
            }
            else {
                counter++;
                continue;
            }
        }
    }
    if (correct == 0) {
        printf("The string is not a palindrome\n");
    }
    else {
        printf("The string is a palindrome");
    }
    return 0;
}