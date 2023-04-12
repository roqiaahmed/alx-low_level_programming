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
char *ptr;
int i;
if (str == NULL)
return (NULL);
ptr = malloc(sizeof(char) * (_size(str) + 1));
if (ptr == NULL)
return (NULL);
for (i = 0; i < _size(str); i++)
ptr[i] = str[i];
return (ptr);
}
