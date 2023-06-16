#include <stdio.h>

int main(){
    int number_1, number_2, number_3;

    printf("Enter a three numbers: ");
    scanf("%d %d %d", &number_1, &number_2, &number_3);

    if(number_2 > number_1 && number_2 < number_3){
        printf("YES\n");
    }

    return 0;
}