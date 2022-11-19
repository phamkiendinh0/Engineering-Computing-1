#include <stdio.h>

/*
Write  a program  that  uses  a  function to determine  if  a  given  year  is  a  leap  year  (which 
has 366 days). Test it in main() function (ask user to input year number).  
Note: a year is a leap year if it’s divisible by 400, or if it’s divisible by 4 but not divisible 
by 100. 
Examples:  
• 2000 is a leap year because it’s divisible by 400 
• 1900 is not a leap year because it’s divisible by 4 but also divisible by 100 
• 2019 is not a leap year because it’s not divisible by 4 
• 2020 is a leap year because it’s divisible by 4 but not divisible by 100 
*/

int leapYear(int year);

int main() {
    int year;
    printf("Please enter a year: ");
    scanf("%d", &year);

    printf("Year %d is: %d\n", year, leapYear(year));

    return 0;
}

int leapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}