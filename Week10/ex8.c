#include <stdio.h>
#include <math.h>

/*
a. Define a data type time with elements are integer values of hour, minute, second. 
Ask the user to input two time values in hh:mm:ss format, and print out their 
difference (first time – second time) in hours with two digits of precision (after decimal 
point). 

b) Create an array of 4 time values and ask the user to input values for them with correct 
format above, then print out the latest time. 
*/
typedef struct {
    int hour;
    int minute;
    int second;
} time;

int compareTime(time t1, time t2);
time getMax(time *ptr, int length);

int main() {
    //a. 
    time t1;
    time t2;

    printf("Please input 1st time in hh:mm:ss format: ");
    scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);
    printf("1st time is: %d:%d:%d\n", t1.hour, t1.minute, t1.second);
    fflush(stdin);

    printf("Please input 2nd time in hh:mm:ss format: ");
    scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);
    printf("2nd time is: %d:%d:%d\n", t2.hour, t2.minute, t2.second);
    fflush(stdin);
    compareTime(t1,t2);
    /*
    b) Create an array of 4 time values and ask the user to input values for them with correct 
    format above, then print out the latest time. 
    */
    time t3, t4;

    printf("Please input 3rd time in hh:mm:ss format: ");
    scanf("%d %d %d", &t3.hour, &t3.minute, &t3.second);
    printf("3rd time is: %d:%d:%d\n", t3.hour, t3.minute, t3.second);
    fflush(stdin);

    printf("Please input 4th time in hh:mm:ss format: ");
    scanf("%d %d %d", &t4.hour, &t4.minute, &t4.second);
    printf("4th time is: %d:%d:%d\n", t4.hour, t4.minute, t4.second);
    fflush(stdin);

    time array[] = {t1,t2,t3,t4};
    time *ptr = array;

    time max = getMax(ptr, 4);
    printf("The most recent time is: %d:%d:%d\n", max.hour, max.minute, max.second);
    return 0;
}

time getMax(time *ptr, int length) {
    time max = {0,0,0};

    for (int i = 0; i < length; i++) {
        time *pointer = ptr;
        for (int j = 0; j < length; j++) {
            if (max.hour < pointer->hour) {
                max = *pointer;
                pointer++;
            }
            else if (max.hour == pointer->hour) {
                if (max.minute < pointer->minute) {
                    max = *pointer;
                    pointer++;
                }
                else {
                    if (max.second < pointer->second) {
                        max = *pointer;
                        pointer++;
                    }
                    else {
                        pointer++;
                        continue;
                    }
                }
            }
            else {
                pointer++;
                continue;
            }
        }
    }

    return max;
}



int compareTime(time t1, time t2) {
    
    time t3;
    if (t1.hour > t2.hour) {
        if (t1.second - t2.second < 0) {
            t2.minute += 1;
            t1.second += 60;
            t3.second = abs(t1.second - t2.second);
        }
        else {
            t3.second = abs(t1.second - t2.second);
        }

        if (t1.minute - t2.minute < 0) {
            t2.hour += 1;
            t1.minute += 60;
            t3.minute = abs(t1.minute - t2.minute);
        }
        else {
            t3.minute = abs(t1.minute - t2.minute);
        }
        t3.hour = t1.hour - t2.hour;
        printf("The time difference is: %d:%d:%d\n", t3.hour, t3.minute, t3.second);
        return 1;
    }
    else {
        if (t2.second - t1.second < 0) {
            t1.minute += 1;
            t2.second += 60;
            t3.second = abs(t2.second - t1.second);
        }
        else {
            t3.second = abs(t2.second - t1.second);
        }

        if (t2.minute - t1.minute < 0) {
            t1.hour += 1;
            t2.minute += 60;
            t3.minute = abs(t2.minute - t1.minute);
        }
        else {
            t3.minute = abs(t2.minute - t1.minute);
        }
        t3.hour = t2.hour - t1.hour;
        printf("The time difference is: %d:%d:%d\n", t3.hour, t3.minute, t3.second);
        return 2;
    }
}
