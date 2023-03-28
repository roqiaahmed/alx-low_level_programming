#include "main.h"

 /**
  * puts2 - prints every other character of a string
  *
  * @s: The character to print
  */

void puts2(char *str)
{
int i, n;
i = 0;
n = 0;

while (str[i] != '\0')
{
n++;
i++;
}

for (i = 0; i < n; i++)
{
if (str[i] % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
