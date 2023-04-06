#include "main.h"
/**
 * _sqrt_recursion - natural square root
 * @n: input
 * Return: result of square root
 */
int count(int n, int i);
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (count(n, 0));
}
/**
 * count - count i
 * @n: input
 * @i: input
 * Return: result of number i
 */
int count(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (count(n, i + 1));
}
