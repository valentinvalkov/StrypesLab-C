#include <stdio.h>
#include <stdlib.h>
#include "car.h"

int main() {
    Car cars[] = {
        {"Mercedes", 250, 80000.0},
        {"BMW", 240, 75000.0},
        {"Audi", 230, 70000.0},
        {"Mazda", 205, 90000.0},
        {"Ferrari", 300, 100000.0},
        {"Porsche", 290, 90000.0},
        {"VW", 190, 55000.0},
        {"Dacia", 180, 30000.0},
        {"Seat", 200, 50000.0},
        {"Lada", 170, 35000.0}
    };

    int comparatorNumber;

    printf("Enter a number 1 to 6: ");
    scanf("%d", &comparatorNumber);

    int (*comparator)(const void*, const void*) = getComparator(comparatorNumber);
    
    if (comparator != NULL) {
        qsort(cars, sizeof(cars) / sizeof(cars[0]), sizeof(cars[0]), comparator);
        
        printf("\nSorted Cars:\n");
        for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++) {
            printf("Model: %s\t\tMax Speed: %d\t\tPrice: %.2lf $\n",
                   cars[i].model, cars[i].maxspeed, cars[i].price);
        }
    } else {
        printf("Invalid comparator number\n");
    }
    
    return 0;
}