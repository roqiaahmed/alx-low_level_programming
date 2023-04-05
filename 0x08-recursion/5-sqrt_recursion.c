#include "main.h"
/**
 * _sqrt_recursion - natural square root
 * @n: input
 * Return: result of square root
 */

int _sqrt_recursion(int n)
{
int i;
if (n < 0)
return (-1);
i = 0;
while (i *i != n)
{
if (i *i > n)
return (-1);
i++;
}
return (i);
}
