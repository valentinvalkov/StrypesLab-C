#ifndef BOOKS_H
#define BOOKS_H

#include <stdint.h>

#define TITLE_LENGTH 100
#define AUTHOR_LENGTH 100
#define BOOK_COUNT 15

typedef struct {
    char title[TITLE_LENGTH];
    char author[AUTHOR_LENGTH];
    uint16_t pages;
    double price;
} Book;

typedef int (*comparator_t)(const void *, const void *);

int compareTitleAscending(const void *, const void *);
int compareTitleDescending(const void *, const void *);
int comparePagesAscending(const void *, const void *);
int comparePagesDescending(const void *, const void *);
int comparePriceAscending(const void *, const void *);
int comparePriceDescending(const void *, const void *);
comparator_t getComparator(int);
void printBooks(Book *, int );

#endif