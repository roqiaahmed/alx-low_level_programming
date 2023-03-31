#include "main.h"
/**
 * leet - encode into 1337speak
 * @s: input value
 * Return: n value
 */

char *leet(char *s)
{
int i, j;
char num[] = "4433007711";
char temp[] = "aAeEoOtTLl";
for (i = 0 ; s[i] != '\0'; i++)
for (j = 0; j <= 10; j++)
if (s[i] == temp[j])
s[i] = num[j];
return (s);
}
