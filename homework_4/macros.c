#include <stdio.h>

#define MAX(x, y, z) ((x) > (y) ? ((x) > (z) ? (x) : (z)) : ((y) > (z) ? (y) : (z)))
#define MIN(x, y, z) ((x) < (y) ? ((x) < (z) ? (x) : (z)) : ((y) < (z) ? (y) : (z)))
#define SETBIT(mask, bit) ((mask) |= (1 << (bit)))
#define CLEARBIT(mask, bit) ((mask) &= ~(1 << (bit)))
#define INVERSEBIT(mask, bit) ((mask) ^= (1 << (bit)))
#define CHECKBIT(mask, bit) (((mask) >> (bit)) & 1)
#define SWAP(a, b) do { int temp = (a); (a) = (b); (b) = temp; } while(0)

void printBinary(unsigned int num);

int main() {
    int a = 100, b = 20, c = 35;

    printf("The biggest number is: %d\n",  MAX(a, b, c));
    printf("The smallest number is: %d\n\n",  MIN(a, b, c));

    unsigned int mask = 0;
    int bit;

    printf("Enter which index/bit you want to set in 1 (between 0 to 7): ");
    scanf("%d", &bit);
    if(bit > 7 || bit < 0){
        fprintf(stderr, "ERROR!!!\n");
    }else{
        SETBIT(mask, bit);
        printf("Mask after setting bit %d in 1: %u\n", bit, mask);
        printf("The number in binary: ");
        printBinary(mask);
    }

    mask = 255;
    printf("\nEnter which index/bit you want to set in 0 (between 0 to 7): ");
    scanf("%d", &bit);
    if(bit > 7 || bit < 0){
        fprintf(stderr, "ERROR!!!\n");
    }else{
        CLEARBIT(mask, bit);
        printf("Mask after setting bit %d in 0: %u\n", bit, mask);
        printf("The number in binary: ");
        printBinary(mask);
    }

    unsigned int inverseMask;
    printf("\n\nEnter a number between 0 and 255: ");
    scanf("%u", &inverseMask);
    if(inverseMask > 255){
        fprintf(stderr, "ERROR!!!\n");
    }else{
        printf("The number in binary: ");
        printBinary(inverseMask);
        
        printf("\nEnter which index/bit you want to inverse (between 0 to 7): ");
        scanf("%d", &bit);
        if(bit > 7 || bit < 0){
        fprintf(stderr, "ERROR!!!\n");
        }else{
        INVERSEBIT(inverseMask, bit);
        printf("Mask after inverting bit %d: %u\n", bit, inverseMask);
        printf("The number in binary after inversion: ");
        printBinary(inverseMask);
        }
        printf("\nEnter which index/bit you want to check (between 0 to 7): ");
        scanf("%d", &bit);
        if(bit > 7 || bit < 0){
        fprintf(stderr, "ERROR!!!\n");
        }else{
        int checkedBit = CHECKBIT(inverseMask, bit);
        printf("The value of bit %d is: %d\n", bit, checkedBit);
        }
    }
    
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);
    SWAP(a, b);
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

void printBinary(unsigned int num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}