#include "main.h"
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i, mul = 1;
if (argc > 1)
{
for (i = 1; i < argc; i++)
mul = mul * atoi(argv[i]);
printf("%d\n", mul);
return (0);
}
printf("Error\n");
return (1);
}
