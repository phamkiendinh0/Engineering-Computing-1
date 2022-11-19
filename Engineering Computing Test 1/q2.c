#include <stdio.h>


/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2022-3
  Lab Assessment: 1
  Author: Dinh Pham
  ID: S3878568
  Compiler used: gcc 11.2.0
  Created  date: 18/11/2022
  Acknowledgement: None
*/

int main() {
    //Initialize container for input from user
    int input;


    int sum = 0;// This will store the sum of even integers
    int min = 0;    //This will store the minimum number of input even integers from user
    int counter = 1;//This will help to initialize the min to user 1st input even integer
    
    //Do while loop to make sure we can receive first input before checking the condition
    do
    {
        fflush(stdin);//This will help to clear buffer in input stream, make sure the next input is read correctly
        printf("Please enter even integer: ");
        scanf("%d", &input);

        //If input is odd, continue = while loop condition check = break
        if (input % 2 == 1 && counter == 1) {
            printf("Your first input is an odd number!\n");
            input = 0;
            break;
        }
        if (input % 2 == 1 && counter > 1) {
            continue;
        }
        //Initialize min variable to 1st input integer for future comparison with other even integers input from user
        if (counter == 1) {
            min = input;
            counter++;//Counter is no more relevant
        }

        //If the new input integer is smaller than existing min, assign its value to min;
        if (input < min) {
            min = input;
        }

        //Sum the new even integer to the final sum
        sum += input; 
    } while (input % 2 != 1);
    
    //Print out result
    printf("The total sum is: %d\n", sum);
    printf("The smallest number is: %d\n", min);



    return 0;
}