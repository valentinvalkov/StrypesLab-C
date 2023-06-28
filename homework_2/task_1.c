#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

bool isEmpty(uint64_t set);
uint64_t add(uint64_t set, uint64_t index);
uint64_t REMOVE(uint64_t set, uint64_t index);
bool isFull(uint64_t set);
bool  isSubset(uint64_t setA, uint64_t setB);
uint64_t UNION(uint64_t setA, uint64_t setB);
uint64_t INTERSECT(uint64_t setA, uint64_t setB);
uint64_t difference(uint64_t setA, uint64_t setB);
char numElements(uint64_t set);

int main() {
    uint64_t mask = 0;

    printf("Enter a number: ");
    scanf("%llu", &mask);

    for (int i = 63; i >= 0; i--) {
        printf("%d", !!(mask & (UINT64_C(1) << i)));
    }

    printf("\n");

    if (isEmpty(mask)==1) {
        printf("The set is empty.\n");
    }else if(isFull(mask)==1){
         printf("The set is full.\n");
    }
    
    uint64_t index;
    printf("Enter an index to add to the set: ");
    scanf("%llu", &index);

    mask = add(mask, index);

    for (int i = 63; i >= 0; i--) {
        printf("%d", !!(mask & (UINT64_C(1) << i)));
    }
    
    printf("\n");
    
    printf("Enter an index to remove to the set: ");
    scanf("%llu", &index);

    mask = REMOVE(mask, index);

    for (int i = 63; i >= 0; i--) {
        printf("%d", !!(mask & (UINT64_C(1) << i)));
    }

    printf("\n");

    char numElementsSet = numElements(mask);
    printf("The number of elements in the set is: %d", numElementsSet);

    printf("\n\n");

    uint64_t setA, setB;
    printf("Enter two numbers (setA and setB): ");
    scanf("%llu %llu", &setA, &setB);

    if (isSubset(setA, setB)) {
        printf("setB is a subset of setA.");
    } else {
        printf("setB is not a subset of setA.");
    }

    printf("\n");
    
    uint64_t unionSet = UNION(setA, setB);
    printf("The union of setA and setB is: %llu\n", unionSet);
    
    for (int i = 63; i >= 0; i--) {
        printf("%d", !!(unionSet & (UINT64_C(1) << i)));
    }

    printf("\n");

    uint64_t intersectSet = INTERSECT(setA, setB);
    printf("The intersect of setA and setB is: %llu\n", intersectSet);
    
    for (int i = 63; i >= 0; i--) {
        printf("%d", !!(intersectSet & (UINT64_C(1) << i)));
    }

    printf("\n");

    uint64_t differenceSet = difference(setA, setB);
    printf("The difference of setA and setB is: %llu\n", differenceSet);
    
    for (int i = 63; i >= 0; i--) {
        printf("%d", !!(differenceSet & (UINT64_C(1) << i)));
    }

    return 0;
}

bool isEmpty(uint64_t set) {
    if (set == 0) {
        return 1;
    }
    return 0;
}

uint64_t add(uint64_t set, uint64_t index) {
    set |= (UINT64_C(1) << index);
    return set;
}

uint64_t REMOVE(uint64_t set, uint64_t index) {
    set &= ~(UINT64_C(1) << index);
    return set;
}

bool isFull(uint64_t set){
    if(set == UINT64_MAX){
        return 1;
    }
    return 0;
}

bool  isSubset(uint64_t setA, uint64_t setB){
    if((setB & setA) == setB){
        return 1;
    }

    return 0;
}

uint64_t UNION(uint64_t setA, uint64_t setB){
        return setA | setB;
}

uint64_t INTERSECT(uint64_t setA, uint64_t setB){
    return setA & setB;
}

uint64_t difference(uint64_t setA, uint64_t setB){
    return setA & ~setB;
}

char numElements(uint64_t set){
    char count = 0;
    for (int i = 0; i < 64; i++) {
        if (set & (UINT64_C(1) << i)) {
            count++;
        }
    }
    return count;
}