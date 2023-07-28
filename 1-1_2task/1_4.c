#include <stdio.h>

/* Нужно распечатать таблицу температур по Фаренгейту и цельсию  */
/* Для переменной fahr из 0 20 ... 300 */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300; 
    step = 20; 

    celsius = lower;

    printf("Таблица температур По \n Цел \t Фар \n");
    while (celsius <= upper) {
        fahr = 1.8 * celsius + 32.0;
        printf ("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
