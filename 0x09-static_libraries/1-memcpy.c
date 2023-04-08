#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i, j;
j = 0;
for (i = *dest; i < n; i++)
{
dest[i] = src[j];
j++;
}
return (dest);
}
