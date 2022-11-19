#include <stdio.h>

/*
What will get printed if x is 1 and x is 0? Explain. 
*/

int main() {
    int x = 1; 
 
    printf("%s%c %c %c\n", x ? "" : "NOT ", "hello"[1],  *("abcd" + 2),  *"1234" + 3); 
    // This will print 
    // index 1 in string "hello"
    // pointer + 2 index in string "abcd"
    // pointer + 3 index in string "1234"
    return 0;
}