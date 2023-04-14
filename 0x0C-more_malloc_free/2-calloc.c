#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 *@nmemb: unsigned int
 *@size: unsigned int
 *
 * Return: NULL if fails and the allocates memory for an array if right.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
for (i = 0; i < n; i++)
{
ptr[i] = '0';
}
return (ptr);
}
