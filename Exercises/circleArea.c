#include <stdio.h>

#define PI 3.141592

int main(){
    float number;

    printf("Enter a circle radius: ");
    scanf("%f", &number);

    float total = PI *(number * number);

    printf("Circle area is: %.2f cm^2\n", total); 

    return 0;
}