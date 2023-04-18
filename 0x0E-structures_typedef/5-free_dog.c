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
d->name = "";
d->age = 0;
d->owner = NULL;
}
