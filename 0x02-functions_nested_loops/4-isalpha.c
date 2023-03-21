#include "main.h"
#include <ctype.h>
/*
 * int _isalpha - int isalpha
 */
int _isalpha(int c)
{
if (islower(c))
return (1);
else
return (0);
}
