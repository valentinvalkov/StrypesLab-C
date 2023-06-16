#include <stdio.h>

int main(){

    char small, capital;
    int ascii;

    printf("Enter a small letter: ");
    scanf("%c", &small);

    ascii = small;

    if(small >= 97 && small <= 122){
        capital = ascii - 32;
        printf("The capital letter is: %c\n", capital);
    } else{
        fprintf(stderr, "Wrong input!!!\n");
        return 1;
    }

    return 0;
}