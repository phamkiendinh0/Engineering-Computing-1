#include <stdio.h>

//Bubble Sort Algorithm is comparing two adjacent variables, and keep on going until no swap left

/*
Assume that we have an array like below 
char arr[] = {'R', 'M', 'I', 'T', 'U', 'n', 'i', 'v', 'e', 'r', 's', 'i', 't', 'y'}; 
Sort the array in ascending order using the bubble sort algorithm then print out the array. 
*/

int main() {
    char array[] = {'R','M','I','T','U','n','i','v','e','r','s','i','t','y'};

    int counter = 0;
    while(1) {
        for (int i = 0; i < 13; i++) {
            if (array[i] > array[i + 1]) {
                char temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                counter += 1;
            }
        }
        if (counter == 0) {
            break;
        }
        else {
            counter = 0;
            continue;
        }
    }

    for (int i = 0; i < 14; i++) {
        printf("The value is: %c\n", array[i]);
    }
    return 0;
}