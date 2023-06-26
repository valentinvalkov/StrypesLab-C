#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int quadratic_equation(double a, double b, double c, double* X1, double* X2);

int main(){
    double a, b, c, X1, X2;

    printf("Calculate the quadratic equation\n\n");
    printf("Enter a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(quadratic_equation(a, b, c, &X1, &X2)==0){
        printf("\nX1=%.2lf", X1);
        printf("\nX2=%.2lf", X2);
    }else{
        fprintf(stderr,"\nNo real roots");
    }

    return 0;
}

int quadratic_equation(double a, double b, double c, double* X1, double* X2){

    double D = b * b - 4 * a * c;

    if(D > 0){
        *X1 = (-b-sqrt (D)) / (2*a);
        *X2 = (-b+sqrt (D)) / (2*a);

        return 0;
    }else if(D == 0){
        *X1 = -b/ (2*a);
        *X2 = -b/ (2*a);

        return 0;
    }

    return -1;
}