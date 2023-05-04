#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int sum = 0;
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
return (0);
sum = 2 * sum + (b[i] - '0');
i++;
}
return (sum);
}
