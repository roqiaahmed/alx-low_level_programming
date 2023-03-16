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
printf("Size of a char: %c byte(s)", sizeof(c));
printf("Size of an int: %d byte(s)", sizeof(i));
printf("Size of a long int: %d byte(s)", sizeof(lg));
printf("Size of a long long int: %d byte(s)", sizeof(x));
printf("Size of a long float: %f byte(s)", sizeof(f));
return (0);
}
