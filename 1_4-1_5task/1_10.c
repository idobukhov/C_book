#include <stdio.h>

int main(void) {

    int currentSymb, spaceCount;
    while ((currentSymb = getchar()) != EOF) {
        if (currentSymb == '\t') printf("%s", "\\t");
        else if (currentSymb == '\b') printf("%s", "\\b");
        else if (currentSymb == '\\') printf("%s", "\\\\");
        else putchar(currentSymb);
    }           
    return 0;
}
