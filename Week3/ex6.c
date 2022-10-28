#include <stdio.h> 

// Prompt the user to enter an integer between 1 and 15 inclusively then display a pyramid 
// accordingly as shown in the below sample. If the user enters an integer outside of 1 to 15, 
// the program repeatedly asks the user to re-enter until the input falls in the range. Here is 
// a sample run: 


int main() {
    int input;

    printf("Enter an integer between 1 and 15: ");
    scanf("%d", &input);

    while (input < 1 || input > 15) {
        printf("Enter an integer between 1 and 15: ");
        scanf("%d", &input);
    }



    int start;
    int size = input * 2;
    int middle = input + 1;
    int counter = 0;

    while (counter <= input) {
        start = middle - counter;
        for (int i = 0; i < size; i++) {
            if (i != start) {
                printf("  ");
                continue;
            }
            if (i == start) {
                for (int j = counter; j > 0; j--) {
                    printf("%d ",j);
                }
                for (int j = 2; j <= counter; j++) {
                    printf("%d ", j);
                }
            }
        }
        printf("\n");
        counter++;
    }



    return 0;
}
