#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in an array
 *
 * @array: pointer to the first element
 * @size:the number of elements in array
 * @value:the value to search for
 *
 * Return: -1 if it not found or array is null, the index of array
 */
int jump_search(int *array, size_t size, int value)
{
    int step = sqrt(size);
    size_t prev = 0;
    int i;
    if (array == NULL)
        return (-1);
    while (array[prev] < value && prev <= size)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev += step;
        // if (prev > size)
        //     return (-1);
    }

    i = prev - step;
    printf("Value found between indexes [%d] and [%lu]\n", i, prev);

    while (array[i] <= value)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return (i);
        }
        i++;
    }
    return (-1);
}
