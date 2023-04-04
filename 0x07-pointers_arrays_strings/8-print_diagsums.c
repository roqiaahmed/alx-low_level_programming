#include <stdio.h>
#include "main.h"
/**
 * print_diagsums- prints the sum of the two diagonals
 * @a: array
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
int i;
const (*temp)[size] = a;
int sum_right, sum_left;
sum_right = 0;
sum_left = 0;
for (i = 0; i < size; i++)
{
sum_left += temp[i][i];
sum_right += temp[i][size - 1 - i];
}
printf("%d, %d\n", sum_left, sum_right);
}
