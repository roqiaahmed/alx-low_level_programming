#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input value
 * @accept: input value
 *
 * Return: num
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
int num;
num = 0;
for (i = 0; accept[i] != '\0'; i++)
for (j = 0; s[j] != ','; j++)
if (accept[i] == s[j])
num++;
return (num);
}
