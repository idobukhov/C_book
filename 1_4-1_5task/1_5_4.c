#include <stdio.h>

/* Четвертая из нашей серии полезных программ подсчитывает строки, слова и символы, причем под словом */
/* здесь имеется в виду любая строка символов, не содержащая в себе пробелов, табуляций и символов новой */
/* строки. Эта программа является упрощенной версией программы wc системы UNIX. */

#define INWORD 1 
#define OUTWORD 0

int main (void) {
    int currentSymb, newLine, newWord, newCymbol, state;
    state = OUTWORD;
    newLine = newWord = newCymbol = 0;
    while ((currentSymb = getchar()) != EOF) {
        ++newCymbol;
        if (currentSymb == '\n')
            ++newLine;
        if (currentSymb == ' ' || currentSymb == '\n' || currentSymb == '\t')
            state = OUTWORD;
        else if (state == OUTWORD) {
            state = INWORD;
            ++newWord;
        }
        
    }
    printf("line - %d ;\n word - %d ;\n cymbol - %d ;\n", newLine, newWord, newCymbol);

    
}
