#include <stdio.h> 

// Print a multiplication table nicely as below. Hint: use nested loop. 

int main() {
    int x = 11;
    int y = 11;
    int counter = 0;
    int line = 1;

    for (int i = 0 ; i < x; i++) {
        if (i == 0) {
            printf("x | 1 2 3 4 5 6 7 8 9 10\n______________________________________________\n");
            continue;
        }
        for (int j = 0; j < y; j++)
        {
            if (j == 0) {
                printf("%d | ", line);
                continue;
            }
            int result = i * j;
            printf("%d ", result);
            if (counter == 9) {
                printf("\n");
                counter = 0;
                line += 1;
            }
            else {
                counter++;
            }
        } 
    }

    return 0;
}
