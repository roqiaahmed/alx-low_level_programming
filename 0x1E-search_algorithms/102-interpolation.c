#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * interpolation_search - searches for a value in an array
 *
 * @array: pointer to the first element
 * @size:the number of elements in array
 * @value:the value to search for
 *
 * Return: -1 if it not found or array is null, the index of array
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t high = size - 1;
    size_t low = 0;
    size_t pos;

    while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
    {
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
        if (array[pos] < value)
            low = pos + 1;
        else if (value < array[pos])
            high = pos - 1;
        else
            return pos;
    }
    if (value == array[low])
        return low;
    else
    {
        printf("Value checked array[%lu] is out of range\n", pos);
        return -1;
    }
}
