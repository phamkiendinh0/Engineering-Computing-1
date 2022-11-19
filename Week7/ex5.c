#include <stdio.h>

/*
Write  a  function  that  takes  an  integer  and  returns  another  integer  with  its  digits 
reversed. For example, if the given integer is 8592, the function should return 2958. 
*/

int reverseInt(int num);

int main() {
    printf("Reverse: %d\n", reverseInt(6235));
    return 0;
}

int reverseInt(int num) {
    int result = 0; 
    while (num % 10) {
        result = result *10;
        result += (num % 10);
        num = num / 10;
    }
    return result;
}