#include <stdio.h>


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