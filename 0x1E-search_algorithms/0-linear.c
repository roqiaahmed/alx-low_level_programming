#include <stddef.h>

// #include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 *
 * @array: pointer to the first element
 * @size:the number of elements in array
 * @value:the value to search for
 *
 * Return: -1 if it not found or array is null, the index of array
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;
    if (!array)
    {
        return -1;
    }
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }
    return -1;
}
