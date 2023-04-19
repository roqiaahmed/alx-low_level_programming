#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * @array: the array
 * @action: pointer to the function
 * @size: how many elem to print
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
