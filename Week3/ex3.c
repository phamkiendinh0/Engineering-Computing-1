#include <stdio.h> 

// Display  the  characters  in  the  ASCII  Table  from  '!'  to  '~'  nicely  as  below.  There  are  15 
// characters per line. The characters are separated by one space. 


int main() {
    char array[] = {'!','0','1','2','3','4','5','6'};

    int counter = 0;
    for (size_t i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        if (counter == 5) {
            counter = 0;
            printf("\n%c", array[i]);
        }
        else {
            printf("%c", array[i]);
            counter++;  
        }
    }
    

    return 0;
}
