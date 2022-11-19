#include <stdio.h>

/*
Recursive Functions 
*/

int calSum(int num);
void printArray(int array[], int length, int index);
void intToString(int num, char *ptr, int index);

int main() {
    //a. Write a function which calculates the sum of integers from 1 to n using recursion. 
    printf("Result is: %d\n", calSum(5));

    //b. Write a function which prints the array element using recursion. 
    int array[] = {1,2,3,4,5};
    printArray(array, 5, 0);
    //c. Write a function which converts an integer into a string using recursion. 
    // Test in main(): user inputs an integer (read in as int), then call the function and print 
    // it out as a string. 
    int num = 1234;
    int length = 0;
    while (num % 10 > 0) {
        length++;
        num /= 10;
    }
    num = 1234;
    printf("Length is: %d\n", length);
    char arr[length];
    char *ptr = arr;
    intToString(num, ptr, length - 1);
    printf("The new string is: %s\n", arr); 
    return 0;
}

int calSum(int num) {
    if (num == 1) {
        return num;
    }
    return num + calSum(num - 1);
}
void printArray(int array[], int length, int index) {
    if (index == length - 1) {
        printf("%d\n", array[index]);
        return;
    }
    printf("%d\n", array[index]);
    printArray(array, length, index + 1);
    return;
}

void intToString(int num, char *ptr, int index) {
    if (index == 0) {
        *ptr = num + '0';
        return;
    }
    int remainder = num % 10;
    ptr = ptr + index;
    *ptr = remainder + '0';
    ptr = ptr - index;
    index--;
    num = num / 10;
    intToString(num, ptr, index);
    return;
}