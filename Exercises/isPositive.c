#include <stdio.h>

int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if((number>>15)== 0){
        printf("Positive\n");
    }else{
        printf("Negative\n");
    }

    return 0;
}