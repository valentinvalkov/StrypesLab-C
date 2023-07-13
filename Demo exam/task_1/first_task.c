#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int compareByModelAscending(const void* a, const void* b);
int compareByModelDescending(const void* a, const void* b);
int compareByMaxSpeedAscending(const void* a, const void* b);
int compareByMaxSpeedDescending(const void* a, const void* b);
int compareByPriceAscending(const void* a, const void* b);
int compareByPriceDescending(const void* a, const void* b);
int (*getComparator(int n))(const void*, const void*);

typedef struct {
    char model[21];
    uint16_t maxspeed;
    double price;
} Car;

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

int compareByModelAscending(const void* a, const void* b) {
    const Car* carA = (const Car*)a;
    const Car* carB = (const Car*)b;
    return strcmp(carA->model, carB->model);
}

int compareByModelDescending(const void* a, const void* b) {
    return -compareByModelAscending(a, b);
}

int compareByMaxSpeedAscending(const void* a, const void* b) {
    const Car* carA = (const Car*)a;
    const Car* carB = (const Car*)b;
    return (int)(carA->maxspeed) - (int)(carB->maxspeed);
}

int compareByMaxSpeedDescending(const void* a, const void* b) {
    return -compareByMaxSpeedAscending(a, b);
}

int compareByPriceAscending(const void* a, const void* b) {
    const Car* carA = (const Car*)a;
    const Car* carB = (const Car*)b;
    if (carA->price < carB->price)
        return -1;
    else if (carA->price > carB->price)
        return 1;
    else
        return 0;
}

int compareByPriceDescending(const void* a, const void* b) {
    return -compareByPriceAscending(a, b);
}

int (*getComparator(int n))(const void*, const void*) {
    switch (n) {
        case 1:
            return compareByModelAscending;
        case 2:
            return compareByModelDescending;
        case 3:
            return compareByMaxSpeedAscending;
        case 4:
            return compareByMaxSpeedDescending;
        case 5:
            return compareByPriceAscending;
        case 6:
            return compareByPriceDescending;
        default:
            return NULL;
    }
}