#include <stdio.h>
#include <stdlib.h>

unsigned sumArrayDigits(const int* arr, size_t n);

int main(){
    int arr[] = {12, 34, 5, 70};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    unsigned result = sumArrayDigits(arr, n);
    printf("The sum of all numbers in the array is: %u\n", result);

    return 0;
}

unsigned sumArrayDigits(const int* arr, size_t n){
    unsigned sum = 0;

    for (size_t i = 0; i < n; i++) {
        int num = arr[i];

        while (num != 0) {
            int digit = num % 10;
            sum += digit;  
            num /= 10;  
        }
    }
    return sum;
}