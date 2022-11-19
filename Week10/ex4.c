#include <stdio.h>

/*
Create an array of 5 integers. Ask the user to enter values for them. 
Sort the array in ascending order then print out the array. 
*/

int main() {
    int array[5] = {};
    printf("Please enter 5 consecutive numbers: ");
    scanf("%d%d%d%d%d", &array[0], &array[1], &array[2], &array[3], &array[4]);


    //Using selection sort

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++)
        {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        
    }

    for (int i = 0; i < 5; i++) {
        printf("Array %d: %d\n",i,array[i]);        
    }

    return 0;
}