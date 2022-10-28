#include <stdio.h>


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