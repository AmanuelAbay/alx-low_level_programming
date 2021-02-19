#include "holberton.h"
/**
 * cap_string - capitalize after separator
 *
 * @s: string to capitalize
 *
 * Return: str
 */
char *cap_string(char *s)
{
int i, j;
char separ[] = " \t\n,;.!?\"(){}";
for (i = 0; s[i] != '\0'; i++)
{
if (s[0] >= 97 && s[0] <= 122)
s[0] = s[0] - 32;
for (j = 0; separ[j] != '\0'; j++)
if (s[i] == separ[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
s[i + 1] = s[i + 1] - 32;
}
return (s);
}
