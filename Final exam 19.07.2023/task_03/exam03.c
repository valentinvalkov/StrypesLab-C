#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initializeArray(float *, int, float, float);
void printArray(float *, int);

void initializeArray(float *array, int size, float min, float max) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        array[i] = ((float)rand() / RAND_MAX) * (max - min) + min;
    }

    return;
}

void printArray(float *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%.2f ", array[i]);
    }

    return;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Wrong argument counts! Expected arguments: n, m and p\n");
        return -1;
    }
    
    int n = atoi(argv[1]), m = atoi(argv[2]), p = atoi(argv[3]);
    
    if (n <= 0 || m <= 0 || p <= 0) {
        fprintf(stderr, "ERROR: n, m and p must be a positive number!!!\n");
        return -1;
    }
    
    float *array = malloc(n * sizeof(float));
    if (array == NULL) {
        fprintf(stderr, "Memory allocated error!!!\n");
        return -1;
    }
    
    initializeArray(array, n, 0.0, 1.0);

    printf("Array result: ");
    printArray(array, n);
    printf("\n");
    
    free(array);
    
    return 0;
}