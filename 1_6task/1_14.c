#include <stdio.h>

/* Упражнение 1.14. Напишите программу, печатающую гистограммы частот встречаемости вводимых */
/* символов. */

int main (void) {

    int currentSymbol, c;
    int nonprintableCharacters = 32;
    int characters = 128;
    
    unsigned long long chars[128] = { 0 };

   
    while ((currentSymbol = getchar()) != EOF) {
        if (currentSymbol >= nonprintableCharacters)
            chars[currentSymbol - nonprintableCharacters]++;
            }
    printf("\n");
    for (int i = 0; i < 128; i++) {
        if (chars[i] != 0) {
            printf("%c: %llu\n", i + nonprintableCharacters, chars[i]);

        }
    }
}
