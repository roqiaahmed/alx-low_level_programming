#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min num
 * @max: max num
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
int *ptr;
int i;
if (max < min)
return (NULL);
ptr = malloc(sizeof(int) * (max - min + 1));
if (ptr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
ptr[i] = min++;
return (ptr);
}
