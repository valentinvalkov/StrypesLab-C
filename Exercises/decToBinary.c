#include <stdio.h>

int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number >= 0 && number <= 255){
        for(int i=7; i>=0; i--){
            int bit = (number >> i) & 1;
            printf("%d", bit);
        }
        printf("\n");
    }else{
        fprintf(stderr, "You enter number out of range!!!\n");
    }

    return 0;
}