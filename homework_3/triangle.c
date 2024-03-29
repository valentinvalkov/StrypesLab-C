#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int triangle(double side_a, double side_b, double side_c, double *P, double *S);

int main()
{
    double side_a, side_b, side_c, P, S;
    
    printf("Enter the triangle sides: ");
    scanf("%lf %lf %lf", &side_a, &side_b, &side_c);
    
    if (triangle(side_a, side_b, side_c, &P, &S) == 0) {
        printf("\nPerimeter: %.2lf cm\n", P);
        printf("Area: %.2lf cm^2\n", sqrt(S));
    } else {
        fprintf(stderr,"\nInvalid triangle sides!!!\n");
    }
    
    return 0;
}

int triangle(double side_a, double side_b, double side_c, double *P, double *S) {
    if (side_a > 0 && side_b > 0 && side_c > 0 && side_a + side_b > side_c && side_c + side_b > side_a && side_a + side_c > side_b) {
        *P = side_a + side_b + side_c;
        double half_perimeter = *P / 2;
        *S = half_perimeter * (half_perimeter - side_a) * (half_perimeter - side_b) * (half_perimeter - side_c);
        
        return 0;
    }

    return -1;
}