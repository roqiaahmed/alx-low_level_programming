#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers to 98
 */
void print_to_98(int n)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
};
if (n > 98)
{
for (; n >= 98; n--)
{
if (n != 98)
printf("%d, ", n);	
else
{
printf("%d", n);
printf("\n");
};
};
};
if (n < 98)
{
for (; n <= 98; n++)
{
if (n != 98)
printf("%d, ", n);
else
{
printf("%d", n);
printf("\n");
};      
};
};
}
