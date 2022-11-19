#include <stdio.h>

//Get an integer as minutes then calculate its equivalent in hours and remaining minutes. 
//For example, 768 minutes is 12 hours 48 minutes.

int main() {

    float vnd, usd;
    const int RATE = 23150;
    printf("Enter Viet Nam Dong amount: ");
    scanf("%f", &vnd);


    usd = vnd * RATE;

    printf("The USD amount is: %.f", usd);

    return 0;
}