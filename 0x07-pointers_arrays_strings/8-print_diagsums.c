#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int i;
int sum_right, sum_left;
sum_right = 0;
sum_left = 0;

for (i = 0; i < size; i++)
{
sum_left += a[i * size + i];
}
for (i = size - 1; i >= 0; i--)
{
sum_right += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", sum_left, sum_right);
}
