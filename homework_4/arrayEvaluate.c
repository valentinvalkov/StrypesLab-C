#include <stdio.h>

int sum(int* arr, int);
void arrayEvaluate(int* arr, size_t n, int(*f)(int*, int));


int main(){
    int arr[] = {1, 2, 3};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    arrayEvaluate(arr, n, sum);

    return 0;
}

int sum(int* arr, int n){
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

void arrayEvaluate(int* arr, size_t n, int(*f)(int*,int)){
    printf("Value is: %d\n", f(arr, n));

    return; 
}