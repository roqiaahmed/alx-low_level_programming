#include "main.h"
#include <stdlib.h>
/**
 * _size - check the number of stirng
 *@str: the stirng
 *
 * Return: number.
 */
int _size(char *str)
{
int i = 0;
while (str[i] != '\0')
i++;
return (i);
}
/**
 * string_nconcat - concatenates two strings.
 *@s1: the stirng one
 *@s2: the stirng two
 *@n: size of s2
 *
 * Return: concatenates.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int j;
int i;
char *ptr;
if (s2 == NULL)
s2 = "";
ptr = malloc(sizeof(char) * (_size(s1) + _size(s2) + 1));
if (ptr == NULL)
return (NULL);
for (i = 0; i < _size(s1); i++)
ptr[i] = s1[i];
for (j = 0; j < n; j++)
ptr[_size(s1) + j] = s2[j];
return (ptr);
}
