#include "search_algos.h"
#include <stdio.h>
#include <math.h>
/**
 * list_arr - print the array
 *
 * @array:pointer to the first element
 * @left:start of the  array
 * @right:end of the  array
 */
void list_arr(int *array, int left, int right)
{
    int i;

    printf("Searching in array: ");
    for (i = left; i <= right; i++)
    {
        printf("%d", array[i]);
        if (i != right)
            printf(", ");
    }
    printf("\n");
}

/**
 * exponential_search - searches for a value in an array
 *
 * @array: pointer to the first element
 * @size:the number of elements in array
 * @value:the value to search for
 *
 * Return: -1 if it not found or array is null, the index of array
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t left = 0, mid, right = size - 1;
    if (array[left] != value)
        left = 1;
    while (array[left] <= value && left <= size)
    {
        printf("Value checked array[%lu] = [%d]\n", left, array[left]);
        if (array[left] == value)
            return (left);
        left *= 2;
    }
    if (array[left] > value)
    {
        if (left < size)
            right = left;
        else
            right = size - 1;
    }

    left = left / 2;
    printf("Value found between indexes [%lu] and [%lu]\n", left, right);
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        list_arr(array, left, right);
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return (-1);
}
