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
int *ptr;
ptr = malloc(size * nmemb);
if (ptr == 0)
return (NULL);
return (ptr);
}
