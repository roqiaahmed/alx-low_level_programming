#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: The character to print
 *
 * Return: On success 1. 0 otherwise
 */
int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
