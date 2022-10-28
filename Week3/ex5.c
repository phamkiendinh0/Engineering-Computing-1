#include <stdio.h> 


// Prompt  the  user  to  enter  an  integer  between  1  and  15  and  displays  a  pyramid  like  the 
// below example. Assume that the user always enters an integer between 1 and 15. 

int main() {
    int input;
    printf("Please enter an integer between 1 and 15: ");
    scanf("%d", &input);

    while(input > 0) {
        for (int i = input; i > 0; i--) {
            if (i == 1) {
                printf("%d ", i);
                break;
            }
            printf("%d ", i);
        }
        for (int i = 1; i <= input; i++) {
            if (i  == 1) {
                continue;
            }
            if (i == input) {
                printf("%d\n", i);
                break;
            }
            printf("%d ", i);
        }
        input = input - 1;
    }


    return 0;
}
