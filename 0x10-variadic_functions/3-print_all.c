#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all variable.
 * @format: list of types of arguments passed to the function
 *
 * Return: all variable
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *spc = "", *str;
va_list ptr;
va_start(ptr, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", spc, va_arg(ptr, int));
break;

case 'i':
printf("%s%d", spc, va_arg(ptr, int));
break;

case 'f':
printf("%s%f", spc, va_arg(ptr, double));
break;

case 's':
str = va_arg(ptr, char *);
if (!str)
printf("%s(nil)", spc);

printf("%s%s", spc, str);
break;
}
spc = ", ";
i++;
}
}
printf("\n");
va_end(ptr);
}
