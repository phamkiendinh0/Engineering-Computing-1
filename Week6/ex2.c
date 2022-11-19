#include <stdio.h>


/*
Assume there is an array int arr[] = {12, 7, -3, 4, 1}; 
*/

int main() {
    int arr[] = {12,7,-3,4,1};
    int *ptr1 = arr;
    //a. Print the array elements in the normal order. 
    for (int i = 0; i < 5; i++) {
        printf("The value at index %d is: %d\n", i + 1, *(ptr1 + i));
    }

    int *ptr2 = arr;
    // b. Print the array elements in the reverse order. 
    for (int i = 5; i != 0; i--) {
        printf("The value at index %d is: %d\n", i, *(ptr2 + i - 1));
    }
    // c. Calculate the sum of all elements in the array. 

    int sum = 0;
    int *ptr3 = arr;
    for (int i = 0; i < 5; i++) {
        sum += *ptr3;
        ptr3++;
    }
    printf("Total sum is: %d\n", sum);
    // d. Reverse the elements of the array, i.e. make it become [1, 4, -3, 7, 12]. 
    int *ptr4 = arr;
    int *ptr5 = &arr[4];
    int temp;
    while(*ptr4 != *ptr5) {
        temp = *ptr4;
        *ptr4 = *ptr5;
        *ptr5 = temp;
        ptr4++;
        ptr5--;
    }

    int *ptr6 = arr;
    for (int i = 0; i < 5; i++) {
        printf("The value at index %d is: %d\n", i + 1, *(ptr6 + i));
    }

    return 0;
}