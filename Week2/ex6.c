#include <stdio.h>

/*
In an imaginary course, there are three assessments asmt1, asmt2, and asmt3 whose 
weights are 30%, 30% and 40% respectively. Get the values of asmt1, asmt2, and asmt3 
from the user in one line then compute the final result and print it with two digits after 
the decimal. Assume that the values that the user enters are always integers between 0 
and 100.  
*/

int main() {
    int input;
    printf("Please enter a digit: ");
    scanf("%d", &input);

    int sum;
    while(input % 10 >= 1) {
        sum += input % 10;
        input = input / 10;
    }

    printf("the final sum is: %d", sum);
    return 0;
}