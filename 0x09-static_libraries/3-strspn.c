#include "holberton.h"
/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: string to search bytes of
 * @accept: bytes to check
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j] != s[i]; j++)
{
if (!accept[j])
{
return (i);
}
}
}
return (i);
}
