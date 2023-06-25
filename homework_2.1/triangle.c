#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int triangle(double side_a, double side_b, double side_c, double *P, double *S);

int main()
{
    double side_a, side_b, side_c, P, S;
    
    printf("Enter side A of the triangle: ");
    scanf("%lf", &side_a);
    
    printf("Enter side B of the triangle: ");
    scanf("%lf", &side_b);
    
    printf("Enter side C of the triangle: ");
    scanf("%lf", &side_c);
    
    if (triangle(side_a, side_b, side_c, &P, &S) == 0) {
        printf("\nPerimeter: %.2lf cm\n", P);
        printf("Area: %.2lf cm^2\n", sqrt(S));
    } else {
        printf("Invalid triangle input!!!\n");
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

    return 1;
}
