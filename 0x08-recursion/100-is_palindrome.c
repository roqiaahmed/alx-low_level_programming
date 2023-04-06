#include "main.h"
/**
 * comp - check palindrome string
 * @n: input
 * @s:string
 * Return: 0 or 1
 */
int comp(int n, char *s)
{
int i = 0;
if (s[i] == s[n - 1 - i])
return (1);
else
return (0);
return (comp(n, s));
}
/**
 * is_palindrome - check palindrome string
 * @s:string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
int num = 0;
if (*s != '\0')
{
num++;
num += is_palindrome(s + 1);
}
return (comp(num, s));
}
