#include <stdio.h>

//Get an integer from the user then calculate the sum of all the digits in that integer. For 
//example, if the integer is 932, the sum of all the digits is 9+ 3 + 2 = 14. 

int main() {

    int asmt1, asmt2, asmt3;

    const float RATE1 = 0.3;
    const float RATE2 = 0.3;
    const float RATE3 = 0.4;


    printf("Please enter assignment weights: ");
    scanf("%d %d %d", &asmt1, &asmt2, &asmt3);
    printf("ASMT1: %d\n",asmt1);
    printf("ASMT2: %d\n",asmt2);
    printf("ASMT3: %d\n",asmt3);

    float result = RATE1 * asmt1 + RATE2 * asmt2 + RATE3 * asmt3;
    printf("Result is: %.2f", result);
    return 0;
}