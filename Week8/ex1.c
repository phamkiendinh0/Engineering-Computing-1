#include <stdio.h>

/*
Pass by value or reference 
*/
void myfunc (int *num);
void swap(int *a, int *b);

int main() {
    /*
    a. Retype and run the program below. Is the actual parameter is passed by value or 
    reference when myfunc is called? => Passed by value
    Modify the function so that x becomes 20 after 
    the function call (hint: you need to pass address through an pointer). 
    */

   int x = 0;
   myfunc(&x);
   printf("Value of x: %d\n", x);

    /**
    b.Continue  with  Q.b  by  creating  another  function  namely  swap  and  test  it  in  the 
    main  program  as  below.  Run  and  see  that  they  swap  the  values  or  not.  If  not, 
    please fix it so that the values are swapped properly. 
     * 
     */

    int a = 1;
    int b = 2;
    printf("Value of a before swap: %d\n",a);
    printf("Value of b before swap: %d\n",b);
    swap(&a, &b);
    printf("Value of a after swap: %d\n",a);
    printf("Value of b after swap: %d\n",b);

    return 0;
}

void myfunc (int *num) {
    *num = 20;
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}