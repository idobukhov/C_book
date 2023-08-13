#include <stdio.h>
/* Упражнение 1.13. Напишите программу, печатающую гистограммы длин вводимых слов. Гистограмму легко */
/* рисовать горизонтальными полосами. Рисование вертикальными полосами — более трудная задача */

int currentSymb, symbCount, i, state;

#define INWORD 1
#define OUTWORD 0

int main (void) {
    symbCount = 0;
    state = OUTWORD;

    while ((currentSymb = getchar()) != EOF)
        if (currentSymb == ' ' || currentSymb == '\t' || currentSymb == '\n') {   
            state = OUTWORD;
            printf(" ");
        }
        else if (state == OUTWORD) {
            ++symbCount;
            printf("-");
        }
    
    return 0;
}
