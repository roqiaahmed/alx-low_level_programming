#include "main.h"

 /**
  * print_rev - prints a string, in reverse
  *
  * @s: The character to print
  */
void print_rev(char *s)
{

int i = 0;
int n;

n = strlen(s);
s--;
for (i = n; i > 0; i--)
{
char test = s[i];
_putchar(test);
}
_putchar('\n');
}
