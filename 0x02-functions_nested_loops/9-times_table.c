#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: numbers starting with 0 end to 9
 */
void times_table(void)
{
int a, b, sum;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
sum = a * b;
_putchar(sum + '0');
_putchar(',');
_putchar(' ');
};
_putchar('\n');
};
}
