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
 * str_concat - copy the string
 *@s1: the stirng one
 *@s1: the stirng two
 *
 * Return: NULL if fails and the string if right.
 */
char *str_concat(char *s1, char *s2)
{
int i;
int s1size = _size(s1);
int s2size = _size(s2);
char *ptr = malloc(s1size + s2size);
if (s1size == 0 || s2size == 0 || s1 == NULL || s2 == NULL)
return (NULL);
for (i = 0; i < s1size; i++)
ptr[i] = s1[i];
for (i = 0; i < s2size; i++)
ptr[s1size + i] = s2[i];
return (ptr);
}
