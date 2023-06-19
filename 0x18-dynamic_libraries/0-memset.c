#include "main.h"
/**
 * _memset - fills memory with a constant
 * @s: input value
 * @b: input value
 * @n: input value
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *str = s;
for (i = *s; i < n; i++)
str[i] = b;
return (s);
}
