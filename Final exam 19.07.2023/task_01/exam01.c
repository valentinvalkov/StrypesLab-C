#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h> 

#define TITLE_LENGTH 101
#define AUTHOR_LENGTH 101
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
void printBooks(Book *, int);

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

int main() {
    Book books[BOOK_COUNT];
    srand(time(NULL));
    
    for (int i = 0; i < BOOK_COUNT; i++) {
        char title[TITLE_LENGTH];
        int titleLength = rand() % 11 + 10; 
        for (int j = 0; j < titleLength; j++) {
            if (j == 0) {
                title[j] = 'A' + rand() % 26;
            } else {
                title[j] = 'a' + rand() % 26;
            }
        }
        title[titleLength] = '\0';
        strncpy(books[i].title, title, TITLE_LENGTH);
        
        char author[AUTHOR_LENGTH];
        int firstNameLength = rand() % 8 + 3;
        int lastNameLength = rand() % 8 + 3;
        for (int j = 0; j < firstNameLength; j++) {
            if (j == 0) {
                author[j] = 'A' + rand() % 26;
            } else {
                author[j] = 'a' + rand() % 26;
            }
        }
        author[firstNameLength] = ' ';
        for (int j = 0; j < lastNameLength; j++) {
            if (j == 0) {
                author[firstNameLength + 1 + j] = 'A' + rand() % 26;
            } else {
                author[firstNameLength + 1 + j] = 'a' + rand() % 26;
            }
        }
        author[firstNameLength + lastNameLength + 1] = '\0';
        strncpy(books[i].author, author, AUTHOR_LENGTH);
        
        books[i].pages = rand() % 991 + 10;
        
        books[i].price = (double)(rand() % 9801 + 200) / 100.0;
    }
    
    printf("\tBefore sorting:\n");
    printf("-----------------------------------\n");
    printBooks(books, BOOK_COUNT);
    
    int choice;
    printf("-----------------------------------\n");
    printf("\tChoose the option\n");
    printf("-----------------------------------\n");
    printf("1. Compare books title ascending\n");
    printf("2. Compare books title descending\n");
    printf("3. Compare books pages ascending\n");
    printf("4. Compare books pages descending\n");
    printf("5. Compare books price ascending\n");
    printf("6. Compare books price descending\n");
    printf("-----------------------------------\n");
    printf("Enter sorting option (1-6): ");
    scanf("%d", &choice);
    printf("-----------------------------------\n");
    
    comparator_t comparator = getComparator(choice);
    if (comparator == NULL) {
        fprintf(stderr, "Invalid choice!!!\n");
        return -1;
    }
    
    qsort(books, BOOK_COUNT, sizeof(Book), comparator);
    
    printf("\n\tAfter sorting:\n");
    printf("-----------------------------------\n");
    printBooks(books, BOOK_COUNT);
    
    return 0;
}