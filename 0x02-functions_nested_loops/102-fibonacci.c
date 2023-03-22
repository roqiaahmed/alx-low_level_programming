#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num1, num2, num3, i;
num1 = 1;
num2 = 2;
pritf("%d, %d, ", num1, num2);
for (i = 1; 1 <= 50; i++)
{
num3 = num1 + num2;
pritf("%d, ", num3);
num1 = num2;
num2 = num3;
}
return (0);
}
