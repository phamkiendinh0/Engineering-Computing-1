#include <stdio.h>

/*
Ask the user to input a valid number from 1 to 10 inclusively. If the input is out of that 
range, prints out an error message and ask again until it is valid. 
Then, print out the multiplication table like below (from 1 up to the above value). 
*/

int main() {
    int input;
    do
    {
        fflush(stdin);
        printf("Please enter from 1 to 10: ");
        scanf("%d", &input);
        if (input < 1 || input > 10) {
            printf("Invalid input!\n");
        }
    } while (input < 1 || input > 10);
    

    for (int i = 0; i <= input; i++) {
        if (i == 0) {
            printf("x | ");
            for (int k = 1; k <= input + 1; k++) {
                if (k == input + 1) {
                    printf("\n_________________\n");
                }
                else {
                    printf("%d ", k);
                }
            }
        }
        else {
            printf("%d | ", i);
            for (int j = 1; j <= input; j++) {
                printf("%d ", i * j);
            }
            printf("\n");
        }
    }

    return 0;
}