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
    //Initialize container for user input
    int input;
    

    //Do while loop to make sure the program runs at least one 
    do
    {
        printf("Please enter an integer between 1 and 10: ");
        scanf("%d", &input);

        //If input is out of range, break the program
        if (input < 1 || input > 10) {
            printf("Invalid input integer!\n");
            break;
        }

        int middle = input;//middle index, where it is always the input value
        int value = input;//the value that will be used to print value for right side of the pyramid, decrease with each iteration 
        int rightIndex = input;//The index that will be used to display the value on each iteration
        int leftIndex = input;//The index that will mark the start of printable values beside space
        

        //First for loop for the rows
        for (int i = 1; i <= input; i++) {
            //If i is not 1, start to decrease the indexes of left and increase rightIndex on each iteration of the rows
            if (i != 1) {
                leftIndex -= 1;
                rightIndex += 1;
                value--;//This is the single value on right side 
            }
            //Second loop for the columns
            for (int j = 1; j <= input * 2; j++) {
                //If i = 1, then just need to print the middle value for the first line, and break;
                if (i == 1) {
                    if (j == middle) {
                        printf("%d\n", input);
                        break;
                    }
                    else {
                        printf("  ");//Before the value of first line, there are some spaces
                    }
                }
                //If we reach the last row, we need to print from 1 to input on left, and input to 1 on right 
                else if (i == input) {
                    if (j <= middle) {
                        printf("%d ", j);
                    }
                    else {
                        middle -= 1;//Middle starts = input, then decrease until 1

                        //If middle is 0, then we print a new line for nice display on next program's iteration
                        if (middle == 0) {
                            printf("\n");
                            break;
                        }
                        printf("%d ", middle);
                    }
                }

                //If row is not the first row and last row, then we print as requested format
                else {
                    //If we reach last column, print a new line for next row
                    if (j == input * 2) {
                        printf("\n");
                    }           
                    //If we have reached left, then we start to print the values
                    else if (j >= leftIndex && j <= middle) {
                        printf("%d ", j);
                    }
                    //If we reached the correct position for the right value, we print it
                    else if (j == rightIndex) {
                        printf("%d ", value);
                    }
                    //If the positions to print values haven't been reached, then we print spaces
                    else {
                        printf("  ");
                    }
                }
            }
        } 
    } while (input >= 1 && input <= 10);
    



    return 0;
}