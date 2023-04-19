#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int a, b;
char *s;
(void)argc;
if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
s = argv[2];
if ((*s == '/' && b == 0) ||
(*s == '%' && b == 0))
{
printf("Error\n");
exit(100);
}
if (get_op_func(s) == NULL || s[1] != '\0')
{
printf("Error\n");
exit(99);
}
printf("%d\n", get_op_func(s)(a, b));
return (0);
}
