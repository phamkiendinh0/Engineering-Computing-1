#include <stdio.h>
#include <math.h>


//Get two numbers x, y, and find xy  using the pow() function from the math.h library.  

int main() {
    float x = 2;
    float y = 3;

    float result = pow(x,y);

    printf("Result is: %.f", result);
    return 0;
}