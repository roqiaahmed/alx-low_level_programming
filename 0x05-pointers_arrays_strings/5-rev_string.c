#include "main.h"

 /**
  * rev_string - reverses a string.
  *
  * @s: The character to print
  */

void rev_string(char *s)
{
int i, n;
i = 0;
n = 0;

while (s[i] != '\0')
{
n++;
i++;
}
for (i = 0; i < n / 2; i++)
{
char temp = s[i];
s[i] = s[n - i - 1];
s[n - i - 1] = temp;
}
}
