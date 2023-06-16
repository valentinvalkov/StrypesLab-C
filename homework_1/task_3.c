#include <stdio.h>

#define PI 3.141592

int main() {
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);

    if ((number - PI) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}