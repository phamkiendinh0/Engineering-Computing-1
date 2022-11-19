#include <stdio.h> 

//The program below gets a Celsius temperature then convert it to Fahrenheit

int main() {
    //a. Create a program namely ex1_c2f.c

    //b. Run and test it 
    float c_temp, f_temp;

    printf("Enter C temperature: ");
    scanf("%f", &c_temp);

    f_temp = c_temp * 9/5 +32;

    printf("Converted to F temperature: %.2f", f_temp);


    return 0;
}