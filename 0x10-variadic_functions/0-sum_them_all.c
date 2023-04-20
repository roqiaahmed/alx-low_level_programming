#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters.
 *@n: number of parameters
 *
 * Return: sum all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum, i;
va_list ptr;
va_start(ptr, n);
sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(ptr, int);
va_end(ptr);
return (sum);
}
