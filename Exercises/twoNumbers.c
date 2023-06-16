#include <stdio.h>

int main(){

    unsigned int number_1, number_2;

    printf("Enter two positive integer numbers: ");
    scanf("%d %d", &number_1, &number_2);

    if((number_1 % number_2) == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}