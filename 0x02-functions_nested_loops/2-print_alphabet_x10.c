#include "main.h"
/*
 * print_alphabet_x10 - print alphabet x10
 */
void print_alphabet_x10(void)
{
int i;
char l;
for (i = 0; i <= 10; i++)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
i++;
}
}
