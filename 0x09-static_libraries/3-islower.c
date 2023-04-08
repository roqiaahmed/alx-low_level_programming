#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character
 * Returns 1  is lowercase or Returns 0 for otherwise
 */
int _islower(int c)
{
if (islower(c))
	return (1);
else
	return (0);
}
