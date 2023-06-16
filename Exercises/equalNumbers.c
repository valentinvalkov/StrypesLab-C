#include <stdio.h>

int main(){
    int number_1, number_2;

    printf("Enter a two numbers: ");
    scanf("%d %d", &number_1, &number_2);

    printf("%d\n",number_1 == number_2);

    return 0;
}