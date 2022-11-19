#include <stdio.h>

/*
Digits of an integer 
*/

void printdigits(int i);
int sum (int i);
int main() {
    int num = 4568;
    /*
    a. Write a function printdigits(int i) which prints the digits of positive integer i 
    separated by a space. For example, printdigits (7258) prints 7 2 5 8. 
    */
    printdigits(num);

    /*
    b) Write another function which calculates the sum of digits of a positive integer using 
    recursion. 
    */

    printf("\nResult of sum for %d is: %d\n", num, sum(num));
    
    int test = num % 10;
    printf("Test is: %d", test);
    return 0;
}

void printdigits(int i) {
    int copy = i;
    int length = 0;
    while (copy % 10 > 0) {
        length++;
        copy = copy / 10;
    }
    int array[length];
    int index = 0;
    while (i % 10 > 0) {
        int remainder = i % 10;
        printf("Remainder is: %d\n",remainder);
        array[index] = remainder;
        i = i / 10;
        index++;
    }

    for (int i = length; i != 0; i--) {
        printf("%d ", array[i - 1]);
    }
    return;
}

int sum (int i) {
    if (i / 10 < 1) {
        return i; 
    }
    int remainder = i % 10;
    i = i / 10;
    return remainder + sum(i);
}