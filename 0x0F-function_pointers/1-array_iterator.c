#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * @array: the array
 * @action: pointer to the function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
long unsigned int i;
for (i = 0; i < size; i++)
action(array[i]);
}
