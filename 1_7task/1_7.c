#include <stdio.h>

int power(int m, int n);

int main (void) {
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    printf("2 %d \n", power(2, 2));
    return 0;
}

int power(int base, int n) {
    int i;
    int p = 1; 
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}
