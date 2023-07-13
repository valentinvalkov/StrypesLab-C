#include <string.h>
#include "car.h"


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