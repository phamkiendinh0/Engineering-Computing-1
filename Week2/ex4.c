#include <stdio.h>


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