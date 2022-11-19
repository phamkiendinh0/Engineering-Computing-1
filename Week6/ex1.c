#include <stdio.h>

/*
This  program  simply  illustrates  the  usage  of  a  pointer,  but  has  a  bug  inside.  Check 
where is the bug, and why, then fix it (print out letter ‘B’). 
*/

int main() {
    //a. Illustration
    char ch = 'A';
    char *ptr = &ch;

    *ptr = 'B';
    printf("%c\n", ch);

    //b. Consider the following statements 
    /*
        int *p, a, b; 
        a = 42; 
        b = a; 
        p = &a; 
    */

    /*
        After  the  above  statements,  which  of  the  following  statements  will  change  the 
        value of a to 75? 
        a. b = 75; 
        b. *b = 75; 
        c. p = 75; 
        d. *p = 75; 
        e. *(&a) = 75;
        The answer is: d
    */

    //c. 
    /*
        Given that p is a pointer to an array arr as below 
        int arr[] = {10, 20, 30, 40, 50, 60}; 
        int *p = arr; 
        Using only one instruction, replace the number 30 in the array by 100. How many 
        ways you have? 
    */
        int arr[] = {10, 20, 30, 40, 50, 60}; 
        int *p = arr;
        //Way 1 
        p += 2;
        *p = 100;
        //Way 2
        p -= 2;
        arr[2] = 30;
        arr[2] = 100;
        printf("%d\n", arr[2]);

    //d. Print out all address of all elements in the array above (Hint: use & operator to get 
    // address, and %d, %x or %p for format specifier).  
    for (int i = 0; i < 6; i++) {
        printf("Address of the %d element is: %p\n", i + 1, (p + i));
        printf("Address of the %d element is: %x\n", i + 1, (p + i));
    }
    /*
    What  is  the  difference  between  addresses  of  two  consecutive  elements,  and  why? Answer: The size of type int in c
    Change the array type to char to check and confirm your understanding. 
    */
    return 0;
}