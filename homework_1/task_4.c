#include <stdio.h>

int main() {
    int octalNumber;

    printf("Enter a octal number with 3 digits: ");
    scanf("%d", &octalNumber);

    int user = octalNumber / 100;
    int group = (octalNumber % 100) /10;
    int other = octalNumber % 10;

    printf("\nUser:\n");
    printf("%c%c%c\n", (user & 4) ? 'R' : '-', (user & 2) ? 'W' : '-', (user & 1) ? 'X' : '-');
    printf("Group:\n");
    printf("%c%c%c\n", (group & 4) ? 'R' : '-', (group & 2) ? 'W' : '-', (group & 1) ? 'X' : '-');
    printf("Other:\n");
    printf("%c%c%c\n", (other & 4) ? 'R' : '-', (other & 2) ? 'W' : '-', (other & 1) ? 'X' : '-');

    return 0;
}