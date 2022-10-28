#include <stdio.h> 

// Get a final result of a course as a float between 0 and 100 inclusively, then print the final
// grade for that course based on the below table. If the user enters a final result smaller 0 
// or greater than 100, print an error message and keep on asking the user to re-enter again 
// until the final result is eventually between 0 and 100. 
// Final result Final grade 
// result < 50 NN 
// 50 <= result < 60 PA 
// 60 <= result < 70 CR 
// 70 <= result < 80 DI 
// result >= 80  HD 


int main() {
    float result;
    printf("Please enter your final result: ");
    scanf("%f", &result);

    printf("\nResult is: %.f\n", result);

    while(result < 0 || result > 100) {
        printf("\nPlease re-enter your final result, must be greater than 0 and lesser than 100: ");
        scanf("%f", &result);
        printf("\nNew result is: %.f", result);
    } 

    if (result < 50) {
        printf("Your score is: NN");
    }
    else if (result >= 50 && result < 60) {
        printf("Your score is: PA");
    }
    else if (result >= 60 && result < 70) {
        printf("Your score is: CR");
    }
    else if (result >= 70 && result < 80) {
        printf("Your score is: DI");
    }
    else if (result >= 80 && result <= 100) {
        printf("Your score is: HD");
    }


    return 0;
}


