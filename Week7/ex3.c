#include <stdio.h>

/*
An integer is said to be prime number if it is greater than 1 and is divisible only by 1 and 
itself. For example, 2, 3, 5 and 7 are prime but 4, 6, 8 and 9 are not.  
Write a function that determines if a given integer is a prime number. A naïve algorithm 
is  to  test  if  the  given  integer  is  divisible  by  any  other  integers  between  1  and  itself 
exclusively. Is it possible to reduce the number of tests significantly to make the program 
more efficient? 
*/

int isPrime(int num);

int main() {
    printf("The number is prime: %d\n", isPrime(7));

    return 0;
}

int isPrime(int num) {
    int size = num/2;
    for (int i = 2; i < size; i++) {
        if (num % i == 0) {
            return 0;
            break;
        }
    }
    return 1;
}