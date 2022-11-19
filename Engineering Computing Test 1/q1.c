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
    //Initialize variables to store input data from user
    int day, hour, minute;
    printf("Please enter days, hours, and minutes: ");
    scanf("%d %d %d", &day, &hour, &minute);

    //Use this to store the total minute that is the sum of input day, hour and minute
    int totalMinute = 0;
    
    /*
        1 day = 24 hours
        1 hour = 60 minutes
        => 1 day = 24 * 60 minutes
    */

    //Convert day to minutes and sum it to totalMinute
    totalMinute += day * 24 * 60;

    //Convert minute to minutes and sum it to totalMinute
    totalMinute += hour * 60;

    //Sum input minutes to totalMinute
    totalMinute += minute;


    //Print total sum of minutes
    printf("There are: %d minutes\n", totalMinute);

    return 0;
}