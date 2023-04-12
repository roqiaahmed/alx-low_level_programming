#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **arr = (int **)malloc(width * sizeof(int *));
for (i = 0; i < width; i++)
arr[i] = (int *)malloc(height * sizeof(int));
if (width <= 0 || height <= 0)
return (NULL);
for (i = 0; i < width; i++)
for (j = 0; j < height; j++)
arr[i][j] = 0;
return (arr);
free(arr);
}
