#include <stdio.h>

/*
Write  a  function  intpow(base,  exponent)  that  returns  the  value  of  baseexponent.  For 
example, intpow(3, 4) = 34 = 81. Assume that exponent is a positive nonzero integer, and 
base is an integer. Do not use any math library functions.  
*/

int intpow(int base, int exponent);

int main() {
    printf("Value is: %d\n", intpow(2,2));


    return 0;
}


int intpow(int base, int exponent) {
    for (int i = 1; i < exponent; i++) {
        base = base * base;
    }   
    return base;
}