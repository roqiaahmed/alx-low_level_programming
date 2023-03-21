#include "main.h"
/**
 * print_last_digit - prints the last digit of a numbe
 * @n:the number to be treated
 * Return: value of the last digit of the number
 */
int print_last_digit(int n)
{
int count;
count = n % 10;
if (count < 0)
{
count = count * -1;
};
_putchar(count + '0');
return (count);
}
