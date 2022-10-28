#include <stdio.h> 

int main() {
    float c_temp, f_temp;

    printf("Enter C temperature: ");
    scanf("%f", &c_temp);

    f_temp = c_temp * 9/5 +32;

    printf("Converted to F temperature: %.2f", f_temp);


    return 0;
}