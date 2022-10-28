#include <stdio.h>


int main() {

    float vnd, usd;
    const int RATE = 23150;
    printf("Enter Viet Nam Dong amount: ");
    scanf("%f", &vnd);


    usd = vnd * RATE;

    printf("The USD amount is: %.f", usd);

    return 0;
}