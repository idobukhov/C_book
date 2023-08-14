/* Упражнение 1.15. Перепишите программу преобразования температур, выделив само преобразование в */
/* отдельную функцию. */

#include <stdio.h>

float converFahrToCelsius(int fahr);

int main(void) {
    int fahr = 0;
    printf("значение фаренгейт \t %d | %.1f \t по цельсию \n", fahr, converFahrToCelsius(fahr));

    return 0;   
}

float converFahrToCelsius(int fahr) {

    return (5.0/9.0) * (fahr - 32.0);
}
