#include <stdio.h>

/*
Write  a  function  to  solve  linear  equation  ax  +  b =  0  (function  parameters  are  a  and b). 
Return 1 if it can be solved (and print out result), 0 otherwise.  
*/


int linearEquation(int a, int b);

int main() {
    printf("Equation can be: %d\n", linearEquation(4, -8));
    return 0;
}


int linearEquation(int a, int b) {
    if (a == 0) {
        return 0;
    }
    else {
        int result = ((b - 2 * b) / a);
        printf("Result is: %d\n", result);
        return 1;
    }


}