#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free_dog
 *@d: struct
 *
 * Return: free_dog
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
