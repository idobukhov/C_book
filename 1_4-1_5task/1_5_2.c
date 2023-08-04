#include <stdio.h>
/* подсчет вводимых символов; 1-я версия */
int main (void)
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf ("%ld\n", nc);
    return 0;
}
