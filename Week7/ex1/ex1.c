#include <stdio.h>

/*
Write a function for each of the following and test by calling them in main(). 
*/

void printArray(int *ptr, int size);
void printArrayReverse(int *ptr, int size);
int findMax(int *ptr, int size);
int find(int *ptr, int size, int num);

int main() {
    //a. Accept an array of integers and its size then print the array elements. 
    int array[] = {1,2,3};
    int *ptr = array;
    printArray(ptr, 3);
    //b. Accept  an  array  of  integers  and  its  size  then  print  the  array  elements  in  reverse 
    // order. 
    printArrayReverse(ptr, 3);

    //c. Accept an array of integers and its size then return the maximum element in that 
    // array 
    printf("The max number is: %d\n", findMax(ptr, 3));

    //d. Accept an array of integers, its size, and another integer. Return 1 if the integer is 
    // found in the array and 0 otherwise. 

    printf("Result of finding is: %d\n", find(ptr, 3, 4));
    return 0;
}


void printArray(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d element: %d\n", i , *ptr);
        ptr++;
    }
}

void printArrayReverse(int *ptr, int size) {
    printf("Print Reverse\n");
    int counter = 1;
    for (int i = size; i != 0; i--) {
        printf("%d element: %d\n", counter , *(ptr + i - 1));
        counter++;
    }
}

int findMax(int *ptr, int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (*ptr > max) {
            max = *ptr;
            ptr++;
        }
        else {
            ptr++;
        }
    }
    return max;
}

int find(int *ptr, int size, int num) {
    int result = 0;
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (*ptr == num) {
            found = 1;
            break;
        }
        else {
            ptr++;
        }
    }

    if (found) {
        return 1;
    }
    else {
        return 0;
    }

    return num;
}
