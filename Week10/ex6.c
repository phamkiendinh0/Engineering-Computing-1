#include <stdio.h>

/*
Write your own version of the C library function int atoi(const char *str) which 
converts a string of digits str to an integer value and returns it. If no valid conversion 
could be performed, the function returns zero.  
*/
int atoi (const char *str);
int main() {
    char string[] = "3789 ";
    printf("The integer of the string is: %d", atoi(string));

    return 0;
}

int atoi (const char *str) {
    int result = 0;
    int multiply = 10;
    int num = 0;
    for (int i = 0; *str != '\0'; i++) {
        switch (*str)
        {
            case 48:
                num = 0;
                result = result * multiply + num;
                break;
            case 49:
                num = 1;
                result = result * multiply + num;
                break;
            case 50:
                num = 2;
                result = result * multiply + num;
                break;
            case 51:
                num = 3;
                result = result * multiply + num;
                break;
            case 52:
                num = 4;
                result = result * multiply + num;
                break;
            case 53:
                num = 5;
                result = result * multiply + num;
                break;
            case 54:
                num = 6;
                result = result * multiply + num;
                break;
            case 55:
                num = 7;
                result = result * multiply + num;
                break;
            case 56:
                num = 8;
                result = result * multiply + num;
                break;
            case 57:
                num = 9;
                result = result * multiply + num;
                break;
            default:
                break;
        }
        str++;
    }
    return result;
}