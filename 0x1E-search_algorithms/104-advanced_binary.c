#include "search_algos.h"
#include <stdio.h>

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
 * advanced_binary - searches for a value in an array
 *
 * @array: pointer to the first element
 * @size:the number of elements in array
 * @value:the value to search for
 *
 * Return: -1 if it not found or array is null, the index of array
 */
int advanced_binary(int *array, size_t size, int value)
{
    int left = 0;
    int right = size - 1;
    int i;
    if (array == NULL)
        return -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        list_arr(array, left, right);
        if (array[mid] == value)
        {
            if (mid == left || array[mid - 1] != value)
                return mid;
            else
                right = mid;
        }
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
