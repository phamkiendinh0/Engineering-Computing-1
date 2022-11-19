#include <stdio.h>

/*
Write a function that accept a text and a searching keyword (both are string), return 1 if 
the keyword is found in the text and 0 otherwise.  
Do not use any built-in function in this exercise. 
*/

int search (char txt[], char keyword[]);

int main() {
    char txt[] = "Hi my name is Dinh";
    char keyword[] = "Hi";

    printf("Result is: %d\n", search(txt, keyword));
    return 0;
}


int search(char txt[], char keyword[]) {
    int txtSize = 0;
    int keySize = 0;
    for (int i = 0; txt[i] != '\0'; i++) {
        txtSize++;
    }

    for (int i = 0; keyword[i] != '\0'; i++) {
        keySize++;
    }
    // printf("Text size is: %d\n", txtSize);

    // printf("Key size is: %d\n", keySize);
    for (int i = 0; i <= txtSize - keySize; i++) {
        int found = 1;
        for (int j = 0; j < keySize; j++) {
            if (txt[i + j] != keyword[j]) {
                // printf("Text is: %c\n", txt[i+j]);
                // printf("Key is: %c\n", keyword[j]);
                found = 0;
            }
        }
        if (found) {
            return 1;
        }
        else {
            continue;
        }
    }

    return 0;
}