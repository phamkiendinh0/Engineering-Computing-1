#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // a. Create an array of 10 random integers between 50 and 100 inclusively.  
    int array[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        int num = rand() % 51 + 50;
        array[i] = num;
    }

    //b. Print the first to the last element of the array in one line. 
    for (int i = 0; i < 10; i++) {
        if (i == 9) {
            printf("Number %d is: %d.\n", i + 1, array[i]);
        }
        else {
            printf("Number %d is: %d, ", i + 1, array[i]);  
        }
    }
    //c. Print the last to the first element of the array in one line. 
    for (int i = 10; i > 0; i--) {
        if (i == 1) {
            printf("Number %d is: %d.\n", i , array[i]);
        }
        else {
            printf("Number %d is: %d, ", i , array[i]);  
        }
    }
    //d. How many elements greater than 80 are there in the array? Print them out in one line. 
    int counter = 0;
    for (int i = 0; i < 10; i++) {
        if (array[i] > 80) {
            counter += 1;
            printf("The number is: %d, ", array[i]);
        }
    }
    printf("There are %d numbers that are greater than 80.\n", counter);

    //e. What is the smallest element in the array (without sorting)? 
    int smallest = array[0];
    for (int i = 0; i < 10; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    printf("The smallest number in the array is: %d.", smallest);
    return 0;
}