#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers to 98
 */
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i >= 98; i--)
printf("%d, ", i);
};
if (n < 98)
{
for (i = n; i <= 98; i++)
printf("%d, ", i);
};
if (n == 98)
printf("%d, ", n);
printf("\n");
}
