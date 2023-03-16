#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long lg;
long long int x;
float f;
printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(lg));
printf("Size of a long long int: %d byte(s)\n", sizeof(x));
printf("Size of a float: %f byte(s)\n", sizeof(f));
return (0);
}
