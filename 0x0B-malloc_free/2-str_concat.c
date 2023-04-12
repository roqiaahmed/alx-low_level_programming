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
 *@s2: the stirng two
 *
 * Return: NULL if fails and the string if right.
 */
char *str_concat(char *s1, char *s2)
{
int i;
char *ptr;
  int s1size = _size(s1);
int s2size = _size(s2);
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
ptr = malloc(sizeof(char) * (s1size + s2size + 1));
if (ptr == NULL)
return (NULL);
for (i = 0; i < s1size; i++)
ptr[i] = s1[i];
for (i = 0; i < s2size; i++)
ptr[s1size + i] = s2[i];
return (ptr);
}
