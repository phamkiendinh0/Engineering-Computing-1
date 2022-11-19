#include <stdio.h>
#include "myarray.h"

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
