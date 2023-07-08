#include <stdio.h>

int secondMax(const int* arr, size_t n, int* secondMax);

int main(){
    
    int arr[] = {12, 34, 5, 70, 46}; //different elements in the array
    //int arr[] = {7, 7, 7, 7, 7}; //equal elements in array
    //int arr[] = {12}; // one element in array
    //int arr[] = {}; // empty array

    int secondValue;
    int result = secondMax(arr, sizeof(arr) / sizeof(arr[0]), &secondValue);
    
    if (result == 0) {
        printf("Second biggest element in array is: %d\n", secondValue);
    } else if (result == -1) {
        fprintf(stderr, "Empty array!!!\n");
    } else if (result == -2) {
        fprintf(stderr, "Array has only one element!!!\n");
    } else if (result == 1) {
        fprintf(stderr, "All elements in array are equal!!!\n");
    }

    return 0;
}

int secondMax(const int* arr, size_t n, int* secondMax){
    if (n == 0){

        return -1;
    } else if(n == 1){

        return -2;
    }

    int max = arr[0];
    * secondMax = arr[0];

     for (size_t i = 1; i < n; i++) {
        if (arr[i] > max) {
            * secondMax  = max;
            max = arr[i];
        } else if (arr[i] > * secondMax && arr[i] < max) {
            * secondMax  = arr[i];
        }
    }

    if (max == * secondMax) {

        return 1;
    }

    return 0;
}