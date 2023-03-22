#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;
if (a > b)
{
if (b > c)
largest = a;
else if (c > b && c > a)
largest = c;
else
largest = a;
};
if (b > c)
{
if (c > a)
largest = b;
else if (a > c && a > b)
largest = a;
else
largest = b;
};
if (c > a)
{
if (a > b)
largest = c;
else if (b > a && b > c)
largest = b;
else
largest = c;
};
return (largest);
}
