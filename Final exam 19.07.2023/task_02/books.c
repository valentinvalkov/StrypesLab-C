#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "books.h"

int compareTitleAscending(const void *value1, const void *value2) {
    Book *book1 = (Book *)value1;
    Book *book2 = (Book *)value2;
    return strcmp(book1->title, book2->title);
}

int compareTitleDescending(const void *value1, const void *value2) {
    Book *book1 = (Book *)value1;
    Book *book2 = (Book *)value2;
    return strcmp(book2->title, book1->title);
}

int comparePagesAscending(const void *value1, const void *value2) {
    Book *book1 = (Book *)value1;
    Book *book2 = (Book *)value2;
    return book1->pages - book2->pages;
}

int comparePagesDescending(const void *value1, const void *value2) {
    Book *book1 = (Book *)value1;
    Book *book2 = (Book *)value2;
    return book2->pages - book1->pages;
}

int comparePriceAscending(const void *value1, const void *value2) {
    Book *book1 = (Book *)value1;
    Book *book2 = (Book *)value2;
    if (book1->price < book2->price) {
        return -1;
    } else if (book1->price > book2->price) {
        return 1;
    } else {
        return 0;
    }
}

int comparePriceDescending(const void *value1, const void *value2) {
    Book *book1 = (Book *)value1;
    Book *book2 = (Book *)value2;
    if (book1->price < book2->price) {
        return 1;
    } else if (book1->price > book2->price) {
        return -1;
    } else {
        return 0;
    }
}

comparator_t getComparator(int n) {
    switch (n) {
        case 1:
            return compareTitleAscending;
        case 2:
            return compareTitleDescending;
        case 3:
            return comparePagesAscending;
        case 4:
            return comparePagesDescending;
        case 5:
            return comparePriceAscending;
        case 6:
            return comparePriceDescending;
        default:
            return NULL;
    }
}

void printBooks(Book *books, int count) {
    for (int i = 0; i < count; i++) {
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Pages: %d\n", books[i].pages);
        printf("Price: %.2f\n\n", books[i].price);
    }
}