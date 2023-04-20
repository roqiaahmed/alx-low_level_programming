#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers.
 * @n: number of parameters
 * @separator: string
 *
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ptr, int));
if (separator)
if (i != n - 1)
printf("%s",  separator);
}
printf("\n");
va_end(ptr);
}
