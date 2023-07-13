#include <stdio.h>
#include <stdlib.h>

void encodeNumber(char* number);

int main() {
    char number[501];
    
    printf("Enter a number: ");
    scanf("%s", number);
    
    encodeNumber(number);
    
    printf("Result: %s\n", number);
    
    return 0;
}

void encodeNumber(char* number) {
    int i = 0;
    while (number[i] != '\0') {
        if (i % 2 == 0) { // Четна позиция
            number[i] = 'A' + (number[i] - '0');
        } else { // Нечетна позиция
            switch (number[i]) {
                case '0':
                    number[i] = '!';
                    break;
                case '1':
                    number[i] = '#';
                    break;
                case '2':
                    number[i] = '/';
                    break;
                case '3':
                    number[i] = '~';
                    break;
                case '4':
                    number[i] = '=';
                    break;
                case '5':
                    number[i] = '\'';
                    break;
                case '6':
                    number[i] = '\\';
                    break;
                case '7':
                    number[i] = '>';
                    break;
                case '8':
                    number[i] = '.';
                    break;
                case '9':
                    number[i] = ',';
                    break;
                default:
                    break;
            }
        }
        i++;
    }
}