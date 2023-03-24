#include "main.h"

/** print_diagonal - draws a diagonal line
 * @n: the number of times the character
 * Description: draws a diagonal line
 */

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
};
_putchar('\\');
_putchar('\n');
};
};
}
