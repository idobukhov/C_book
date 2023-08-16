#include <stdio.h>

#define MAXSYMBLINE 1000

int getLine(char line[], int maxsymbline);
void copy(char to[], char from[]);

int main(void) {
    int lenCurrentLine;
    int lenMaxLine;
    char currentLine[MAXSYMBLINE];
    char longest[MAXSYMBLINE];
    
    lenMaxLine = 0;
    while ((lenCurrentLine = getLine(currentLine, MAXSYMBLINE)) > 0) 
        if (lenCurrentLine > lenMaxLine) {
            lenMaxLine = lenCurrentLine;
            copy(longest, currentLine);
        }
    if (lenMaxLine > 0)
        printf("%s", longest);
        
    return 0;
}

int getLine(char s[], int lim) {
    int c, i;

    for (i=0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
            s[i] = c;
            ++i;
    }
    s[i] = '\0';

    return i;
}

void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}


