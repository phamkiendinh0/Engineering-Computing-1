#include <stdio.h> 


// Get a sequence of positive integers from the user and compute their sum. The sequence 
// ends when the user enters a negative number. The sum should not include the negative 
// number  at  the  end  of  the  sequence.  How  many  positive  numbers  are  there  in  the 
// sequence? 

int main() {
    int counter = 0;

    int input, sum = 0;

    while (input >= 0) {
        printf("Enter a positive integer: ");
        scanf("%d", &input);
        if (input < 0) {
            break;
        }
        else {
            counter += 1;
            sum += input;
        }
    }

    printf("Sum is %d\n", sum);
    printf("There are %d positive integers", counter);

    return 0;
}
