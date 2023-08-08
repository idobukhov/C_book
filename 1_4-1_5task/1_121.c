#include <stdio.h>
/* Упражнение 1.12. Напишите программу, которая печатает содержимое своего ввода, помещая по одному */
/* слову на каждой строке. */

int main (void) {
    int currentSymb;
    while ((currentSymb = getchar()) != EOF)
        if (currentSymb == ' ' || currentSymb == '\t') {
            currentSymb = '\n';
            putchar(currentSymb);
        } else putchar(currentSymb);
       
    return 0;
}
