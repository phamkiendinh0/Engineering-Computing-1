#include <stdio.h>

// Selection Sort Algorithm is keep comparing the current position to the rest position to find either the largest/smallest
// Then move on to the next position and repeat the process

int main() {
    //a. Create an array of 5 integers. Ask the user to enter values for them.  
    int array[5] = {};
    int input;

    for (size_t i = 0; i < 5; i++)
    {
        printf("Please enter number for array[%d]: ", i);
        scanf("%d", &input);
        array[i] = input;
    }
    //b. Sort the array in ascending order using the selection sort algorithm then print the array. 
    
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("Value %d is: %d \n", i + 1, array[i]);
    }

    return 0;
}