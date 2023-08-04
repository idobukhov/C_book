#include <stdio.h>

int main (void) {

    int currentSymb, spaceCount, word;
    spaceCount = 0;

    while ((currentSymb = getchar()) != EOF ) {
        if (currentSymb == ' ')
            ++spaceCount;
        else {
            spaceCount = 0;
        }
        if (spaceCount <= 1) 
            putchar(currentSymb);
    }

    return 0;
}
