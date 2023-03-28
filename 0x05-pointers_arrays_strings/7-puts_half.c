#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */


void puts_half(char *str)
{
int i, len, n;
i = 0;
len = 0;
while (str[i] != '\0')
{
len++;
i++;
}
n = ( len / 2);

if (len % 2 == 1)
n = ( len - 1) / 2;
{
for (i = n ; i < len; i++)
putchar(str[i]);   
}
putchar('\n');
}
