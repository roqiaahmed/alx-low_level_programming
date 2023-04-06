#include "main.h"
/**
 * count - count i
 * @i: input
 * @n: input
 * Return: is prime number 0 , is not prime number 1
 */
int count(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 1)
return (0);
return (count(n, i - 1));
}
/**
 * is_prime_number - check prime number
 * @n: input
 * Return: prime number
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (count(n, n - 1));
}
