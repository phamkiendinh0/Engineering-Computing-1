#include <stdio.h>

//Get an amount in VND then convert it to USD. Assume that the exchange rate of 1 USD 
//to VND is 23,150 VND. 

int main() {
    int input;
    printf("Please enter a time digit: ");
    scanf("%d", &input);

    int hour, minute;

    if (input % 60 >= 1) {
        hour = input / 60;
        minute = input - 60 * hour;
        printf("%d Hour %d Minutes", hour, minute);
    }
    else {
        hour = 0;
        minute = input;
        printf("0 Hour %d Minutes", minute);
    }
    return 0;
}