#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 *@b: int
 *
 * Return:  pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);
if (ptr == 0)
{
exit(98);
}
return (ptr);
}
