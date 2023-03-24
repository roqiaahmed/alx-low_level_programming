#include "main.h"

 /** print_most_numbers - prints the numbers
 *
 * Return: number from 0 to 9 without (2 , 4)
 * Description: prints the numbers from 0 to 9 without (2 , 4)
 */

void print_most_numbers(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
if (num != '4' && num != '2')
_putchar(num);
};
_putchar('\n');
}
