#include "holberton.h"
/**
 * _strncat - concatenates two string
 *
 * @dest: first string
 * @src: second string
 * @n: most n bytes from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int len = 0;
int i;
while (dest[len])
{
len++;
}
for (i = 0; i < n && src[i]; i++)
{
dest[len++] = src[i];
}
return (dest);
}
