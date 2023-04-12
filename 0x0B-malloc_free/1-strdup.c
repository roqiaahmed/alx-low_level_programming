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
 * _strdup - copy the string
 *@str: the stirng
 *
 * Return: NULL if fals and the string if right
 */
char *_strdup(char *str)
{
int h = _size(str);
char *ptr = malloc(_size(str));
int i;
if (ptr == NULL || h == 0)
return (NULL);
for (i = 0; i < _size(str); i++)
ptr[i] = str[i];
return (ptr);
}
