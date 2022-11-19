#include <stdio.h>

/*
Write a recursive function that takes an array of integers as parameters and returns the sum 
of the elements in the array.  
*/
int sum(int *ptr, int length);

int main() {
    int array[] = {1,2,3,4,5,6};
    int *ptr = array;
    printf("Sum of array is: %d", sum(ptr,6));
    return 0;
}


int sum(int *ptr, int length) {
    if (length == 1) {
        return *ptr;
    }
    return *ptr + sum(ptr + 1, length - 1);
}