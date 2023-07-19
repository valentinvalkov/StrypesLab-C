#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
#include "books.h"

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
        printf("Invalid choice!!!\n");
        return 1;
    }
    
    qsort(books, BOOK_COUNT, sizeof(Book), comparator);
    
    printf("\n\tAfter sorting:\n");
    printf("-----------------------------------\n");
    printBooks(books, BOOK_COUNT);
    
    return 0;
}