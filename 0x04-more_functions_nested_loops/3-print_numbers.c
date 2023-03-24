#include "main.h"

 /** _isupper - prints the numbers
 *
 * Return: numbers from 0 to 9
 * Description: prints the numbers
 */

void print_numbers(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
_putchar(num);
};
_putchar('\n');
}
