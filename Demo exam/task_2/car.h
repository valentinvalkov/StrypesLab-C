#ifndef CAR_H
#define CAR_H

#include <stdint.h>

typedef struct {
    char model[21];
    uint16_t maxspeed;
    double price;
} Car;

int compareByModelAscending(const void* a, const void* b);
int compareByModelDescending(const void* a, const void* b);
int compareByMaxSpeedAscending(const void* a, const void* b);
int compareByMaxSpeedDescending(const void* a, const void* b);
int compareByPriceAscending(const void* a, const void* b);
int compareByPriceDescending(const void* a, const void* b);
int (*getComparator(int n))(const void*, const void*);

#endif