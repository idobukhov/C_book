#include <stdio.h>

int main (void) {

    int spaceCount, tabCount, lineCount, currentSymb;
    spaceCount = 0;
    tabCount = 0;
    lineCount = 0;
    while ((currentSymb = getchar()) != EOF) {
        if (currentSymb == ' ') 
            ++spaceCount;

        if (currentSymb == '\t') 
            ++tabCount;

        if (currentSymb == '\n')
            ++lineCount;

     }
    printf("Count space -- %d \n count tab -- %d \n count line -- %d \n", spaceCount, tabCount, lineCount);
        return 0;
}
