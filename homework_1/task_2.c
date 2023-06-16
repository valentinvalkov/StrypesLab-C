#include <stdio.h>

int main() {
    signed int number;

    printf("Enter a number: ");
    scanf("%d", &number);
   
    if (number >= -100000 && number <= 100000) {
        if (((number >> 31) & 1)) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    } else {
        fprintf(stderr, "Number is out of range [-100000; 100000]!!!\n");
        return 1;
    }
    
    return 0;
}